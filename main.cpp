// JeuRPG.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personnage.h"

using namespace std;

int main()
{
	Personnage david("David"), goliath("Goliath", "Epee eguisee", 20);

	goliath.attaquer(david);
	david.boirePotionDeVie(20);
	goliath.attaquer(david);
	david.attaquer(goliath);

	goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
	goliath.attaquer(david);

	cout << endl << "Etat des personnages :" << endl;
	cout << endl << "David" << endl;
	david.afficherEtat();
	cout << endl << "Goliath" << endl;
	goliath.afficherEtat();
}

