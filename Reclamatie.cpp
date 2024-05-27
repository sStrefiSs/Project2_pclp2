#include <iostream>
#include <string>
using namespace std;
class Reclamatie
{
private:
	string descriere;
	string numeClient;
public:
	Reclamatie(string desc, string nume) : descriere(desc), numeClient(nume) {}
	string getDescriere() const
	{
		return descriere;
	}
	string getNumeClient() const
	{
		return numeClient;
	}
};
