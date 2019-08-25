
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int lineas;
    map<string, int> mapa;
    string pais;
    string temp;
    
    cin>>lineas;
    for(int i=0;i<lineas;i++){
        cin >> pais;
        getline(cin, temp);
        mapa[pais] ++;
    }

    for (auto ite = mapa.begin(); ite != mapa.end(); ite++)
        cout<<ite->first<<" "<<ite->second<<endl;


}
