// JeuRPG.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personnage.h"

using namespace std;

int main()
{
	Personnage* david = new Personnage("David");
	Personnage* goliath = new Personnage("Goliath", "Epee eguisee", 20);

	cout << "David vs Golioath" << endl;
	cout << "--------------------------------------------------" << endl;

	int numAttaquant = 0;
	int numAttaque = 0;
	int numArme = 0;

	Personnage* attaquant = david;
	Personnage* victime = goliath;

	while (david->estVivant() && goliath->estVivant())
	{
		cout << endl << "Etat des personnages :" << endl;
		cout << endl << "David" << endl;
		david->afficherEtat();
		cout << endl << "Goliath" << endl;
		goliath->afficherEtat();

		cout << endl << "Choisir l'attaquant :" << endl;
		cout << "1 - David" << endl;
		cout << "2 - Goliath" << endl;
		cin >> numAttaquant;

		cout << endl << "Choisir l'attaque :" << endl;
		cout << "1 - Attaque a l'arme" << endl;
		cout << "2 - Attaque magique" << endl;
		cin >> numAttaque;

		attaquant = (numAttaquant == 1) ? david : goliath;
		victime = (numAttaquant == 1) ? goliath : david;

		if (numAttaque == 1)
		{
			cout << endl << "Choix des armes :" << endl;
			cout << "1 - Epee rouillee (degats 10)" << endl;
			cout << "2 - Epee eguisee (degats 20)" << endl;
			cout << "3 - Epee venimeuse (degats 40)" << endl;
			cin >> numArme;

			switch (numArme)
			{
			case 1: attaquant->changerArme("Epee rouillee", 10); break;
			case 2: attaquant->changerArme("Epee eguisee", 20); break;
			case 3: attaquant->changerArme("Epee venimeuse", 40); break;
			default:
				break;
			}
		}

		if (numAttaque == 1)
			attaquant->attaquer(*victime);
		else
			attaquant->attaqueMagie(*victime);
	}

	const Personnage* vainqueur = david->estVivant() ? david : goliath;
	cout << endl << "Le vainqueur est " << vainqueur->getNom() << " !!!" << endl;

	delete david;
	delete goliath;
	
}

