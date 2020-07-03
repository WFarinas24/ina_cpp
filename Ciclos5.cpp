#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    int num, sum = 0; // num : representa el balor que ingrese el usuario 
    // sum : alamacena los valores ingresados
    do{
    cout<<"ingresa un numero\n";
    cin>>num;
    if (num > 0){ // solo sumara los numeros si estos son mayores a 0, osea positivos
    	sum+=num;// almacena de uno en uno los numeros ingresados
    }
    
    }while( !(num > 20 && num <30 || num == 0)); // condicion que limita a que cuando el usuario no ingrese un numero entre 20 y 30 o 0 se pueda seguir ingresando numeros
    cout<<"La suma es "<<sum;// muestra la suma corrrespondiente

getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}