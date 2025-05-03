#include <iostream>
using namespace std;
int getinput();
int calculdigit(int s);
int producto(int x,int y);
void display(int t);
int main()
{
    int sum= getinput(); 
int totaldigit= calculdigit(sum);
int prod = producto(sum,totaldigit);
display(prod);

    return 0;
}
int getinput(){
    int num1, num2;
    cin>>num1>>num2;
    int s = num1+num2;
   return s;
    
}
int calculdigit(int s){
    int digit=0;
    while(s>0){
        ++digit;
        s=s/10;
    }
    return digit;
}
int producto(int x,int y){
    int prod= x*y;
    return prod;
}
void display(int t){
    cout<<" el resultado es de "<<t<<endl;
}
