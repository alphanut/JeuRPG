# JeuRPG
Un jeu RPG en console pour se former au C++
L'objectif de ce jeu est de fournir un exemple de Programmation Orientée Objet (POO).
Le jeu est constitué d'une classe Personnage et d'une classe Arme.
Un personnage a un nom, une arme, une vie de 0 à 100 et du mana de 0 à 100.
Le personnage peut réaliser les actions suivantes:
- recevoir des dégâts
- attaquer un autre personnage
- boire une potion de vie
- changer d'arme
- indiquer s'il est vivant
- afficher son état

Vous trouverez dans le fichier main.cpp une utilisation possible
```c++
  Personnage david("David"), goliath("Goliath", "Epée éguisée", 20);

	goliath.attaquer(david);
	david.boirePotionDeVie(20);
	goliath.attaquer(david);
	david.attaquer(goliath);

	goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
	goliath.attaquer(david);

	cout << "David" << endl;
	david.afficherEtat();
	cout << endl << "Goliath" << endl;
	goliath.afficherEtat();
```

License
---

This project is under MIT License, copyright (c) 2019 Arnaud Seguin

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
