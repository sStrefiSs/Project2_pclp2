#pragma once
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include <vector>
#include "Produs.h"
#include "Eveniment.h"
#include "Reclamatie.h"
using namespace std;
class Administrator
{
private:
	vector<Produs> produse;
	vector<Eveniment> evenimente;
	vector<Reclamatie> reclamatii;
public:
	void adaugaProdus(const Produs& produs);
	void afiseazaProdus() const;
	void adaugaEveniment(const Eveniment& eveniment);
	void afiseazaEvenimente() const;
	void solutioneazaReclamatie(const Reclamatie& reclamatie);
	void afiseazaReclamatii() const;
};
#endif// ADMINISTRATOR_H