/*CODIFICAR 5 DE 20 CARTAS

Codificar cinco de las veinte cartas que se piden
en el proyecto. La codificación de los datos de cada carta debe
incluir el nombre, el efecto en combate y el valor de Gasto
de Poder. Solo se debe codificar cartas de Ataque y/o
Habilidad (ver sección Lógica de Cartas).

el nombre
el efecto en combate
el valor de Gasto de Poder.
*/

#include <stdio.h>
#include <string.h>

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


int main(){

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

    Invocacion invo;
    invo.Cartas = Steal_Turns;

    printf("%s\n", invo.Cartas.Cart);
    printf("%s\n", invo.Cartas.Efec);
    printf("%d", invo.Cartas.Gasto);
    return 0;

}


