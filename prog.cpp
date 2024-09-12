#include <string>
#include <iostream>

//using namespace std;


int cosZrob (std::string co, int liczba)
{
    //std::cout << a;
    if ( co == "podwoj" ) return liczba * 2;
    if ( co == "potroj" ) return liczba * 3;
    return 0;
}


int main()
{
    std::string co {};
    int liczba {};
    int a {17};
    do
    {   
        //std::cout << a;
        std::cout << "Co robimy (podwoj/potroj): ";
        std::cin >> co;
    } while (co != "podwoj" && co != "potroj");

    std::cout <<"Podaj liczbe: ";
    std::cin >> liczba;
    std::cout << cosZrob (co, liczba) << "\n"; 

    return 0;
}
