#include <iostream>
#include <cmath>
#include <iomanip>
#define e 0.000001

using namespace std;

int main(){

    int  v = 0 , i = 0;
    long double inf = 0 , sup = 0, k = 0 , temp = 0 , base = 0, X = 0 , absol = 0;
    bool si = false;

    do{

        system("clear");
       si = false;
       k = 0; temp = 0; inf = 0; sup = 0; i = 0;
        cout << "Ingresa la base: "; cin >>base; cout << "\n";
        cout << "Ingresa X: "; cin >>X; cout << "\n";
        cout << "Ingresa el límite inferior: "; cin >> inf; cout << "\n";
        cout << "Ingresa el límite superior: "; cin >> sup; cout << "\n";
        while (si == false) {
i++;
            k = (inf+sup)/2;

            temp = pow(base,k);
//          cout << "Resultado: " << setprecision(10) << temp << "  exponente: " << k << endl;
            if(temp < X){
                inf = k;
            }else{
                sup = k;
            }
            absol = abs(X - temp);
            if(abs(X - temp)< e){
                cout << "  Valor de K: " << setprecision(18) << k << " con un error absoluto de: " << setprecision(6) << absol << " y " << i << " repeticiones. \n" << endl;
                si = true;
                }
            }

       cout << "Si deseas regresar presiona 1: "; cin >> v;

    }while(v==1);

}
