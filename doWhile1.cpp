#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;

int main(){
    int mes ;
    do{
    cout<<"ingresa un numero del 1 al 12\n";
    cin>>mes ; // pide el mes al usuario
    switch(mes ){
        
        case 1: 
            cout<<"El mes es enero \n";
            break;
            
        case 2: 
            cout<<"El mes es Febrero\n";
            break;
        case 3: 
            cout<<"El mes es Marzo\n";
            break;
            
        case 4: 
            cout<<"El mes es Abril \n";
            break;
        case 5: 
            cout<<"El mes es Mayo \n";
            break;
            
        case 6: 
            cout<<"El mes es Junio\n";
            break;
            
        case 7: 
            cout<<"El mes es Julio\n";
            break;
        case 8: 
            cout<<"El mes es Agosto \n";
            break;
            
        case 9:
            cout<<"El mes es Septiembre\n";
            break;
            
        case 10:
            cout<<"El mes es Octubre \n";
            break;
            
        case 11:
            cout<<"El mes es Noviembre \n";
            break;
            
        case 12:
            cout<<"El mes es Diciembre\n";
            break;
    }
        
        }while(mes  > 12 || mes < 1 );// mientras el numero sea mayor a 12 o menor 1 
    getch();
    return 0;


}