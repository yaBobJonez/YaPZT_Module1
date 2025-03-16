# Інструкція щодо збірки проєкту

## Апартані та програмні вимоги

### Мінімальні системні вимоги (приблизні)

-   Процесор: 2-х ядерний, 1 ГГц, amd64/x86_64
-   Оперативна пам’ять: 512 МБ (2 ГБ рекомендується)
-   Дисковий простір: 30 МБ (програма) + ~500 МБ (залежності)
-   Відеокарта з підтримкою OpenGL 2.1+ або Vulkan

### Операційні системи

-   Fedora 40+
-   Ubuntu 22.04+ / Debian 12+ / Linux Mint 21+
-   Windows 10/11

### Залежності

Fedora 41:

```sh
sudo dnf install -y gcc-c++ cmake qt6-qtbase-devel
```

Debian / Ubuntu / Linux Mint:

```sh
sudo apt update
sudo apt install -y build-essential qt6-base-dev
```

Windows 10/11:

1.  Встановіть [Qt 6.5+](https://www.qt.io/download) через Qt Online Installer.
2.  Встановіть [CMake](https://cmake.org/download/) з офіційного сайту.
3.  Використовуйте VS 2022+ або іншу IDE для збірки

Альтернативно можна використовувати Vcpkg чи Conan для керування пакунками.

## Збірка і запуск проєкту

Клонування репозиторію на Ваш компʼютер:

```sh
git clone https://github.com/yaBobJonez/YaPZT_Module1.git
cd YaPZT_Module1/
```

Зберіть програму через CMake (не тестувалась на Windows, тому інструкції для Linux).

```sh
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

Запуск застосунка відбувається натисканням двічі на виконуваний файл (TaskList_Demo\[.exe\])
у графічному середовищі або через термінал / консоль: `./TaskList_Demo`.
