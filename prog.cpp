#include <string>
#include <iostream>

using namespace std;

string co {};
int liczba {};
int cosZrob (string co, int liczba)
{
    if ( co == "podwoj" ) return liczba*2;
    if ( co == "potroj" ) return liczba*3;
    return 0;
}


int main()
{
    do
    {
        cout << "Co robimy (podwoj/potroj): ";
        cin >> co;
    } while (co != "podwoj" && co != "potroj");

    cout <<"Podaj liczbe: ";
    cin >> liczba;
    cout << cosZrob (co, liczba) << "\n"; 

    return 0;
}
