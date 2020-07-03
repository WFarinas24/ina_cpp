#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

 int num; // el numero que ingrese el usuario
 do{//
 	cout<<"Ingresa un numero del 1 al 10 \n";
 	cin>>num;// pide por consola un dato y lo almacena en la variable num
 }while(num < 0 || num >10); // se va a repetir hasta que el susuario ingrese un numero entre 1 y 10

 for(int i = 0; i < 13; i++){
 	cout<<num<<"x"<<i<<" = "<< i * num<<endl;// escribe un encabezado que representa el estilo de la tabla
 	// la variable i representa el numero por el cual se multiplicara el 
 } 
 getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}