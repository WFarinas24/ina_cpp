#include<iostream>// libreria estandar para el flujo de datos 
#include<conio.h>  //para usar el getch() y no de cierre la consola

using namespace std;// se usa el espacio de nombre que incluye std, por ejemplo cin, cout y endl
int main(){// funcion principal

    float tempMayor = 0, tempMenor=10000000, temp;// la temperatira mayor es igual a 0 para poder compararla con lo ingresado por el usuario
    // en el momento en el que el usuario ingrese la temperatura esta cambiara a esa temperatura, de manera inversa la temperatura mayor
    //temp : representa la temperatura que va a ir ingresando el usuario
    for( int i =0 ; i < 24 ; i+=4){ //representa las 24 horas estan se iran aumentando cada 4 horas
        if( i > 12 ){ // esto solo es para que se vea bien de manera visual, colocando la abrebiaura correcta am o pm 
        cout<<"ingrese la temperatura de las "<<i-12<<" pm"<<endl;
    }
        else if( i ==0){
            cout<<"ingrese la temperatura de las "<<12<<" pm"<<endl;
    }
        else{
            cout<<"ingrese la temperatura de las "<<i<<" am "<<endl;
    
        }        
        cin>>temp;
        if( temp < tempMenor){ //gestiona cuando se ingrese un numero menor al que se tiene guardado
        tempMenor = temp;
    }
        if(temp > tempMayor ){ //gestiona cuando se ingrese un numero mayor al que se tiene guardado
            tempMayor = temp;
        }
        }
        cout<<" la mayor temperatura es "<<tempMayor<<" \nLa temperatura menor es de "<<tempMenor<<endl;
        // muestra el resultado
    
 getch(); // muestra el  mensaje de presiona cualquier teclca para salir
return 0;
}