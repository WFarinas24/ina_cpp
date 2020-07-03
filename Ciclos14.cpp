#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    float n1,n2,n3,n4,n5;
    float q1, q2,q3,q4,q5;
    bool all1=true, all2=true, all3=true,all4=true,all5=true;
    float nota ;
     
    
    for( int i =1 ; i<=5 ;i++){
        for(int j = 1 ; j <=3 ;j++)
        
            cout<<"ingresa la nota del examen "<<j<<" alumno "<<i<<endl;
            cin>>nota;
            switch(i){
            
        
                case 1: 
                    break;
        }
        } 

getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}