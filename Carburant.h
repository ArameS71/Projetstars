#ifndef CARBURANT_H__
#define CARBURANT_H__

#include <string>	// Bibliotheque pour la gestion des chaines de caracteres
using namespace std;


/*!
	\brief : Gestion d'une cuve de carburant
*/
class Carburant
{
	private :
		string _type;		//<! type de carburant
		double _quantite;	//<! quantite disponible
		double _prix;		//<! prix au litre
	public :
		Carburant(string type, double quantite, double prix) ;
		Carburant() ;
		double getQuantite();
		double getPrix();
		string getType();
		void decrementer();
};

#endif
