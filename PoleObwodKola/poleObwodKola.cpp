#include<iostream>
#include<cmath>
int main()
{
    double r, b;
    std::string koniec;
    do
    {
        std::cout<<"Podaj promien kola ";
        std::cin>>r;
        std::cout<<"wybierz opcje: "<<std::endl;
        std::cout<<"1 - oblicz pole"<<std::endl;
        std::cout<<"2 - oblicz obwod"<<std::endl;
        std::cin>>b;

        if (b == 1)
        {
            std::cout<<"Pole kola o promieniu "<<r<<" wynosi "<<M_PI*r*r<<std::endl;
        }
        else if (b == 2)
        {
            std::cout<<"Obwod kola o promieniu "<<r<<" wynosi "<<2*M_PI*r<<std::endl;
        }
        else
        {
            std::cout<<"Nieznana opcja"<<std::endl;
        }

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}