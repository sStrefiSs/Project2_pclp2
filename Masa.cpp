#include <iostream>
using namespace std;
class Masa
{
private:
	int numar;
	bool rezervata;
public:
	Masa(int nr) :numar(nr), rezervata(false) {}
	void rezervata()
	{
		rezervata = true;
	}
	bool esteRezervata() const
	{
		return rezervata;
	}
	int getNumar() const
	{
		return numar;
	}
};