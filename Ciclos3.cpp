#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal 
    int suma =0;// acumulador que nos permite guardar la dima de los 
    for(int i =1; i <11; i++){
        suma += i*i; // calcula el cuadradado del numero i y lo suma a lo anterior
    }
cout<<"la suma es "<<suma<<endl;
getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}