#include <iostream>
using namespace std;

int main() {
    string v[5], w[5];
    int x[10], y[10];
    int i;

    v[0]="Fibra";
    v[1]="Vasco";
    v[2]="Mercury";
    v[3]="Gilmuor";
    v[4]="Eminem";

    cout<<v[1]<<", "<<v[3]<<", "<<v[4]<<endl;

    i=0;
    while (i<5)
    {
        cout<<"Inserisci il nome del "<<i+1<<"° cantante"<<endl;
        cin>>w[i];
        cout<<w[i]<<endl;

        i=i+1;
    }

    cout<<"Vettore X"<<endl;
    i=0;
    while (i<10)
    {
        x[i]=i+1;
        cout<<x[i]<<endl;

        if (i%2=0)
        {
            cout<<"Inidci pari"<<endl;
            cout<<x[i]<<endl;
            cout<<"                                                 "<<endl;
        }
        
        if (i%2=0)
        {

        }
        else
        {
            cout<<"Inidci dispari"<<endl;
            cout<<x[i]<<endl;
            cout<<"                                                 "<<endl;
        }

        if (x[i]%2==0)
        {
            cout<<"Valore pari"<<endl;
            cout<<x[i]<<endl;
            cout<<"                                                 "<<endl;
        }

        i=i+1;
    }

    cout<<"Vettore Y"<<endl;
    i=0;

    while (i<10)
    {
        y[i]=i*2;
        cout<<y[i]<<endl;
        
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
