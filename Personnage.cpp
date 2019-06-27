#include "Personnage.h"
#include <algorithm>
#include <iostream>

using namespace std;

Personnage::Personnage()
	: m_vie(100)
	, m_mana(100)
	, m_arme("Epee rouillee", 10)
	, m_nom("Mr X")
	, m_degatsMagie(10)
{

}

Personnage::Personnage(std::string nom)
	: m_nom(nom)
	, m_arme("Epee rouillee", 10)
	, m_vie(100)
	, m_mana(100)
	, m_degatsMagie(10)
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme)
	: m_arme(nomArme, degatsArme)
	, m_vie(100)
	, m_mana(100)
	, m_nom(nom)
	, m_degatsMagie(10)
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme, int vie, int mana, int degatsMagie)
	: m_arme(nomArme, degatsArme)
	, m_vie(vie)
	, m_mana(mana)
	, m_nom(nom)
	, m_degatsMagie(degatsMagie)
{
	
}

Personnage::Personnage(const Personnage& autre)
	: m_arme(autre.m_arme)
	, m_vie(autre.m_vie)
	, m_mana(autre.m_mana)
	, m_nom(autre.m_nom)
	, m_degatsMagie(autre.m_degatsMagie)
{
}

Personnage::~Personnage()
{
}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie = max(m_vie - nbDegats, 0);
	cout << m_nom << " a recu " << nbDegats << " degats." << endl;
}

void Personnage::attaquer(Personnage& cible)
{
	cout << m_nom << " attaque " << cible.m_nom << endl;
	cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::attaqueMagie(Personnage& cible)
{
	if (possedeMagie())
	{
		cout << m_nom << " lance un sort contre " << cible.m_nom << endl;
		cible.recevoirDegats(m_degatsMagie);
		// Une attaque magique provoque une perte de magie et inflige des dégâts à la cible
		m_mana = max(m_mana - m_degatsMagie, 0);
	}
	else
	{
		cout << m_nom << " ne peut pas lancer de sort car n'a plus de mana." << endl;
	}

}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	if (m_vie < 100)
	{
		cout << m_nom << " boit de la potion de vie et recupere " << (100 - m_vie) << " points de vie." << endl;
		m_vie = min(m_vie + quantitePotion, 100);
	}
}

void Personnage::rechargerMana(int quantite)
{
	if (m_mana < 100)
	{
		cout << m_nom << " recharge la magie et recupere " << (100 - m_mana) << " points de mana." << endl;
		m_mana = min(m_mana + quantite, 100);
	}

}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	cout << m_nom << " change d'arme:" << endl;
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
	m_arme.afficher();
}

bool Personnage::estVivant() const
{
	return m_vie > 0;
}

bool Personnage::possedeMagie() const
{
	return m_mana > 0;
}

void Personnage::afficherEtat() const
{
	cout << "Vie: " << m_vie << endl;
	cout << "Mana: " << m_mana << endl;
	m_arme.afficher();
}

string Personnage::getNom() const
{
	return m_nom;
}
