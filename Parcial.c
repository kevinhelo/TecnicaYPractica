#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

typedef struct Personaje {
    char nombre[50];
    int dureza_fisica;
    int fuerza;
    int inteligencia;
    int dureza_magica;
    int puntos_vida;
} Personaje;

typedef struct Cartas
{
    char Cart[30];
    char Efec[100];
    int Gasto;
}Cartas;

typedef struct Invocacion
{
    char nombre[50];
    int vida;
    int gasto;
    struct Cartas Cartas;
}Invocacion;

typedef struct Enemigo {
    char Nombre[50];
    int HP;
    char Descripcion[200];
    char Estado[20];
} Enemigo;


void pantallaCarga() {
    // Implementación de la pantalla de carga si es necesario
}

void imprimirEnemigo(const Enemigo *enemigo) {
    printf("Nombre: %s\n", enemigo->Nombre);
    printf("Puntos de Vida: %d\n", enemigo->HP);
    printf("Descripción: %s\n", enemigo->Descripcion);
    printf("Estado: %s\n\n", enemigo->Estado);
}

int main() {
    int seleccion;
    char nombreJugador[50];

    while (true) {
        printf("Bienvenido\n[1] Iniciar Juego\n[2] Cerrar Juego\n");

        scanf("%d", &seleccion);
        switch (seleccion) {
            case 1:
                pantallaCarga();
                printf("Digita tu nombre: ");
                scanf("%s", nombreJugador);

                printf("Escoge tu personaje:\n");
                printf("[1] Caballero\n");
                int personajeEscogido;
                scanf("%d", &personajeEscogido);

                Personaje personaje;

                switch (personajeEscogido) {
                    case 1:
                        strcpy(personaje.nombre, "Caballero");
                        personaje.fuerza = 20;
                        personaje.puntos_vida = 100;

                        printf("Has seleccionado al %s:\n", personaje.nombre);
                        printf("Características:\n");
                        printf("Fuerza: %d\n", personaje.fuerza);
                        
                        
                        printf("Puntos de Vida: %d\n", personaje.puntos_vida);

                        sleep(5);
                        break;
                    default:
                        break;
                }
                break;
            case 2:
                return 0;
            default:
                break;
        }
        
        printf("\n");

        srand(time(NULL));
        //ALEATORIO ENEMIGOS

        int EnemigosAleatorio = rand() % 10 +1;

        Enemigo El_Goblin_Comun;
        strcpy(El_Goblin_Comun.Nombre," El Goblin Comun");
        strcpy(El_Goblin_Comun.Descripcion,"Criatura pequeña, grotesca y monstruosa");
        strcpy(El_Goblin_Comun.Estado,"Vivo");
        El_Goblin_Comun.HP = 50;

        Enemigo Goblin_pesado;
        strcpy(Goblin_pesado.Nombre," El Goblin pesado");
        strcpy(Goblin_pesado.Descripcion,"Criatura pequeña, grotesca y monstruosa con armadura");
        strcpy(Goblin_pesado.Estado,"Vivo");
        Goblin_pesado.HP = 100;

        Enemigo Mago_de_la_muerte;
        strcpy(Mago_de_la_muerte.Nombre," Mago de la muerte");
        strcpy(Mago_de_la_muerte.Descripcion,"Experto en la magia, quedado te puede poner un hechizo");
        strcpy(Mago_de_la_muerte.Estado,"Vivo");
        Mago_de_la_muerte.HP = 150;

        Enemigo La_gran_rata;
        strcpy(La_gran_rata.Nombre,"La gran rata");
        strcpy(La_gran_rata.Descripcion,"Encontraste un ratón grande.");
        strcpy(La_gran_rata.Estado,"Vivo");
        La_gran_rata.HP = 300;
        
        Enemigo El_soldado_commun;
        strcpy(El_soldado_commun.Nombre,"El soldado comun");
        strcpy(El_soldado_commun.Descripcion,"Te encontraste con un soldado.");
        strcpy(El_soldado_commun.Estado,"Vivo");
        El_soldado_commun.HP = 50;

        Enemigo Stone_Wall;
        strcpy(Stone_Wall.Nombre,"Stone Wall");
        strcpy(Stone_Wall.Descripcion,"Un hombre gigante de Piedra");
        strcpy(Stone_Wall.Estado,"Indefinido");
        Stone_Wall.HP = 200;

        Enemigo Huepao;
        strcpy(Huepao.Nombre,"Huepao");
        strcpy(Huepao.Descripcion,"Un espíritu flotante que no puede recibir daño físico");
        strcpy(Huepao.Estado,"Muerto");
        Huepao.HP = 150;

        Enemigo Dragon;
        strcpy(Dragon.Nombre,"Dragon");
        strcpy(Dragon.Descripcion, "Una creatura reptil gigante con alas");
        strcpy(Dragon.Estado,"Vivo");
        Dragon.HP = 250;

        Enemigo Dragon_Dorado;
        strcpy(Dragon_Dorado.Nombre,"Dragon Dorado");
        strcpy(Dragon_Dorado.Descripcion, "Encontraste con el rey de los dragones");
        strcpy(Dragon_Dorado.Estado,"Vivo");
        Dragon_Dorado.HP = 400; 

        Enemigo Esqueleto;
        strcpy(Esqueleto.Nombre,"Esqueleto");
        strcpy(Esqueleto.Descripcion, "Ten cuidado, si no derrotas al grupo a tiempo, pueden volver a crecer sus huesos");
        strcpy(Esqueleto.Estado,"Muerto");
        Esqueleto.HP = 100;

        
        switch (EnemigosAleatorio)
        {
        case 1:
           
            imprimirEnemigo(&El_Goblin_Comun);
            break;
        case 2:
            imprimirEnemigo(&Goblin_pesado);
            break;
        case 3:
            imprimirEnemigo(&Mago_de_la_muerte);
            break;
        case 4:
            imprimirEnemigo(&La_gran_rata);
            break;
        case 5:
            imprimirEnemigo(&El_soldado_commun);
            break;
        case 6:
            imprimirEnemigo(&Stone_Wall);
            break;
        case 7:
            imprimirEnemigo(&Huepao);
            break;
        case 8:
            imprimirEnemigo(&Dragon);
            break;
        case 9:
            imprimirEnemigo(&Dragon_Dorado);
            break;
        
        case 10:
            imprimirEnemigo(&Esqueleto);
            break;
        
        default:
            break;
        }



        //ALEATORIO CARTAS

        //int NUMERO_MAXIMO = 3;
        int numeros_generados[3] = {0}; // Inicializamos el arreglo con ceros

        int contador = 0;

        while (contador < 3) {
            int numero_aleatorio = rand() % (3 + 1) + 1;
            
            // Verificar si el número ya ha sido generado
            int repetido = 0;
            for (int i = 0; i < contador; i++) {
                if (numeros_generados[i] == numero_aleatorio) {
                    repetido = 1;
                    break;
                }
            }
            
            if (!repetido) {
                numeros_generados[contador] = numero_aleatorio;
                contador++;
            } else {
                // Si el número es repetido, generamos otro número
                continue;
            }
        }

        Cartas Attack_Speed;
        strcpy(Attack_Speed.Cart, "Velocidad De Ataque");
        strcpy(Attack_Speed.Efec,"Esta Carta permite que tu persona ataque mas rapido (Solo ataques cuerpo a cuerpo)");
        Attack_Speed.Gasto = 7;

        Cartas immune;
        strcpy(immune.Cart,"Inmune");
        strcpy(immune.Efec,"Esta Carta permite ser inmune contra ataque magico del enemigo");
        immune.Gasto = 9;

        Cartas elven_summoning;
        strcpy(elven_summoning.Cart,"Invocacion Elfica");
        strcpy(elven_summoning.Efec,"Invoca a un guerrero elfo en el campo de batalla, que inflige 5 de daño de ataque");
        elven_summoning.Gasto = 4;

        Cartas Fire;
        strcpy(Fire.Cart,"Fuego Voraz");
        strcpy(Fire.Efec,"Inflige 6 de daño de ataque, es inmune a objetivos con resistencia magica");
        Fire.Gasto = 3;

        Cartas Steal_Turns;
        strcpy (Steal_Turns.Cart,"Roba Turnos");
        strcpy(Steal_Turns.Efec,"Tu rival no puede atacar, y puedes usar el turno del rival");
        Steal_Turns.Gasto = 10;

        //Invocacion invo;


        for (int i = 0; i < 3; i++) {
            switch (numeros_generados[i])
            {
            case 1:
                printf("Carta %d:\n", i + 1);
                printf("%s\n", Attack_Speed.Cart);
                printf("%s\n", Attack_Speed.Efec);
                printf("Gasto: %d\n\n", Attack_Speed.Gasto);
                break;
            case 2:
                printf("Carta %d:\n", i + 1);
                printf("%s\n", immune.Cart);
                printf("%s\n", immune.Efec);
                printf("Gasto: %d\n\n", immune.Gasto);
                break;
            case 3:
                printf("Carta %d:\n", i + 1);
                printf("%s\n", elven_summoning.Cart);
                printf("%s\n", elven_summoning.Efec);
                printf("Gasto: %d\n\n", elven_summoning.Gasto);
                break;
            case 4:
                printf("Carta %d:\n", i + 1);
                printf("%s\n", Fire.Cart);
                printf("%s\n", Fire.Efec);
                printf("Gasto: %d\n\n", Fire.Gasto);
                break;
            case 5:
                printf("Carta %d:\n", i + 1);
                printf("%s\n", Steal_Turns.Cart);
                printf("%s\n", Steal_Turns.Efec);
                printf("Gasto: %d\n\n", Steal_Turns.Gasto);
                break;
            default:
                break;
            }
        }
    }

    return 0;
}

