#include <iostream>
#include<cmath>
using namespace std;
void verific(int A,int B,int C);
double cuadratica_posi(int a,int b,int c);
double cuadratica_neg(int a,int b,int c);
void display(double x_posi, double x_negativa);
int main()
{
    // VALORES
    int A,B,C;
   cin>>A>>B>>C;
   
   // VERIFICACION
verific(A,B,C);
    //caudratica positiva
    double x_posi= cuadratica_posi(A,B,C);
    // cuadratica negativa
double x_neg= cuadratica_neg(A,B,C);
    // display
    display(x_posi,x_neg);
    return 0;
}
void verific(int A,int B,int C){
    if(A<=0){
        cout<<"tu denominador saldra 0 y saldra error "<<endl;
    }
    if(B==0 and C==0){
        cout<<" no pueden haber dos ceros en tu cuadratica "<<endl;
    }
    double discriminante= B*B-4*A*C ;
   if (discriminante<0){
       cout<<"la ecuacion no tiene soluciones "<< endl;
}
}
double cuadratica_posi(int a,int b,int c){
    double discriminante= b*b-4*a*c ;
double x_posi = (-b+sqrt(discriminante))/(2*a) ;
    return x_posi;
    
}
double cuadratica_neg(int a,int b,int c){
    double discriminante= b*b-4*a*c ;
    double x_neg= (-b-sqrt(discriminante))/(2*a) ;
    return x_neg;
}
void display(double x_posi, double x_neg){
    cout<<" x_positiva = "<<x_posi<<" y x_negativa "<<x_neg<<endl;
}

    

