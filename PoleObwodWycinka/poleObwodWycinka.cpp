#include<iostream>
#include<cmath>
int main()
{
    double r, a, b;
    std::string koniec;
    do
    {
        std::cout<<"Podaj promien kola ";
        std::cin>>r;
        std::cout<<"Podaj kat wycinka ";
        std::cin>>a;
        if (a>=0 && a<=360)
        {
            std::cout<<"wybierz opcje: "<<std::endl;
            std::cout<<"1 - oblicz pole"<<std::endl;
            std::cout<<"2 - oblicz obwod"<<std::endl;
            std::cin>>b;

            if (b == 1)
            {
                std::cout<<"Pole wycinka kola o promieniu "<<r<<" i kacie "<<a<<" stopni wynosi "<<M_PI*r*r*a/360<<std::endl;
            }
            else if (b == 2)
            {
                std::cout<<"Dlugosc luku kola o promieniu "<<r<<" i kacie "<<a<<" stopni wynosi "<<2*M_PI*r*a/360<<std::endl;
            }
            else
            {
                std::cout<<"Nieznana opcja"<<std::endl;
            }
        }
        else
        {
            std::cout<<"Bledny kat luku"<<std::endl;
        }

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}