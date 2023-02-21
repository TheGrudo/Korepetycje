#include<iostream>
#include<cmath>

int main()
{
    double a,b,c;
    double ka, kb, kc;
    double max;
    std::string koniec;
    do
    {
        
        std::cout<<"Podaj dlugosc 1 boku trojkata ";
        std::cin>>a;
        std::cout<<"Podaj dlugosc 2 boku trojkata ";
        std::cin>>b;
        std::cout<<"Podaj dlugosc 3 boku trojkata ";
        std::cin>>c;
        std::cout<<"Dlugosci bokow "<<a<<" "<<b<<" "<<c<<std::endl;
        if(a+b<=c || a+c<=b || b+c<=a)
        {
            std::cout<<"Nie mozna utworzyc trojkata"<<std::endl;
        }
        else
        {
            if (a == b && a == c)
            {
                std::cout<<"Trojkat rownoboczny"<<std::endl;
            }
            else if (a==b || a==c || b==c)
            {
                std::cout<<"Trojkat rownoramienny"<<std::endl;
            }
            else
            {
                if (((a*a+b*b)>c*c) && ((a*a+c*c)>b*b) && ((c*c+b*b)>a*a)) 
                    std::cout<<"Trojkat ostrokatny"<<std::endl;
                else if (((a*a+b*b)==c*c) || ((a*a+c*c)==b*b) || ((c*c+b*b)==a*a)) 
                    std::cout<<"Trojkat prostokatny"<<std::endl;
                else if (((a*a+b*b)<c*c) || ((a*a+c*c)<b*b) || ((c*c+b*b)<a*a)) 
                    std::cout<<"Trojkat rozwartokatny"<<std::endl;
            }
        }

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}