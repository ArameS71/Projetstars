#include <Pompe3C.h>

Pompe3Carburants::Pompe3Carburants(double prix_carb1, double prix_carb2, double prix_carb3) : _ecran(0)
{
	_cuves.push_back(Carburant("Super 95",1000,prix_carb1));
    _cuves.push_back(Carburant("Super 98",1000,prix_carb2));
    _cuves.push_back(Carburant("Diesel",1000,prix_carb3));
	_choix=-1;
}

void Pompe3Carburants::choisir()
{
	while ((_choix<0)||(_choix>2))
	{
		cout << "Choisissez votre pompe : [0-Super95; 1-Super 98; 2-Diesel]" << endl;
		cin >> _choix;
	}
	_ecran = Afficheur(_cuves[_choix].getPrix());
	cout << "Vous avez choisi du " << _cuves[_choix].getType() << ", allez vous servir pompe " << _choix << endl;
}

void Pompe3Carburants::servir()
{
	if (_choix==-1) return;
	for (int i=0; i<10; i++) 
	{	_cuves[_choix].decrementer();
		_ecran.incrementer();
		_ecran.afficher(); }
}

void Pompe3Carburants::facturer()
{
	if (_choix==-1) return;
	cout << setprecision(3);
	cout << "------------------------------" << endl;
	cout << "Nombre de Litres : " << _ecran.getLitres() << endl;
	cout << "Prix Total : " << _ecran.getSomme() << endl;
	cout << "Au revoir et Merci" << endl;
	cout << "------------------------------" << endl;

	_choix=-1;
}


