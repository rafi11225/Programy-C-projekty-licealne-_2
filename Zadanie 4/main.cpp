#include <iostream>

using namespace std;

int main()
{
    int a, b , h ;
    int pole;
    cout << "Podaj podstawe a:" << endl;
    cin>>a;
    cout<<"Podaj b:"<<endl;
    cin>>b;
    cout<<"Podaj wysokosc"<<endl;
    cin>>h;
    pole = ((a+b)*h)/2;
    cout<<"Pole po zaokragleniu do czesci calkowitych:"<<pole;
    return 0;
}
