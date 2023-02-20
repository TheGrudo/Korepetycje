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
                /*katy w trojkacie z twierdzenia cosinusow*/
                ka = acos((c*c+b*b-a*a)/(2*c*b))*180/M_PI;
                kb = acos((c*c+a*a-b*b)/(2*c*a))*180/M_PI;
                kc = acos((b*b+a*a-c*c)/(2*b*a))*180/M_PI;
                std::cout<<"Katy w trojkacie: "<<ka<<" "<<kb<<" "<<kc<<std::endl;
                /*znalezienie najwiekszego kata*/
                max = ka;
                if (kb > max) max = kb;
                if (kc > max) max = kc;
                /*wybor typu trojkata na podstawie najwiekszego kata*/
                if (max < 90) std::cout<<"Trojkat ostrokatny"<<std::endl;
                else if (max == 90) std::cout<<"Trojkat prostokatny"<<std::endl;
                else if (max > 90) std::cout<<"Trojkat rozwartokatny"<<std::endl;
            }
        }

        std::cout<<"Czy zakonczyc program t - tak"<<std::endl;
        std::cin>>koniec;
    } while (koniec!="t");
    return 0;
}