#include <iostream>
using namespace std;
string getcode();
void verificd (string x);
int main()
{
    string code=getcode();
    verificd(code);

    return 0;
}
string getcode(){
    string putcode="";
    cin>>putcode;
    return putcode;
}
void verificd (string x){
    string codefibonacci= "11235813";
    if (x=="11235813"){
        cout << " encontramos a fibonacci" <<endl;
    }
    else {
        cout<<" este no es fibonacci "<<endl;
    }
}
