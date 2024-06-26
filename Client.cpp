#include "Client.h"
#include "Reclamatie1.h"
using namespace std;
Client::Client(const string& n) :nume(n) {}
void Client::adaugaProdusInComanda(const Produs& produs)
{
	comanda.push_back(produs);
}
void Client::vizualizeazaMeniu( Meniu& meniu)
{
	meniu.afiseazaMeniu();
}
void Client::faReclamatie( const string& descriere, vector<Reclamatie> reclamatii)
{
	Reclamatie reclamatie(descriere, nume);
	reclamatii.push_back(reclamatie);
	cout << "Clientul " << nume << " a facut o reclamatie: " << descriere << ".\n";
}
void Client::faRezervare(vector<Masa>& mese, const string& numeClient, vector<Rezervare>& rezervari)
{
	for (auto& masa : mese)
	{
		if (!masa.esteRezervata())
		{
			Rezervare rezervare(numeClient, masa);
			rezervari.push_back(rezervare);
			masa.rezerva();
			cout << "Clientul " << numeClient << " a rezervat masa " << masa.getNumar() << ".\n";
			break;
		}
	}
}