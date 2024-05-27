#include <iostream>
#include "Meniu.cpp"
#include "Produs.cpp"
#include "Eveniment.cpp"
#include "Client.cpp"
#include "Masa.cpp"
#include "Administrator.cpp"
#include <vector>
using namespace std;
int main()
{
	//creare meniu
	Meniu meniu;
	meniu.adaugaProdus(Produs("Pizza", 20.0));
	meniu.adaugaProdus(Produs("Salata", 10.0));
	meniu.adaugaProdus(Produs("Supa", 15.0));
	meniu.adaugaProdus(Produs("Hamburger", 25.0));
	meniu.adaugaProdus(Produs("Suc", 5.0));
	meniu.adaugaProdus(Produs("Apa", 2.5));
	meniu.adaugaProdus(Produs("Papanasi", 13.5));
	meniu.adaugaProdus(Produs("Clatite", 14.0));
	
	//creare mese
	vector<Masa> mese;
	for (int i = 1;i <= 10;i++)
	{
		mese.push_back(Masa(i));
	}
	//creare evenimente
	vector<Eveniment> evenimente;
	evenimente.push_back(Eveniment("Concert de Jazz", "12-06-2024"));
	evenimente.push_back(Eveniment("Stand-up, Micutzu", "17-06-2024"));
	evenimente.push_back(Eveniment("Concert Bazooka", "29-06-2024"));
	
	//creare client
	Client client("Ion Popescu");
	
	//clientul vizualizeaza meniul
	client.vizualizeazaMeniu(meniu);
	
	//clientul face o rezervare	
	vector<Rezervare> rezervari;
	client.faRezervare(mese, "Ion Popescu", rezervari);
	
	//clientul face o reclamatie
	vector<Reclamatie> reclamatii;
	client.faReclamatie("Serviciu lent", reclamatii);

	//Adminul
	Administrator admin;
	admin.adaugaProdus(Produs("Vin", 50.0));
	admin.afiseazaProduse();
	admin.adaugaEveniment(Eveniment("Gala de caritate", "10-07-2024"));
	admin.afiseazaEvenimente();
	for (const auto& reclamatie : reclamatii)
	{
		admin.solutioneazaReclamatie(reclamatie);
	}
	return 0;


}