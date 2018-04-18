#include "funciones.h"
#include <stdio.h>

void alta(Eempleado emp[], int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
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
}

void listar (Eempleado emp[], int cantidad)
{
    int i;
    for(i = 0; i < cantidad; i++)
    {
        printf("%d %s %d/%d/%d %.2f"
               ,emp[i].legajo, emp[i].nombre, emp[i].fn.dia
               , emp[i].fn.mes, emp[i].fn.anio, emp[i].salario);
    }
}
