#include <iostream>
using namespace std;
void verific( int b);
int calculate(int a , int b);
void display (int result);
    

int main()

{
     int A,B;
   cin>>A>>B;
   verific(B);
   int result = calculate(A, B);
   display(result);
   
   
   
    return 0;
}
void verific(int b){
    if(b==0){
        cout<<"impossible"<<endl;
    }
}
int calculate(int a , int b){
    int cociente= a/b;
    return cociente;
}
void display (int result){
    cout<<"este es el cociente de la division "<<result<<endl;
}
