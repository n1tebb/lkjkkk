#include <iostream>
#include <Windows.h>
using namespace std;

int main () {
    
    float price_ris = 30;
    float price_grech = 25;
    float price_chay = 50;
    
    int ris, grech, chay, itog;
    cout << "список: \n";
    cout << "1. пачка риса\n";
    cout << "2. пачка гречки\n";
    cout << "3. упаковка чая\n";
    
    cout << "введите количство риса(30р): ";
    cin >> ris;
    cout << "введите количесво гречки(25р): ";
    cin >> grech;
    cout << "введите количество чая(50р): ";
    cin >> chay;
    
    itog = (ris * price_ris) + (grech * price_grech) + (chay * price_chay);
    cout << "Итоговая стоимость: " << itog << " рублей\n";
    
    return 0;
}
