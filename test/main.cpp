#include <iostream>
#include <cstdlib>


int main() {
    srand(time(NULL));
    const int size = 10;
    int randomarr[size];
    int userarr[size];
    
    for (int i = 0; i < size; i++) {
        randomarr[i] = std::rand() % 11;
    }
    
    std::cout << "Введите 10 чисел от 0 до 10: ";
    for (int i = 0; i < size; i++) {
        int num;
        do {
            std::cout << "число для ячейки " << i + 1 << ": ";
            std::cin >> num;
            if (num < 0 || num > 10) {
                std::cout << "Ошибка: чило не корректнро.\n";
            }
        } while (num < 0 || num > 10);
        userarr[i] = num;
        
        std::cout << "\nРезультат сравнения: ";
        bool hits = false;
        for (int i = 0; i < size; i++) {
            if (userarr[i] == randomarr[i]) {
                std::cout << "попадание в ячейке " << i + 1 << ": число " << userarr[i] << "\n";
                hits = true;
            }
        }
        if (!hits) {
            std::cout << "попаданий нету.\n";
        }
        
    }
    return 0;
}
