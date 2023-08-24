/*
16 AGOSTO 2023
@AUTORES:
KEVIN HERRERA LOPEZ
ANDRES TORRES
THOMAS GOMEZ

*/
#include <string.h>

#define Enemig 40
#define des 113

// Prototipo
void Nombres_Enemigos();

// FUNCION PRINCIPAL
#include <stdio.h>

#define Enemig 10
#define des 100

void Nombres_Enemigos();

int main() {
    Nombres_Enemigos();
    return 0;
}

void Nombres_Enemigos() {
    char Enemigos[Enemig][4][des] = {
        {
            "1. El Goblin Comun","50 HP","Criatura pequeña, grotesca y monstruosa","VIVO"
        },
        {
            "2. Goblin pesado","100 HP","Criatura pequeña, grotesca y monstruosa con armadura","VIVO"
        },
        {
            "3. Mago de la muerte","150 HP","Experto en la magia, quedado te puede poner un hechizo","VIVO"
        },
        {
            "4. La gran rata","300 HP","Encontraste un ratón grande.","VIVO"
        },
        {
            "5. El Goblin Comun","50 HP","Criatura pequeña, grotesca y monstruosa","VIVO"
        },
        {
            "6. Stone Wal","200 HP","Un hombre gigante de Piedra","¿INDEFINIDO?"
        },
        {
            "7. Huepao","150 HP","Un espíritu flotante que no puede recibir daño físico.","MUERTO"
        },
        {
            "8. Dragon","250 HP", "Una creatura reptil gigante con alas","VIVO"
        },
        {
            "9. Dragon dorado","400 HP","Encontraste con el rey de los dragones","VIVO"
        },
        {
            "10. Esqueleto","100 HP","Ten cuidado, si no derrotas al grupo a tiempo, pueden volver a crecer sus huesos","MUERTO"
        }
        // ... (resto de los enemigos)
    };

    for (int i = 0; i < Enemig; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%s\n", Enemigos[i][j]);
        }
        printf("\n");
    }
}
