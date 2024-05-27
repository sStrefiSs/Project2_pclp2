#include "Client.h"
using namespace std;
Client::Client(const string& n) :nume(n) {}
void Client::adaugaProdusInComanda(const Produs& produs)
{
	comanda.push_back(produs);
}
void Client::vizualizeazaMeniu(const Meniu& meniu) const
{
	meniu.afiseazaMeniu();
}
void Client::faReclamatie(const string& descriere, vector<Reclamatie>& reclamatii) const
{
	Reclamatie reclamatie(descriere, nume);
	reclamatii.push_back(reclamatie);
}
void Client::faRezervare(vector<Masa>& mese, const string& numeClient, vector<Rezervare>& rezervari)
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