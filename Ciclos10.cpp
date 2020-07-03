#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    int veces, result=1, sumFacts=0;
    // veces : representa cuantos
    // result : este ayuda a poder calcular el factorial de un numero 
    // este acumulara los resultados de cada factorial calculado y almacenado en result

    cout<<"ingresa cunatas veces se sumara los factoriales \n" ;
    cin>>veces;

    for(int vuelta = 1; vuelta <= veces ; vuelta++){ // representa cuantas veces se sumaran los factoriales

    for( int i = 1 ; i <= vuelta ; i ++){ // calcula el factorial de la vuelta actual
        result *= i;
        }
    sumFacts += result;// suma el factorial calculado
    result = 1; // reinicia el acumulador para calcular el factorial correspondiente
    }
    cout<<" El resultado es "<< sumFacts;    
getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}