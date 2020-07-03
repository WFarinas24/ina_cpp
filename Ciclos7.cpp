#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    int limit, sum=0; 
    // limit : representa hasta donde se mostrará la suma de los numeros
    // sum : representa la suma de los valores 
    cout<<"ingresa hasta donde se mostrara la suma\n";
    cin>>limit; //pide por consola el mite de la suma
    
    for(int i = 0 ; i <= limit; i++){ // recorre los numeros que se deben debe de sumar
        sum += i;//acumula la suma de los siguientes numeros
    }
    cout<<"la suma es "<<sum; //muestra el resultado por consola
   getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}