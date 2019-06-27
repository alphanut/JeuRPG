#include "Arme.h"
#include <iostream>

using namespace std;

Arme::Arme()
	: m_nom("Epée rouillée")
	, m_degats(10)
{
}

Arme::Arme(std::string nom, int degats)
	: m_nom(nom)
	, m_degats(degats)
{
}

void Arme::changer(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void Arme::afficher() const
{
	cout << "Arme: " << m_nom << " (Dégats: " << m_degats << ")" << endl;
}

int Arme::getDegats() const
{
	return m_degats;
}
