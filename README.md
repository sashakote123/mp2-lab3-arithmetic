# Лабораторная работа №3. Вычисление арифметических выражений.

## Цель работы:

Разработать программу, выполняющую вычисление арифметического выражения с вещественными числами. 
Выражение в качестве операндов может содержать переменные и вещественные числа. Допустимые операции известны: +, -, /, *. 
Допускается наличие знака "-" в начале выражения или после открывающей скобки. Опционально - наличие математических функций (sin, соs, ln, exp, и т.д.)
Программа должна выполнять предварительную проверку корректности выражения и сообщать пользователю вид ошибки 
и номера символов строки, в которых были найдены ошибки.

## Этапы выполнения работы:

1. Разработка шаблонного класса TStack
2. Разбиение исходного арифметического выражения на лексемы (т.е. выделить операнды, операции, переменные)
3. Проверка корректности выражения:
  - правильность расстановки скобок (с использованием стека (TStack) для хранения индексов скобок).
  - пропущены ли операнды или знаки операций
  - недопустимые символы
4. Перевод выражения в постфиксную (польскую) запись
5. Вычисление выражения по постфиксной записи
6. Создание консольного интерфейса пользователя
7. Написание отчета

Все функции должны тестироваться с помощью Google test-ов.
