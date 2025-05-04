#include <iostream>
using namespace std;
void verificacion(int x , int y);
int tarifa1( int x , int y);
int tarifa2(int x , int y);
void display ( int x, int y);
int main()
{
   int horas_inicio;
    int horas_final;
    cin>> horas_inicio >> horas_final;
    verificacion(horas_inicio,horas_final);
    int cond1= tarifa1(horas_inicio,horas_final);
    int cond2= tarifa2(horas_inicio,horas_final);
    display(cond1,cond2);
    
    
    return 0;
}
void verificacion(int x , int y){
    if (x < 0 || y > 24) {
        cout << "tus horas deben estar entre 0 y 24" << endl;
    
    } else if (x == y) {
        cout << "que extraño no has alquilado por mucho tiempo" << endl;
    
    } else if (y < x) {
        cout << "que raro, el inicio del alquiler es despues del final" << endl;
        
    }
}
int tarifa1( int x , int y){
    int tarifa1=0;
    if(x < 7) {
        if (y <= 7) {
            tarifa1 = y - x;
        } else {
            tarifa1 = 7 - x;
        }
    }
    if (x >= 17) {
        tarifa1 += y - x;
    } else if (y > 17) {
        tarifa1 += y - 17;
    }
    return tarifa1;
}
int tarifa2(int x , int y){
    int tarifa2 =0;
     if (x < 17 && y > 7) {
        int inicioTarifa2 = x< 7 ? 7 : x;
        int finTarifa2 = y > 17 ? 17 : y;
        tarifa2 = finTarifa2 - inicioTarifa2;
    }
    return tarifa2;
}
void display(int x, int y){
   int total= (x * 1) + (y* 2);
    cout << "Has alquilado una bicicleta por" << endl;
    if (x > 0) {
        cout << x<< " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    }
    if (y > 0) {
        cout << y << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    }
    cout << "El monto total a pagar es de " << total << " boliviano(s)." << endl; 
}
