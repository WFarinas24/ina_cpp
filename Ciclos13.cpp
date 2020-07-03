#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    int fibo, a= 0, b=1,result = 0;
    // fibo : almacena cual es el nuero que desea calcular el usuario
    // la variable a representa el primer numero de la sucecion
    // la variable b representa el segundo numero de la sucecion
    // result representa el valor de la suma del primer numero mas el segundo 

    cout<<"ingrese hasta donde se mostrarara la sucecion de fibomacci \n" ;
    cin>>fibo ;// se solicita al usuario que ingrese el numero de fibomacci que quiere
    
    for( int i =0 ; i < fibo ;i++){
      
      
      result = a + b ; // se calcula el la suma del primer numero mas el segundo de la sucecion 
      a=b;  // el primer numero toma el valor del segundo
      b = result;// b toma el valor de la suma
        
        cout<<result<<"  " ;// muestra el resultado
    }
   getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}