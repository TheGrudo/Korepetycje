#include<iostream>

int main()
{
    int a, b, wynik;
    std::string koniec;
    do
    {
        std::cout<<"Podaj liczbe ";
        std::cin>>a;
        std::cout<<"podaj wykladnik potegi "<<std::endl;
        std::cin>>b;
        wynik = 1;
        for (int i = 0; i < b; i++)
        {
            wynik = wynik*a;
        }
        std::cout<<a<<"^"<<b<<" = "<<wynik<<std::endl;
        std::cout<<std::endl;

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}