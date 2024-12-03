//#include "stdafx.h"	// Bibliotheque specifique a Visual C++
#include <iostream>	// Bibliotheque de gestion des entrees / sorties
#include <iomanip>	// Bibliotheque de manipulation des flots d'E/S
#include <string>	// Bibliotheque pour la gestion des chaines de caracteres
#include <Pompe.h>


Pompe::Pompe(double prix_carb) : _ecran(prix_carb)
{
	_cuve =  Carburant("Super 95",1000,prix_carb);
}

void Pompe::choisir()
{
	cout << "Vous avez choisi du " << _cuve.getType() << ", allez vous servir pompe 0" << endl;
}

void Pompe::servir()
{
	for (int i=0; i<10; i++) 
	{ _cuve.decrementer();
	_ecran.incrementer();
	_ecran.afficher(); }
}

void Pompe::facturer()
{
	cout << setprecision(3);
	cout << "------------------------------" << endl;
	cout << "Nombre de Litres : " << _ecran.getLitres() << endl;
	cout << "Prix Total : " << _ecran.getSomme() << endl;
	cout << "Au revoir et Merci" << endl;
	cout << "------------------------------" << endl;
}


