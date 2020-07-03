#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

   int limit, result =0 ; // limit : representa el limite que ingresa el usuario y los numeros a realizar
   // result : almacena el resultado

    cout<<"ingresa hasta donde quieres realizar la operacion \n";
    cin>>limit;// pide por consola un dato y lo almacena un valor en la variable limmit
    for( int i = 1 ; i <= limit; i++){
        if( i % 2 == 0 ){
            result-=i; // en caso de que el numero sea negativo
         }else{
            result += i; // en caso de que el numero sea postivo
         }
    }    
    cout<<"la suma es "<<result ; 
    getch(); // muestra el  mensaje de presiona cualquier teclca para salir
    return 0;
}