#include <stdlib.h>
#include <stdio.h>

typedef struct Pion{
	int force;
	int camp; //bleu ou rouge
	int erreur; //pour gerer la regle des 2case(voir regle 2CASES)
	int adresse; //l'adresse de la case du tableau qui contient le pion
} Pion;

typedef struct Joueur{
	int nombreDeFautes; //init à 0
	int camp ; // blue ou rouge, pareil que les pions donc utiliser une enum;
	Pion* decouverts[20]; //Tableau des pions de l'adversaire
    // + champs pour la stratégie
    int nbDecouverts; // pour manipuler le tableau
}Joueur ;

typedef struct Mouvement{
    int x1;
    int y1;
    int x2;
    int y2;
}Mouvement;

typedef Pion* Terrain[10][10]; // chaque case contient un pointeur vers un pion, case vide = NULL

void IAInitialisation(); //initialise les champs de l'IA
int IASelectionnerMouvement(Terrain t, Joueur j, Mouvement m); //Sélectionne le mouvement le plus opportun en fonction du terrain et du joueur.
void IADetruire();

//Pas de méthode Jouer() CAR le role de l'IA n'est pas de JOUER mais de prendre la MEILLEURE decision (= meilleur mouvement).
//Pas de méthode concernant l'adversaire puisque géré par la structure joueur->decouverts
