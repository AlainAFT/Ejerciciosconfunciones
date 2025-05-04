#include <iostream>
using namespace std;
int getinput();
int getinput2();
void grade_scale(int x,int y);
int main()
{
   int age = getinput();
   int yearexperience= getinput2();
   grade_scale(age,yearexperience);

    return 0;
}
int getinput(){
    int age=0;
    int yearexperience=0;
    cout<<"ingrese su edad : ";
    cin>>age;
    return age;
    
}
int getinput2(){
    int yearexperience=0;
    cout<<" ingrese los años de experiencia : ";
    cin>>yearexperience;
    return yearexperience;
}
void grade_scale(int x,int y){
    if(x<18){
        cout<<"debes ser mayor de 18 para aspirar algun puesto"<<endl;
    
    }
    if(x>=18 and y < 3  ){
         cout<<"cordinadoor de proyecto"<<endl;
    }
    if ( x>=18 and y>=3 and y<5){
        cout<<"director de proyecto"<<endl;
    }
    if(x>=18 and y>=5){
        cout<<"director senior"<<endl;
    }
    
}
