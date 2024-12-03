#ifndef AFFICHEUR_H__
#define AFFICHEUR_H__

#include <iostream>	// Bibliotheque de gestion des entrees / sorties
#include <iomanip>	// Bibliotheque de manipulation des flots d'E/S
using namespace std;

/*!
	\brief : Gestion de l'afficheur
*/
class Afficheur
{
	private :
		double _litres,		//<! nombre de litres distribués
			_prix_litre,	//<! prix au litre
			_somme;		//<! somme totale
	public :
		Afficheur(double init_prix_litre);
		void incrementer();
		void afficher();
		double getSomme();
		double getLitres();
};

#endif
