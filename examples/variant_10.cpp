#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    // Вариант 10. Исходные данные, км
    int distances[] = {
        12, 35, 48,  7, 64,
        28, 51, 19, 42, 33
    };
    const std::size_t n =
        sizeof(distances) / sizeof(distances[0]);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Исходные данные (" << n << " поездок), км:\n";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << std::setw(4) << distances[i];
    }
    std::cout << "\n\n";

    // Все вычисления выполняются функциями библиотеки
    const int    total  = arr_sum(distances, n);
    const int    d_min  = arr_min(distances, n);
    const int    d_max  = arr_max(distances, n);
    const double avg    = arr_average(distances, n);
    const double median = arr_median(distances, n);

    std::cout << "Общее расстояние:        " << total << " км\n";
    std::cout << "Минимальное расстояние:  " << d_min << " км\n";
    std::cout << "Максимальное расстояние: " << d_max << " км\n";
    std::cout << "Среднее расстояние:      " << avg << " км\n";
    std::cout << "Медиана расстояний:      " << median << " км\n";

    return 0;
}
