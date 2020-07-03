#include<iostream>
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;

int main(){
    int num, cont =0;// la variable num representa el numero que ingresa el usuario
    // la variable cont representa la cantidad de numeros ingresados
  do{
      cout<<"ingresa un mumero ingresa 0 para salir "<<endl;
      cin>>num;
      if (num > 0){
      	cont++;// aumenta la cantidad de numeros ingresados
      }

    }while(num != 0 ) ;
    cout<<"Se ingresaron "<<cont <<" numeros mayores a 0"<<endl;
    getch(); // muestra el  mensaje de presiona cualquier teclca para salir
	return 0;
}