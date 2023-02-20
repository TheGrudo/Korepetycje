#include<iostream>
int main()
{
    double a, b, c;
    std::string koniec;
    do
    {
        std::cout<<"Podaj pierwsza liczbe ";
        std::cin>>a;
        std::cout<<"Podaj druga liczbe ";
        std::cin>>b;
        std::cout<<"Podaj wynik mnozenia ";
        std::cin>>c;
        if ((a*b) == c)
        {
            std::cout<<"Wynik poprawny!"<<std::endl;
        }
        else
        {
            std::cout<<"Wynik niepoprawny! Poprawny wynik to "<<a*b<<std::endl;
        }
        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}