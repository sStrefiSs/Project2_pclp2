#include "Reclamatie1.h"
using namespace std;
Reclamatie::Reclamatie(const string& desc, const string& nume) : descriere(desc), numeClient(nume) {}
string Reclamatie::getDescriere() const
{
	return descriere;
}
string Reclamatie::getNumeClient() const
{
	return numeClient;
}