#include<iostream>

int main()
{
    double a, b, wynik;
    std::string koniec;
    do
    {
        std::cout<<"Podaj ilosc liczb ";
        std::cin>>a;
        wynik = 0;
        for (int i = 1; i <= a; i++)
        {
            std::cout<<"Podaj "<<i<<". liczbe ";
            std::cin>>b;

            wynik+=1/b; // wynik = wynik+1/b;
        }
        std::cout<<"Suma odwtrotnosci to "<<wynik<<std::endl;
        std::cout<<std::endl;

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}