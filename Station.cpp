#include <Pompe.h>
#include <Pompe3C.h>


/*
	Programme Principal
*/
int main(int argc, char* argv[])
{
	// Exercice 1
	Pompe P1(1.05);

	P1.choisir();
	P1.servir();
	P1.facturer();

	// Exercice 2
	Pompe3Carburants P2(1.05, 1.10, 0.75);

	P2.choisir();
	P2.servir();
	P2.facturer();

	return 0;
}

