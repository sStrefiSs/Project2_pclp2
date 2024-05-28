#pragma once
#ifndef RECLAMATIE_H
#define RECLAMATIE_H
#include <string>
class Reclamatie
{
private:
	string descriere;
	string numeClient;
public:
	Reclamatie(const string& desc, const string& nume);
	string getDescriere();
	string getNumeClient();
};
#endif // RECLAMATIE_H
