#include <iostream>
using namespace std;
int getinput();
void howmany(int x);
int main()
{
   int docs= getinput();
   howmany(docs);

    return 0;
}
int getinput(){
  
  int x;
  cin>>x;
  return x;
}
void howmany(int x){
    
    if(x==0){
        cout<<"no se encontro ningun documento";
     
    }
    
   
     
    
    if(x>1){
        cout<<x<<" documentos encontrados";
    }
    
    if(x==1){
        cout<<" un documento encontrado";
    }

}
