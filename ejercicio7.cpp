#include <iostream>
using namespace std;
void instructions();
double radio();
double cacularea(double a,double r);
void display ( double result);
int main()
{
 instructions();
 double r = radio();
 double area=0;
 area=cacularea(area,r);
 display(area);
 
    return 0;
}
 void instructions(){
    cout<<"introduzca el radio para poder sacar su area"<<endl;
     cout<<" que no sea negativo porque no hay radio negativo "<<endl;
 }
 double radio(){
     double r;
     cin>>r;
     int i=0;
     if(r<0){
         cout<<" te crees comediante ? , que no sea negativo"<<endl;
         instructions();
         cin>>r;
         ++i;
     }
     if(i>3){
         cout<<" nos cansamos , fin del programa "<<endl;
         return 0;
     }
     return r;
     
 }
 double cacularea(double a,double r){
     a= 4*3.14*(r*r);
     return a;
 }
 void display ( double area){
     cout<<" tu area es de "<<area<<endl;
 }
 
  
