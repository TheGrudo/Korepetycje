#include<iostream>
#include<math.h>

void pole()
{
    double a[3];
    double S, p;
    std::cout<<"Podaj dlugosc 1 boku trojkata ";
    std::cin>>a[0];
    std::cout<<"Podaj dlugosc 2 boku trojkata ";
    std::cin>>a[1];
    std::cout<<"Podaj dlugosc 3 boku trojkata ";
    std::cin>>a[2];
    std::cout<<"Dlugosci bokow "<<a[0]<<" "<<a[1]<<" "<<a[2]<<std::endl;
    if(a[0]+a[1]<=a[2] || a[0]+a[2]<=a[1] || a[1]+a[2]<=a[0]){
        std::cout<<"Nie mozna utworzyc trojkata"<<std::endl;
        return;
    }
    p=(a[0]+a[1]+a[2])/2;
    S=sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
    std::cout<<"Pole trojkata wynosi "<<S<<std::endl;
}

int main()
{
    int menu, state = 1;
    while (state)
    {
        std::cout<<"Co chcesz zrobic:\n1 - oblicz pole\n2 - zakoncz program"<<std::endl;
        std::cin>>menu;
        switch (menu)
        {
        case 1:
            pole();
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