#include "Personnage.h"
#include <algorithm>
#include <iostream>

using namespace std;

Personnage::Personnage()
	: m_vie(100)
	, m_mana(100)
	, m_arme("Epée rouillée", 10)
	, m_nom("Mr X")
{

}

Personnage::Personnage(std::string nom)
	: m_nom(nom)
	, m_arme("Epée rouillée", 10)
	, m_vie(100)
	, m_mana(100)
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme)
	: m_arme(nomArme, degatsArme)
	, m_vie(100)
	, m_mana(100)
	, m_nom(nom)
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme, int vie, int mana)
	: m_arme(nomArme, degatsArme)
	, m_vie(vie)
	, m_mana(mana)
	, m_nom(nom)
{
	
}

Personnage::Personnage(const Personnage& autre)
	: m_arme(autre.m_arme)
	, m_vie(autre.m_vie)
	, m_mana(autre.m_mana)
	, m_nom(autre.m_nom)
{
}

Personnage::~Personnage()
{
}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie = max(m_vie - nbDegats, 0);
}

void Personnage::attaquer(Personnage& cible)
{
	cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie = min(m_vie + quantitePotion, 100);
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const
{
	return m_vie > 0;
}

void Personnage::afficherEtat() const
{
	cout << "Vie: " << m_vie << endl;
	cout << "Mana: " << m_mana << endl;
	m_arme.afficher();
}
