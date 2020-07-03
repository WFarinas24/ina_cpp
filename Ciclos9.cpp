#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    int fact,result=1;
    // fact : representa el factorial que se desea calcular
    // result : es el resultado de calcular el factorial, funciona como acumulador

    cout<<"ingresa el factorial a mostrar  \n" ;
    cin>>fact ; 

    for( int i = 1 ; i <= fact; i ++){
        result *= i; // multiplica el valor anterior por el iterador    
        }
cout<<" El resultado es "<< result; // muestra el resultado
getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}