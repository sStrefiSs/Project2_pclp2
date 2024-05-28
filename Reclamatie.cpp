#include "Reclamatie.h"
using namespace std;
Reclamatie::Reclamatie(const string& desc, const string& nume):descriere(desc), numeClient(nume) {}
string Reclamatie::getDescriere() const
{
	return descriere;
}
string Reclamatie::getNumeClient()
{
	return numeClient;
}