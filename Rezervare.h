#pragma once
#ifndef REZERVARE_H
#define REZERVARE_H
#include <string>
#include "Masa.h"
using namespace std;
class Rezervare
{
private:
	string numeClient;
	Masa masa;
public:
	Rezervare(const string& nume, Masa& m);
	string getNumeClient() const;
	int getNumarMasa() const;
};
#endif //REZERVARE_H