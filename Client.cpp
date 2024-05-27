#include <iostream>
#include "Produs.cpp"
#include "Meniu.cpp"
#include "Reclamatie.cpp"
#include "Rezervare.cpp"
#include <vector>
using namespace std;
class Client
{
private:
	string nume;
	vector<Produs> comanda;
public:
	Client(string n) :nume(n) {}
	void adaugaProdusInComanda(const Produs& produs)
	{
		comanda.push_back(produs);
	}
	void vizualizeazaMeniu(const Meniu& meniu) const
	{
		meniu.afiseazaMeniu();
	}
	void faReclamatie(const string& descriere, vector<Reclamatie>& reclamatii) const
	{
		Reclamatie reclamatie(descriere, nume);
		reclamatii.push_back(reclamatie);
	}
	void faRezervare(vector<Masa>& mese, const string& numeClient, vector<Rezervare>& rezervari)
	{
		for (auto& masa : mese)

		{
			if (!masa.esteRezervata())
			{
				Rezervare rezervare(numeClient, masa);
				rezervari.push_back(rezervare);
				break;
			}
		}
	}
};