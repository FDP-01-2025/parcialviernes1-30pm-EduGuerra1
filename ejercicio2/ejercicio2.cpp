#include <iostream>

using namespace std;

int main()
{
    // Se declaran las variables
    int i = 0;
    float calificaciones[100], calificacion = 0, promedio = 0, sumaNotas = 0;
    bool seguir = true;
    string opcion = "y";

    cout << "PROGRAMA PARA CALCULAR PROMEDIOS\n";

    while (opcion == "y" && i<=100)
    {
         // Se inicializa la variable de la calificacion
        calificacion = 0;
        // Se solicita la calificacion
        cout << "Ingrese la calificacion: ";
        cin >> calificacion;
        //Se valida si la califiacion ingresada es positiva, de lo contrario no se incluye en el array
        if (calificacion >= 0 && calificacion <= 100)
        {
            // Se suma la calificacion al array
            calificaciones[i] = calificacion;
            i++;
        }
        
        // Se pregunta al usuario si quiere calcular otra calificacion
        cout << "Desea ingresar otra calificacion?(y/n): ";
        cin >> opcion;
    }
    //Se suman todas las calificaciones obtenidas
    for (int j = 0; j <= i - 1; j++)
    {
        sumaNotas += calificaciones[j];
    }
    //Se calcula el promedio
    promedio = sumaNotas / i;
    //Se muestra el promedio al usuario
    cout << "\nEl promedio obtenido es de : " << promedio;

    return 0;
}