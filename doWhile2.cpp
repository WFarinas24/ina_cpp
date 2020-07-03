#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int mayor =0, menor = 121939940, cont=0, num; float suma = 0;
    // mayor : representa el numero mayor, cuando el usuario digite este numero sera remplazado por el
    // menor : representa el numero menor, cuando el usuario digite este numero sera remplazado por el
    // cont : representa la cantidad de numeros que ha ingresado el usuario, sirve para poder calcular la media de los datos
    // num : representa el numero ingresado por el usuario
    // suma : acumulador que almacena la suma
    do{
        cout<<"ingresa un numero entero positivo o uno negativo para salir \n";
        cin>>num; // solicita el numero
        if(num > 0){ // si el numero es positivo
        suma += num; // suma ese numero
        cont++; // aumenta el contador
            
            if (num > mayor ){ // toma el valor del numero ingresado por el usuario solo cuando elnumero es menor al ingresado por el usuario

                mayor = num ;
            }
            if (num < menor ){ // toma el valor del numero ingresado por el usuario solo cuando elnumero es mayor al ingresado por el usuario
                
            menor =num ;
            }
    
        }
    }while(num >=0);// si el numero ingresado es mayor a 0


    cout<<"el numero menor fue :"<<menor<<" \n el mayor :"<<
    mayor<<" \nel promedio fue de :"<< suma/cont;  // muestra los datos en pantalla


   return 0;
}