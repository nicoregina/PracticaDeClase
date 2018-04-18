#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(){
struct eEmpleado emp[cant], aux;

for(i=0; i<cant -1; i++){
    for(j=i+1; j < cant; j++){
        if(emp[i], salario < emp[j].salario){
            aux = emp[i];
            emp[i] = emp[j];
            emo[j] = aux;
        }
        if(emp[i].salario == emp[j].salario){
            if(strcmp(emp[i].nombre, emp[j].nombre) > 0){
                aux = emp[i];
                emp[i] = emp[j];
                emp[j] = aux;
            }
        }
    }
}
}
