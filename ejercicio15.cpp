#include <iostream>
using namespace std;
void voltear(int x,int y,int z);
int main()
{
    int a,b,c;
   a=51;
   b=876;
   c=235;
    cout<<"antes del programa "<<a<<" "<<b<<" "<<c<<endl;
    voltear(a,b,c);

    return 0;
}
void voltear(int x,int y,int z){
    int caja=x;
   int respaldo= y;
   x=z;
   y=caja;
   z=respaldo;
   cout<<"a: "<<x<<" b: "<<y<<" c: "<<z;
}
