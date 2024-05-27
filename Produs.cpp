#include <string>
#include "Produs.h"
using namespace std;
Produs::Produs(string &n, double p):nume(n), pret(p) {}
string Produs::getNume() const
{
	return nume;
}
double Produs::getPret() const
{
	return pret;
}