#include<iostream>

void sredniaWazona()
{
    int k;
    std::cout<<"Podaj ilosc liczb ";
    std::cin>>k;
    double n, w;
    double sum = 0, weight = 0;
    for (int i = 0; i < k; ++i)
    {
        std::cout<<"Podaj "<<i+1<<". liczbe ";
        std::cin>>n;
        std::cout<<"Podaj wagę "<<i+1<<". liczby ";
        std::cin>>w;
        sum+=n*w;
        weight+=w;
    }

    std::cout<<"Srednia wazona to "<<sum/weight <<std::endl;
}
int main()
{
    int menu, state = 1;
    while (state)
    {
        std::cout<<"Co chcesz zrobic:\n1 - oblicz srednia wazona\n2 - zakoncz program"<<std::endl;
        std::cin>>menu;
        switch (menu)
        {
        case 1:
            sredniaWazona();
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