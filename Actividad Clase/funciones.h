typedef struct
{
    int dia, mes, anio;
}Ffecha;

typedef struct
{
    int legajo;
    float salario;
    char nombre[31];
    Ffecha fn;
}Eempleado;

void alta(Eempleado[], int);

void listar (Eempleado[], int);

