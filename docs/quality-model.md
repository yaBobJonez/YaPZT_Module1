# Опис кейсу

## Проєкт

Розробка настільного застосунку для управління задачами за принципом Kanban-дошки.

## Опис функціональності

- Наявність трьох статусів задач: «Не почато», «В роботі», «Завершено»
- Можливість додавати нові текстові задачі (створювати їх)
- Переміщення задач шляхом перетягування мишею між списками
- Редагування тексту задачі
- Видалення виділеної задачі
- Збереження та відновлення списків задач на носії інформації
- Можливість перенесення файлів збереження

## Умови

- Простота інтерфейсу та нативний вигляд
- Кросплатформність і портативність
- Невелике споживання ресурсів та дискового простору
- Швидкодія продукту

## Модель якості

| Характеристика | Аспект | Опис | Пріоритет |
|:---------------|:-------|:-----|:---------:|
| Функціональна придатність | Повнота | Забезпечення заявленого функціоналу | Високий |
| Функціональна придатність | Коректність | Правильність виконання функціоналу | Високий |
| Продуктивність та ефективність | Використання ресурсів | Ефективність споживання апаратних можливостей | Середній |
| Продуктивність та ефективність | Ємність | Можливість обробки великого обсягу даних | Низький |
| Зручність використання | Зрозумілість | Легкість освоєння інтерфейсу | Високий |
| Зручність використання | Керованість | Простота виконання завдань | Високий |
| Надійність | Відновлюваність | Здатність повертатися у стабільний стан | Середній |
| Обслуговуваність | Модульність | Розподіленість структури на окремі частини | Низький |
| Обслуговуваність | Аналізованість | Легкість у сприйнятті вихідного коду | Середній |
| Переносимість | Адаптованість | Можливість портування на різні платформи | Середній |

## Основні метрики

| Характеристика | Аспект | Метрика | Формула | Очікуване значення |
|:---------------|:-------|:--------|:-------:|:------------------:|
| Функціональна придатність | Повнота | Реалізація функцій | (кіл. реалізованих / кіл. заявлених) × 100% | 100% |
| Функціональна придатність | Коректність | Успішність тестів | (кіл. success / кіл. всіх тестів) × 100% | 100% |
| Продуктивність та ефективність | Використання ресурсів | Споживання RAM | спостережуване RAM / кіл. елементів дошки | < 7 МБ |
| Обслуговуваність | Аналізованість | Рядків коду | LoC | ≤ 1000 |
| Обслуговуваність | Аналізованість | Проблемність | issues / kLoC | < 10 |
| Обслуговуваність | Аналізованість | Цикломатична складність | complexity | ≤ 20 |
| Обслуговуваність | Аналізованість | Покриття | coverage | ≥ 60 |
