#include <iostream>
using namespace std;
int input();
int horas(int x);
int min(int x);
int segun(int x);
void display(int x,int y,int z);
int main()
{
    int segs = input();
    int hora = horas(segs);
    int mins = min(segs);
    int segundos= segun(segs);
    display(hora,mins,segundos);

    return 0;
}
int input(){
    int seg;
    cin>>seg;
    if(seg<0){
        cout<<" los segundos no pueden ser negativos "<<endl;
        return 0;
    }
    return seg;
}
int horas(int x){
    int k = x/3600;
    return k;
}
int min(int x){
    int k=(x%3600)/60;
    return k;
}
int segun(int x){
    int k = x%60;
    return k;
}
void display(int x,int y,int z){
    if(x<10){
        cout<<"0"<<x<<" : ";
    } else {
    cout<<x<<" : ";
    }
    if(y<10){
         cout<<"0"<<y<<" : ";
    } else {
    cout<<y<<" : ";
    }
   if(z<10){
         cout<<"0"<<z<<" : ";
    } else {
    cout<<z;
    }
    
}
