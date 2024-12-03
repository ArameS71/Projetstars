//#include "stdafx.h"	// Bibliotheque specifique a Visual C++
#include <iostream>	// Bibliotheque de gestion des entrees / sorties
#include <iomanip>	// Bibliotheque de manipulation des flots d'E/S
#include <string>	// Bibliotheque pour la gestion des chaines de caracteres
#include <Afficheur.h>

Afficheur::Afficheur(double init_prix_litre) : _litres(0), _prix_litre(init_prix_litre), _somme(0) {}
void Afficheur::incrementer() 
{_litres=_litres+0.1; _somme=_somme+_prix_litre*0.1; }

void Afficheur::afficher() 
{ cout << "[" << setprecision(3) << _litres << " | " << _prix_litre << " | " << _somme << "]" << endl;}

double Afficheur::getSomme() 
{return(_somme);}

double Afficheur::getLitres() 
{return(_litres);}



