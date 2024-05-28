#include <string>
#include "Produs.h"
using namespace std;
Produs::Produs(string n , double p):nume(n), pret(p) {}
string Produs::getNume() 
{
	return nume;
}
double Produs::getPret() 
{
	return pret;
}