#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola
#include<math.h> // lbreria para usar funciones matematicas ( pow ) eleva un numero 

using namespace std;
int main(){// funcion principal
    int potencia ,result=0;

    cout<<"ingrese a que potencia a la que se elevara\n" ;
    cin>>potencia ;
    //se pide al usuario que ingrese la potencia que servira como limite
    for(int i = 1; i <=potencia ; i ++ ){
        result += pow(2,i ); // acumula el resultado
    }   
    cout<<" El resultado es "<< result;
	getch(); // muestra el  mensaje de presiona cualquier teclca para salir
	return 0;
}