#include<iostream>

void minIMax()
{
    int k;
    std::cout<<"Podaj ilosc liczb ";
    std::cin>>k;
    if (k<1) return;
    double n;
    double min, max;
    std::cout<<"Podaj 1. liczbe ";
    std::cin>>n;
    min = n;
    max = n;
    for (int i = 1; i < k; ++i)
    {
        std::cout<<"Podaj "<<i+1<<". liczbe ";
        std::cin>>n;
        if (n<min) min = n;
        if (n>max) max = n;
    }

    std::cout<<"wartosc min to "<<min<<" wartosc max to "<<max <<std::endl;
}
int main()
{
    int menu, state = 1;
    while (state)
    {
        std::cout<<"Co chcesz zrobic:\n1 - wyszukaj min i max\n2 - zakoncz program"<<std::endl;
        std::cin>>menu;
        switch (menu)
        {
        case 1:
            minIMax();
            break;
        case 2:
        state = 0;
            break;
        default:
            std::cout<<"Nieznana opcja, wybierz ponownie"<<std::endl;
            break;
        }
    }
    return 0;
}