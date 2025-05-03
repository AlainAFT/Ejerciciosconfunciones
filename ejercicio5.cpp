#include <iostream>
using namespace std;
void verificacion(string letra);
int main()
{
    string letra;
  getline(cin,letra);
  verificacion(letra);
  

    return 0;
}
void verificacion(string letra){
    if(letra.size()>=2) {
      cout<<" no es del alfabeto"<<endl;
  }
   else {  if(letra[0]>=65 and letra[0]<=90){
          cout<<" UPPER-CASE ALPHABET "<<endl;
          
      }
      if(letra[0]>=97 and letra[0]<=122){
          cout<<" LOWER-CASE ALPHABET"<<endl;
      }
      
      else{
         cout<<" no es del alfabeto"<<endl; 
      }
   }
  
}
