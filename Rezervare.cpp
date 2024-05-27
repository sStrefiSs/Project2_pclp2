#include "Rezervare.h"
using namespace std;
Rezervare::Rezervare(const string& nume, Masa& m) :numeClient(nume), masa(m)
{
	masa.rezerva();
}
string Rezervare::getNumeClient() const
{
	return numeClient;
}
int Rezervare::getNumarMasa() const
{
	return masa.getNumar();
}