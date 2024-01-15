#include <iostream>
#include <cstdlib>
using namespace std;
struct ulamek
{
    int licz;
    int mian;
} ;
int main()
{
    cout << "Witaj!" << endl;
    ulamek a;
    cout<<"Podaj licz. i mian.:"<<endl;
    cin>>a.licz;
    cin>>a.mian;
    if(a.licz>=a.mian)
    {
        int calosc , reszta;
        calosc = a.licz/a.mian;
      reszta =  a.licz - calosc*a.mian;
        if(reszta>>0)
        {


        cout<<"Wynik:"<<calosc<<" "<<reszta<<"/"<<a.mian;
        }
        if(reszta==0)
        {
            cout<<"Wynik:"<<calosc;
        }

    }

 else if(a.licz<<a.mian)
    {
        cout<<"Wynik"<<a.licz<<"/"<<a.mian;
    }

    return 0;
}
