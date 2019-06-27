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
	int m_degatsMagie;

public:
	Personnage();
	Personnage(std::string nom);
	Personnage(std::string nom, std::string nomArme, int degatsArme);
	Personnage(std::string nom, std::string nomArme, int degatsArme, int vie, int mana, int degatsMagie);
	Personnage(const Personnage& autre);

	~Personnage();

	void recevoirDegats(int nbDegats);
	void attaquer(Personnage& cible);
	void attaqueMagie(Personnage& cible);
	void boirePotionDeVie(int quantitePotion);
	void rechargerMana(int quantite);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant() const;
	bool possedeMagie() const;
	void afficherEtat() const;
	std::string getNom() const;
};

#endif // !PERSONNAGE_H_INCLUDED




