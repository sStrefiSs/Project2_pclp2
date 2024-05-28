#include "Reclamatie.h"
using namespace std;
Reclamatie::Reclamatie(string desc, string nume):descriere(desc), numeClient(nume) {}
string Reclamatie::getDescriere()
{
	return descriere;
}
string Reclamatie::getNumeClient()
{
	return numeClient;
}