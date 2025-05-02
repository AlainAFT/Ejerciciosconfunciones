#include <iostream>
using namespace std;

string getresult(string a, string b, string c);
void mostrar(string result);
int main()
{
    // ingreso de las tres cadenas
    string str1, str2, str3;
cin >> str1 >> str2 >> str3;
// calcular el resultado
 string result = getresult(str1,str2,str3);
 //muestra del resultado
 mostrar(result);
    return 0;
}

    
// para calcular cual es la cadena menor de las 3
string getresult(string a,string b,string c){
    string minimo= a;
    if(b<minimo){
        minimo=b;
    }
    if(c<minimo){
        minimo=c;
    }
    return minimo;
}
void mostrar(string result){
    cout<<result<<endl;
}
