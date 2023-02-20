#include<iostream>
#include<cmath>
int main()
{
    double a, b;
    std::string koniec;
    do
    {
        std::cout<<"Podaj dlugosc boku trojkata ";
        std::cin>>a;
        std::cout<<"Wybierz opcje:"<<std::endl;
        std::cout<<"1 - Promien okregu opisanego na trojkacie"<<std::endl;
        std::cout<<"2 - Promien okregu wpisanego w trojkat"<<std::endl;
        std::cin>>b;

        if (b == 1)
        {
            std::cout<<"Promien okregu opisanego na trojkacie rownobocznym o boku "<<a<<" to "<<a*sqrt(3)/3<<std::endl;
        }
        else if (b == 2)
        {
            std::cout<<"Promien okregu wpisanego w trojkat rownoboczny o boku "<<a<<" to "<<a*sqrt(3)/6<<std::endl;
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