#pragma once
#ifndef RECLAMATIE1_H
#define RECLAMATIE1_H
#include <string>
using namespace std;
class Reclamatie
{
private:
	string descriere;
	string numeClient;
public:
	Reclamatie(const string& desc, const string& nume);
	string getDescriere() const;
	string getNumeClient() const;
};
#endif // RECLAMATIE1_H
