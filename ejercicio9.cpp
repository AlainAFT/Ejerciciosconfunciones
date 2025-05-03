#include <iostream>
using namespace std;
void result(string a,string b,string c,string d);
int main()
{
   string palabra1,palabra2,palabra3,palabra4;
  cin>>palabra1>>palabra2>>palabra3>>palabra4;
  result(palabra1,palabra2,palabra3,palabra4);

    return 0;
}
void result(string a,string b,string c,string d){
    char a1 = a[0];
    char b1= b[0];
    char c1=c[0];
    char d1= d[0];
    cout<<a1<<b1<<c1<<d1<<endl;
if(a1 == d1){
    cout<<" encontramos algo"<<endl;
} else{
    cout<<" no encontramos nada"<<endl;
}
}
