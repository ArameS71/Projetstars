#ifndef POMPE_H__
#define POMPE_H__

#include <Carburant.h>
#include <Afficheur.h>

/*!
	\brief : Gestion d'une pompe a essence a carburant unique
*/
class Pompe
{
	private :
		Carburant _cuve;	//<! cuve contenant le carburant
		Afficheur _ecran;	//<! afficheur digital

	public :
		Pompe(double prix_carb);
		void choisir();
		void servir();
		void facturer();
};

#endif
