#include<iostream>

void sredniaArytmetyczna()
{
    int k;
    std::cout<<"Podaj ilosc liczb ";
    std::cin>>k;
    double n;
    double sum = 0;
    for (int i = 0; i < k; ++i)
    {
        std::cout<<"Podaj "<<i+1<<". liczbe ";
        std::cin>>n;
        sum+=n;
    }

    std::cout<<"Srednia arytmetyczna to "<<sum/k <<std::endl;
}
int main()
{
    int menu, state = 1;
    while (state)
    {
        std::cout<<"Co chcesz zrobic:\n1 - oblicz srednia arytmetyczna\n2 - zakoncz program"<<std::endl;
        std::cin>>menu;
        switch (menu)
        {
        case 1:
            sredniaArytmetyczna();
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