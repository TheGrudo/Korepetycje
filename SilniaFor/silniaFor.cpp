#include<iostream>

int main()
{
    double a, wynik;
    std::string koniec;
    do
    {
        std::cout<<"Podaj liczbe ";
        std::cin>>a;
        wynik = 1;
        for (int i = 1; i <= a; i++)
        {
            wynik = wynik*i;
        }
        std::cout<<a<<"! = "<<wynik<<std::endl;
        std::cout<<std::endl;

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}