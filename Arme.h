#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

#include <string>

class Arme
{
	std::string m_nom;
	int m_degats;

public:
	Arme();
	Arme(std::string nom, int degats);

	void changer(std::string nom, int degats);
	void afficher() const;
	int getDegats() const;
};

#endif

