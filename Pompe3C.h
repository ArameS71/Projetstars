#ifndef POMPE3C_H__
#define POMPE3C_H__

#include <vector>	// bibliotheque de gestion des vecteurs
#include <Carburant.h>
#include <Afficheur.h>

using namespace std;


/*!
	\brief : Gestion d'une pompe a essence a 3 types de carburants
*/
class Pompe3Carburants
{
	private :
		vector <Carburant> _cuves;	//<! les cuves contenant le carburant
		Afficheur _ecran;	//<! afficheur digital
		int _choix;

	public :
		Pompe3Carburants(double prix_carb1=0, double prix_carb2=0, double prix_carb3=0);
		void choisir();
		void servir();
		void facturer();
};

#endif
