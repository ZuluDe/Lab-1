#include <iostream>
#include <cmath>

int fun()
{

    double x;
    std::cout << "Выберите начальную точку (0, 4]" << std::endl;
    std::cin >> x;

    if (x <= 0 || x > 4) {
        std::cout << "Value error" << std::endl;
        return 1;
    }
    else {
        double step = (4 - x) / 9;

        std::cout << "Результат:" << std::endl;
        for (int i = 0; i < 10; i++) {
            double result = sin(x) / x;
            std::cout << "x = " << x << "\nf(x) = " << result << std::endl;
            x = x + step;
        };

        std::cout << "\n" << std::endl;

        return 0;
    };

}

int fib()
{

    int first_num = 0;
    int second_num = 1;
    int n = 1;
    int s = 0;
    long long max_s;

    std::cout << "Введите число для ограничения суммы:" << std::endl;
    std::cin >> max_s;

    while (s + second_num <= max_s) {
        s = s + second_num;
        n++;
        int storage = second_num;
        second_num = second_num + first_num;
        first_num = storage;
    };

    std::cout << "Результат: N(" << n << ") S(" << s << ")" << std::endl;

    return 0;

}

int main()
{

    setlocale(LC_ALL, "Russian");
    fun();
    fib();

}