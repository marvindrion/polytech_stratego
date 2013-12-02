#include <stdlib.h>
#include <stdio.h>

typedef struct Pion{
	int force;
	int camp; //bleu ou rouge
	int erreur; //pour gerer la regle des 2case(voir regle 2CASES
} Pion;

typedef struct Joueur{
	int nombreDeFautes; //init à 0
	int camp ; // blue ou rouge, pareil que les pions donc utiliser une enum;
}Joueur ;

typedef Pion* Terrain[10][10]; // chaque case contient un pointeur vers un pion, case vide = NULL
