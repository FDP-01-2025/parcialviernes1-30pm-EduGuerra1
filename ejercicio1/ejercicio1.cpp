#include <iostream>

using namespace std;

int main(){
    //Se declaran las variables
    float calificacion = 0;
    //Se solicita al usuario la calificacion
    cout << "CALIFICACIONES\n";
    cout << "Ingrese su calificacion: ";
    //Se guarda la calificacion en una variable
    cin >> calificacion;
    //Se valida que la calificacion esté en un rango de 0 a 100
    if(calificacion>0 && calificacion <=100){
        //Se valida si la calificacion es mayor o igual a 60
        if (calificacion >= 60)
        {
            //Mensaje aprobado
            cout << "\nUsted ha aprobado";
        }else{
            //Mensaje reprobado
            cout << "\nUsted ha reprobado";
        }
        
    }else{
        //Mensaje a mostrar si la calificacion es invalida
        cout << "\nCalificacion invalida. Cerrando programa...";
    }
    

    return 0;
}