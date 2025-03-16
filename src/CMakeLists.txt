cmake_minimum_required(VERSION 3.19)
project(YaPZT_Module1 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)
find_package(GTest REQUIRED)

# === Програма ===

qt_standard_project_setup()

qt_add_executable(TaskList_Demo
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

target_link_libraries(TaskList_Demo
    PRIVATE
        Qt::Core
        Qt::Widgets
)

# === Тести ===

enable_testing()

add_executable(TaskList_Tests
    tst_single_list.cpp
    tst_save_file.cpp
)

target_link_libraries(TaskList_Tests
    PRIVATE
        Qt::Core
        Qt::Widgets
        GTest::GTest
        GTest::Main
)

add_test(NAME TaskListTest COMMAND TaskList_Tests)

# === Інсталяція ===

include(GNUInstallDirs)

install(TARGETS TaskList_Demo
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET TaskList_Demo
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
