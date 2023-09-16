#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS helyett N_ELEMENTS-et kell írni
    std::cout << '1-100 ertekek duplazasa' // '' helyett "" közé kell rakni a stringet, és nincs befejezve a kiíratás
    for (int i = 0;) // Hiányzik két argumentum is
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // Hiányzik a i mellől, hogy meddig növekedhet, és az i++ után egy ';'
    {
        std::cout << "Ertek:" // Nincs befejezve a kiíratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // Hiányzik az i++ után egy ';'
    {
        atlag += b[i] // Hiányzik a végéről egy ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
