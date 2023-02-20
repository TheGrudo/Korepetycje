#include<iostream>
int main()
{
    double a, b;
    std::string koniec;
    do
    {
        std::cout<<"Podaj liczbe ";
        std::cin>>a;
        std::cout<<"Podaj przyblizenie ";
        std::cin>>b;

        std::cout<<"Blad bezwzgledny to "<<std::abs(a-b)<<std::endl;
        std::cout<<"Blad wzgledny to "<<std::abs(a-b)/a*100<<"%"<<std::endl;
        std::cout<<std::endl;

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}