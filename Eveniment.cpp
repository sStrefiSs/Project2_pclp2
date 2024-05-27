#include "Eveniment.h"
using namespace std;
Eveniment::Eveniment(const string& desc, const string& d) :descriere(desc), data(d) {}
string Eveniment::getDescriere() const
{
	return descriere;
}
string Eveniment::getData() const
{
	return data;
}