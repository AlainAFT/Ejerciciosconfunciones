#include <iostream>
using namespace std;
void casa1 (string x , int y , string k, int l);
void casa2 (string x , int y , string k, int l);
void casa3 (string x , int y , string k, int l);
int main()
{
    string color1,color2,color3,clortestigo;
    int piso1,piso2,piso3,psotestigo;
    cin>>color1>>piso1>>color2>>piso2>>color3>>piso3>>clortestigo>>psotestigo;
    casa1(color1,piso1,clortestigo,psotestigo);
    casa2(color2,piso2,clortestigo,psotestigo);
    casa3(color3,piso3,clortestigo,psotestigo);

    return 0;
}
void casa1 (string x , int y , string k, int l){
    if ((k== "?" || k==x ) && (l==-1 || l==y )){
        cout<<1<<endl;
    } 
}
void casa2 (string x , int y , string k, int l){
    if ((k== "?" || k==x ) && (l==-1 || l==y )){
    cout<<2<<endl;
}
}
void casa3 (string x , int y , string k, int l){
    if ((k== "?" || k==x ) && (l==-1 || l==y )){
        cout<<3<<endl;
    } 
}
