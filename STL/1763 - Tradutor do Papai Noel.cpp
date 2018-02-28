#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <map>

using namespace std;

int main(void)
{
    string palavra;

    while (cin>>palavra)
    {
        map<string,string> mapa;
        map<string,string>::iterator it;


        mapa.insert(pair<string,string>("brasil","Feliz Natal!"));
        mapa.insert(pair<string,string>("alemanha","Frohliche Weihnachten!"));
        mapa.insert(pair<string,string>("austria","Frohe Weihnacht!"));
        mapa.insert(pair<string,string>("coreia","Chuk Sung Tan!"));
        mapa.insert(pair<string,string>("espanha","Feliz Navidad!"));
        mapa.insert(pair<string,string>("grecia","Kala Christougena!"));
        mapa.insert(pair<string,string>("estados-unidos","Merry Christmas!"));
        mapa.insert(pair<string,string>("inglaterra","Merry Christmas!"));
        mapa.insert(pair<string,string>("australia","Merry Christmas!"));
        mapa.insert(pair<string,string>("portugal","Feliz Natal!"));
        mapa.insert(pair<string,string>("suecia","God Jul!"));
        mapa.insert(pair<string,string>("turquia","Mutlu Noeller"));
        mapa.insert(pair<string,string>("argentina","Feliz Navidad!"));
        mapa.insert(pair<string,string>("chile","Feliz Navidad!"));
        mapa.insert(pair<string,string>("mexico","Feliz Navidad!"));
        mapa.insert(pair<string,string>("antardida","Merry Christmas!"));
        mapa.insert(pair<string,string>("canada","Merry Christmas!"));
        mapa.insert(pair<string,string>("irlanda","Nollaig Shona Dhuit!"));
        mapa.insert(pair<string,string>("belgica","Zalig Kerstfeest!"));
        mapa.insert(pair<string,string>("italia","Buon Natale!"));
        mapa.insert(pair<string,string>("libia","Buon Natale!"));
        mapa.insert(pair<string,string>("siria","Milad Mubarak!"));
        mapa.insert(pair<string,string>("marrocos","Milad Mubarak!"));
        mapa.insert(pair<string,string>("japao","Merii Kurisumasu!"));


        it = mapa.find(palavra);
        if(it == mapa.end())
            cout<<"--- NOT FOUND ---"<<endl;

        else
            cout<<it->second<<endl;
    }
}
