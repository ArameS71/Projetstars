//#include "stdafx.h"	// Bibliotheque specifique a Visual C++
#include <iostream>	// Bibliotheque de gestion des entrees / sorties
#include <iomanip>	// Bibliotheque de manipulation des flots d'E/S
#include <string>	// Bibliotheque pour la gestion des chaines de caracteres
#include <Carburant.h>


/*!
	\brief : Gestion d'une cuve de carburant
*/
Carburant::Carburant(string type, double quantite, double prix) : _type(type), _quantite(quantite), _prix(prix) {};
Carburant::Carburant() : _type(""), _quantite(0), _prix(0) {};


double Carburant::getQuantite() 
{ return(_quantite);}

double Carburant::getPrix() 
{return(_prix);}

string Carburant::getType() 
{return (_type);}

void Carburant::decrementer() 
{_quantite=_quantite-0.1;}

