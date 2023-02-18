#include<iostream>
#include<math.h>
void procentSkladany()
{
    double K = 0, K0 = 0, r = 0, n = 0, m = 0;
    std::cout<<"Podaj kapital poczatkowy ";
    std::cin>>K0;
    std::cout<<"Podaj oprocentowanie w skali roku ";
    std::cin>>r;
    std::cout<<"Podaj ilosc lat ";
    std::cin>>n;
    K=K0;
    for (int i = 0; i<n;++i)
    {
        K=K*(1+r/100);
    }
    std::cout<<std::fixed<<"Kwota po kapitalizacji odsetek to "<<K<<std::endl;
}
int main()
{
    int menu, state = 1;
    while (state)
    {
        std::cout<<"Co chcesz zrobic:\n1 - oblicz procent skladany\n2 - zakoncz program"<<std::endl;
        std::cin>>menu;
        switch (menu)
        {
        case 1:
            procentSkladany();
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