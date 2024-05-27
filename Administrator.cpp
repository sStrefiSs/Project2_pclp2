#include <iostream>
#include "Produs.cpp"
#include "Eveniment.cpp"
#include "Reclamatie.cpp"
#include <vector>
using namespace std;
class Administrator
{
private:
	vector<Produs> produse;
	vector<Eveniment> evenimente;
	vector<Reclamatie> reclamatii;
public:
	void adaugaProdus(const Produs& produs)
	{
		produse.push_back(produs);

	}
	void afiseazaProduse() const
	{
		for (const auto& produs : produse)
		{
			cout << "Produs: " << produs.getNume() << ", Pret: " << produs.getPret() << " ";
	}
	}
	void adaugaEveniment(const Eveniment& eveniment)
	{
		evenimente.push_back(eveniment);
	}
	void afiseazaEvenimente() const
	{
		for (const auto& eveniment : evenimente)
		{
			cout << "Eveniment: " << eveniment.getDescriere() << " ,Data: " << eveniment.getData() << " ";
		}

	}
	void solutioneazaReclamatie(const Reclamatie& reclamatie)
	{
		cout << "Reclamatie de la " << reclamatie.getNumeClient() << ": " << reclamatie.getDescriere() << " a fost solutionata" << " ";
	}
	void afiseazaReclamatii() const
	{
		for (const auto& reclamatie : reclamatii)
		{
			cout << "Reclamatie de la " << reclamatie.getNumeClient() << ": " << reclamatie.getDescriere() << " ";
		}
	}
};