#pragma once
#ifndef MENIU_H
#define MENIU_H
#include <vector>
#include "Produs.h"
using namespace std;
class Meniu
{
private:
	vector<Produs> produse;
public:
	void adaugaProdus(const Produs& produs);
	void afiseazaMeniu() const;
};

#endif // MENIU_H