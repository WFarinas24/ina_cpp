#include<stdlib.h>
#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola
#include<time.h>

using namespace std; // espaccio de nombre std;

int main(){
    
   srand(time(NULL)); // incializa una semilla para los numeros aleatorios
   int num = 1+ rand() % 100, adivina, intentos =0; 
   // num : es un numero que esta entre 1 y 100
   // adivina : numero que digita el usuario 
   // intentos : el numero de intentos que el usuario a realizado, inicia en 0 porque no ha intentado nada
   while(true){ // ciclo infinito
        cout<<"Intenta adivinar el numero \n";
        cin>>adivina;// pide que se digite un numero al usuario
        if( num < adivina){ // en caso de que el numero ingresado sea mayor al generado
        cout<<"el numero ingresado es mayor al numero generado \n"; intentos ++;
            
    }else if(num > adivina){// en caso de que el numero ingresado sea menor al generado
        cout<<"el numero ingresado es menor al generado\n";
            intentos ++;
    }else{ // en caso de que sea iguales
            cout<<"Felicidades has Acertado !! con "<<intentos<<" intentos \n"; 
            break;
        }

   }
   cout<<"el numero generado fue :"<<num ;
    getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}