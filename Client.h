#pragma once
#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <vector>
#include "Produs.h"
#include "Meniu.h"
#include "Masa.h"
#include "Rezervare.h"
#include "Reclamatie1.h"
using namespace std;
class Client
{
private:
	string nume;
	vector<Produs> comanda;
public:
	Client(const string& n);
	void adaugaProdusInComanda(const Produs& produs);
	void vizualizeazaMeniu(Meniu& meniu);
	void faReclamatie(const string& descriere, vector<Reclamatie> reclamatii);
	void faRezervare(vector<Masa>& mese, const string& numeClient, vector<Rezervare>& rezervari);
};
#endif // CLIENT_H
