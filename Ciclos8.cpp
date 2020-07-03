#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola
using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    int limit,sum=0;
    // limit : representa el limite de la operacion
    // sum : acumulador que permite almacenar el valor de la suma de 
    // del numero 2n-1
    cout<<"ingresa cuantas vecez se realizara la suma  \n" ;
    cin>>limit ;
    for( int i = 0 ; i < limit ; i++){
        sum+= ( 2*( i + 1 )) - 1 ; // ecuacion que permite calcular el numero 2n-1 y se almacena en el acumulador
    }
    cout << "la suma es "<<sum;
   // muestra el resultado por consola

 getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}