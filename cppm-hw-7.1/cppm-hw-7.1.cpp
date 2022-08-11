#include <iostream>
#include <Windows.h>

#define MODE 0
#ifndef MODE
#error необходимо определить MODE

#else

#if MODE == 0
#define REGIMEMSG "Работаю в режиме тренировки"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << REGIMEMSG << "\n";
}

#elif MODE == 1

#define REGIMEMSG "Работаю в боевом режиме"

int add(int a, int b) {
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << REGIMEMSG << "\n";
    int a;
    int b;
    std::cout << "Введите число 1: ";
    std::cin >> a;
    std::cout << "Введите число 2: ";
    std::cin >> b;
    std::cout << "Результат сложения: " << add(a, b) << "\n";
}

#else

#define REGIMEMSG "Неизвестный режим. Завершение работы"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << REGIMEMSG << "\n";
}

#endif

#endif