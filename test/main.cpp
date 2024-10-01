#include <iostream>
#include <cstdlib>


int main() {
    const int size = 20;
    int arr[size];
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = std::rand() % 6 + 5;
    }
    
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if ((i + 1) % 10 == 0)
        {
            std::cout << std::endl;
        }
    }
    return 0;
}
