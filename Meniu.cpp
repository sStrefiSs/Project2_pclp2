#include "Meniu.h"
#include <iostream>
using namespace std;
void Meniu::adaugaProdus(const Produs& produs)
{
	produse.push_back(produs);

}
void Meniu::afiseazaMeniu() const
{
	for (const auto& produs : produse)
	{
		cout << "Produs: " << produs.getNume() << ", Pret: " << produs.getPret() << " ";
	}
}

