#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLLUDED

#include <string>
#include "Arme.h"

class Personnage
{
	int m_vie;
	int m_mana;
	Arme m_arme;
	std::string m_nom;

public:
	Personnage();
	Personnage(std::string nom);
	Personnage(std::string nom, std::string nomArme, int degatsArme);
	Personnage(std::string nom, std::string nomArme, int degatsArme, int vie, int mana);
	Personnage(const Personnage& autre);

	~Personnage();

	void recevoirDegats(int nbDegats);
	void attaquer(Personnage& cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant() const;
	void afficherEtat() const;
};

#endif // !PERSONNAGE_H_INCLUDED




