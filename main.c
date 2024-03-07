#include <stdio.h>
#include <stdlib.h>

// se crea la estructura para almacenar la informacion de un contacto
struct Contacto {
    char nombre[50];
    char telefono[20];
    char correo[50];
};

int main() {
    struct Contacto kendricks;

    // se colocan los datos del contacto
    strcpy(kendricks.nombre, "Kendricks Vargas");
    strcpy(kendricks.telefono, "04146034877");
    strcpy(kendricks.correo, "kendricksopsu2021@gmail.com");

    // se muestra el contacto
    printf("Contacto de ejemplo:\n");
    printf("Nombre: %s\n", kendricks.nombre);
    printf("Telefono: %s\n", kendricks.telefono);
    printf("Correo electronico: %s\n", kendricks.correo);

    return 0;
}
