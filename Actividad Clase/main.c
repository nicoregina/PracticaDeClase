#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int i, cant;
    Eempleado emp[cant], aux;
    char rta[2];

    puts("ingrese la cantidad de alumnos en la comision: ");
    scanf("%d", &cant);
    puts("Realizar el alta de los alumnos? *SI p/ alta, cualquier tecla para salir...");
    scanf("%s", rta);
    if(rta == "si" || rta == SI || rta == Si || rta == sI)
    {
        alta(Eempleado, cant);
    }
    else{break;}


    return 0;
/*
    for(i=1; i < CANT; i++)
    {
        printf("ingrese el nombre del empleado numero %d: ", i);
        scanf("%s", emp[i].nombre);
        fflush(stdin);//se usa solo en cadena de caracteres o en chars.
        printf("ingrese el legajo del empleado numero %d: ", i);
        scanf("%d", &emp[i].legajo);
        printf("ingrese el salario del empleado numero %d: ", i);
        scanf("%f", &emp[i].salario);
        printf("ingrese el dia (numeros) de nacimiento del empleado numero %d: ", i);
        scanf("%d", &emp[i].fn.dia);
        printf("ingrese el mes (numeros) de nacimiento del empleado numero %d: ", i);
        scanf("%d", &emp[i].fn.mes);
        printf("ingrese el año (numeros) de nacimiento del empleado numero %d: ", i);
        scanf("%d", &emp[i].fn.anio);
    }
    for(i = 0; i < CANT; i++)
    {
        printf("%d %s %d/%d/%d %.2f"
               ,emp[i].legajo, emp[i].nombre, emp[i].fn.dia
               , emp[i].fn.mes, emp[i].fn.anio, emp[i].salario)
    }
*/
}
