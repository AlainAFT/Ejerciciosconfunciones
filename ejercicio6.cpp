#include <iostream>
using namespace std;
void calcul ( int x);
int main()
{
    int x ;
    cin>>x;
    calcul(x);

    return 0;
}
void calcul ( int x){
    switch(x){
    case 1:
      cout<<"Lunes"<<endl;
      break;
    case 2:
      cout<<"martes"<<endl; 
      break;
    case 3:
      cout<<"miercoles"<<endl;
      break;
    case 4:
      cout<<"jueves"<<endl;
      break;
    case 5:
      cout<<"viernes"<<endl;
      break;
    case 6:
      cout<<"sabado"<<endl;
      break;
    case 7:
      cout<<"domingo"<<endl;
      break;
    default :
      cout<<"Invalid input"<<endl;
      break;
    }

}
