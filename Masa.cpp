#include "Masa.h"
using namespace std;
Masa::Masa(int nr) :numar(nr), rezervata(false) {}
void Masa::rezerva()
{
	rezervata = true;
}
bool Masa::esteRezervata() const
{
	return rezervata;
}
int Masa::getNumar() const
{
	return numar;
}
