#include <iostream>
using namespace std;
struct ulamek           //definicja struktury
{
    int licz;
    int mian;
};
ulamek wczytaj()        //funkcja wczytujaca ulamek
{
    ulamek x;
    cout<<"Podaj licznik i mianownik: "<<endl;
    cin>>x.licz>>x.mian;
    return x;
}

int NWD(int a, int b)   //funkcja NWD
{
    int pom;
    while(b != 0)
    {
        pom = b;
        b = a % b;
        a = pom;
    }
    return a;
}
ulamek skroc(ulamek x)  //funkcja skaracajaca ulamek
{
    int dz=NWD(x.licz, x.mian);
    x.licz=x.licz/dz;
    x.mian=x.mian/dz;
    return x;

}
ulamek dodaj(ulamek x, ulamek y)
{
   ulamek z;
   z.licz=x.licz*y.mian+y.licz*x.mian;
   z.mian=x.mian*y.mian;
   return z;

}
ulamek pomnoz(ulamek x, ulamek y)
{
    ulamek z;
    z.licz=x.licz*y.licz;
    z.mian=x.mian*y.mian;
    return z;
}
ulamek podziel(ulamek x , ulamek y)
{
    ulamek z;
    z.licz=x.licz*y.mian;
    z.mian=x.mian*y.licz;
    return z;
}
calosc(ulamek z)
{
    int calosci;
    int reszta;
    if(z.licz>z.mian)
    {
        calosci = z.licz / z.mian;
        reszta = z.licz % (calosci*z.mian);
        if(reszta!=0)
        {
            cout<<calosci<<" "<<reszta<<"/"<<z.mian<<endl;
        }
        else if(reszta==0)
        {
            cout<<calosci<<endl;
        }
    }
    else if(z.licz<z.mian)
    {
        cout<<z.licz<<"/"<<z.mian<<endl;
    }
    else if(z.licz==z.mian)
    {
        cout<<"1"<<endl;
    }
}

int main()
{
    ulamek a, b, suma, iloczyn , iloraz;
    cout<<"Pierwszy ulamek"<<endl;
    a=wczytaj();
    cout<<"Drugi ulamek"<<endl;
    b=wczytaj();
    suma=(skroc(dodaj (a, b)));
    iloczyn= (skroc(pomnoz(a, b)));
    iloraz= (skroc(podziel(a, b)));
    cout<<calosc(suma)<<endl;
    cout<<calosc(iloczyn)<<endl;
    cout<<calosc(iloraz)<<endl;

    return 0;
}
