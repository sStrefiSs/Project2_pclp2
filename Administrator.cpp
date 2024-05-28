#include "Administrator.h"
#include <iostream>
using namespace std;
void Administrator::adaugaProdus(const Produs& produs)
{
	produse.push_back(produs);
}
void Administrator::afiseazaProduse() const
{
	for (const auto &produs : produse)
	{
		cout << "Produs: "<<produs.getNume() << ", Pret: " << produs.getPret() << " ";
	}
}
void Administrator::adaugaEveniment(const Eveniment& eveniment)
{
	evenimente.push_back(eveniment);
}
void Administrator::afiseazaEvenimente() const
{
	for (const auto& eveniment : evenimente)
	{
		cout << "Eveniment: " << eveniment.getDescriere() << ", Data: " << eveniment.getData() << " ";
	}
}
void Administrator::solutioneazaReclamatie(const Reclamatie& reclamatie)
{
	cout << "Reclamatie de la " << reclamatie.getNumeClient() << ": " << reclamatie.getDescriere() << " a fost solutionata" << " ";
}
void Administrator::adaugaReclamatie(const Reclamatie& reclamatie)
{
	reclamatii.push_back(reclamatie);
}
void Administrator::afiseazaReclamatii() const
{
	for (const auto& reclamatie : reclamatii)
	{
		cout << "Reclamatie de la " << reclamatie.getNumeClient() << ": " << reclamatie.getDescriere() << " ";
	}

}
