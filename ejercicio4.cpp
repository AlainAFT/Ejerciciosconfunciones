#include <iostream>
using namespace std;
float calculpago (int n,int a,int b,int aa,int bb);
void change(float result);
int main()

{
   float N,A,B,X,Y;
    cin>>N>>A>>B>>X>>Y;
    float result = calculpago(N,A,B,X,Y);
change(result);
    return 0;
}
float calculpago (int n,int a,int b,int aa,int bb){
    float pago=n;
    if(n>=a and n<b){
         pago  -=(n*(aa*0.01));
    }
    if(n>a and n>=b){
      pago-=(n*(bb*0.01)) ;
    }
    return pago;
}
void change(float result){
    cout<<" tu pago es "<<result<<" bs"<<endl;
}
