// Завдання
sig Task {}

// Є лише три списки: до виконання, у роботі, завершено
// Кожен список може мати завдання
abstract sig List {
    tasks: set Task
}
one sig TodoList, WipList, DoneList extends List {}

// Кожна задача належить лише одному списку
fact EachTaskInOneList {
    all t: Task | one l: List | t in l.tasks
}

// Задача не може бути одночасно у двох списках
assert NoDuplicateTasks {
    all disj l1, l2: List | no t: Task {
		t in l1.tasks
		t in l2.tasks
	}
}

// Додати хоч одну задачу
pred addTask {
    let allLists = TodoList + WipList + DoneList |
        some t: Task | t in allLists.tasks
}
// Перемістити задачу
pred moveTask[t: Task, from: List, to: List] {
    from.tasks = from.tasks - t
    to.tasks = to.tasks + t
}
// Знайти випадок, що задач взагалі немає
pred emptyLists {
	all l: List | no l.tasks
}

// Перевірки та пошуку варіантів моделі
check NoDuplicateTasks for 7
run moveTask for 7
run addTask for 10 but exactly 3 List
run emptyLists
