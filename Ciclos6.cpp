#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    float base, exponente, result = 1;
    // base : la base a la que elevara el numero
    // exponente : valor que al que se elevara la base 
    // result : resultado que tomara al elevar el numero medinate el bucle

    cout<<"ingresa la base\n";
    cin>>base;
    cout<<"ingresa el exponente\n";
    cin>>exponente;
    result = base  ;
    for( int i = 0; i < exponente-1 ; i++){    
        result *= base ; 
        //esto se multiplicara tantas veces como valga el exponente y se ira guardando el valor anterior
    }
    cout<<" El resultado es " <<result;
    // muestra el resultado

getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;

}