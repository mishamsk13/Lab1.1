﻿// Lab1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Задания 1

//1.    Выведите строку “First string” в консоль
//2.    Выведите сразу две строки «Первая строка» и «Вторая строка» в консоль, используя \n
//3.    Исправьте проблему с кодировкой(если вы этого еще не сделали)
//4.    Выведите строку «Спецсимволы “\”.Разумееется, кавычки и обратный слеш потребуется экранировать
//5.    Прокомментируйте каждую строку кода(включая #include и закрывающую фигурную скобку у main)


#include <iostream> // подключает стандартный библиотечный заголовочный файл для работы с потоками ввода-вывода

int main() //стандартное начало программ на языке C.
{ //начало функции
    std::cout << "First string\n"; // \n переводит на следующую строку
    setlocale(LC_ALL, "Russian"); //позволяет выводить русский язык
    std::cout << "Первая строка\nВторая строка\n";
    std::cout << "Спецсимволы \"\\\"";
} //конец функции

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
