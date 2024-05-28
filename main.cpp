#include <iostream>
#include <vector>
#include "Meniu.h"
#include "Masa.h"
#include "Rezervare.h"
#include "Eveniment.h"
#include "Reclamatie.h"
#include "Client.h"
#include "Administrator.h"
using namespace std;
int main()
{
	//creare meniu
	Meniu meniu;
	meniu.adaugaProdus(Produs("Pizza", 20.0));
	meniu.adaugaProdus(Produs("Salata", 25.0));
	meniu.adaugaProdus(Produs("Supa", 15.0));
	meniu.adaugaProdus(Produs("Hamburger", 25.5));
	meniu.adaugaProdus(Produs("Suc", 10.0));
	meniu.adaugaProdus(Produs("Apa", 2.5));
	meniu.adaugaProdus(Produs("Papanasi", 35.0));
	meniu.adaugaProdus(Produs("Clatite", 15.5));

	//creare mese
	vector<Masa> mese;
	for (int i = 1;i <= 10;i++)
	{
		mese.push_back(Masa(i));
	}
	//creare evenimente
	vector<Eveniment> evenimente;
	evenimente.push_back(Eveniment("Concert Jazz", " 05-06-2024"));
	evenimente.push_back(Eveniment("Seara de stand-up Micutzu", "20-06-2024"));

	//creare client
	Client client("Ion Popescu");
	//clientul vizualizeaza meniul
	client.vizualizeazaMeniu(meniu);
	//clientul face o rezervare
	client.faRezervare(mese, "Ion Popescu", rezervari);
	//clientul face o reclamatie
	client.faReclamatie("Serviciu lent", reclamatie);
	//Administratorul
	Administrator admin;
	admin.adaugaProdus(Produs("Vin", 50));
	admin.afiseazaProduse();
	admin.adaugaEveniment(Eveniment("Gala de caritate", "10 - 07 - 2024"));
	admin.afiseazaEvenimente();
	for (const auto reclamatie:reclamatii)
	{
		admin.solutioneazaReclamatie(reclamatie);
	}	
	return 0;
}

