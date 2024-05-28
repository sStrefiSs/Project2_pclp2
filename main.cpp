#include <iostream>
#include <vector>
#include "Meniu.h"
#include "Masa.h"
#include "Rezervare.h"
#include "Eveniment.h"
#include "Reclamatie1.h"
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
	//afisarea evenimentelor create
	cout << "EVENIMENTE PREZENTE: \n";
	for (const auto& eveniment : evenimente)
	{
		cout << "Descriere: " << eveniment.getDescriere() << ", Data: " << eveniment.getData() << "\n";
	}
	Administrator admin;
	cout << endl;
	cout << "EVENIMENTE NOI: ";
	admin.adaugaEveniment(Eveniment("Gala de caritate", "10 - 07 - 2024"));
	cout << endl;
	admin.afiseazaEvenimente();
	cout << endl;
	
	
	//creare client
	Client client("Ion Popescu");
	//clientul vizualizeaza meniul
	cout << endl;
	cout << "MENIUL RESTAURANTULUI: ";
	cout << endl;

	client.vizualizeazaMeniu(meniu);
	//declararea vectorului de rezervari
	vector<Rezervare> rezervari;
	cout << endl;
	cout << "PRODUSE NOI:";
	admin.adaugaProdus(Produs("Vin", 50));
	cout << endl;
	admin.afiseazaProduse();
	cout << endl;
	
	//clientul face o rezervare
	cout << endl;
	client.faRezervare(mese, "Ion Popescu", rezervari);
	//clientul face o reclamatie
	vector<Reclamatie> reclamatii;
	client.faReclamatie("Serviciu lent", reclamatii);
	cout << endl;

	return 0;
}

