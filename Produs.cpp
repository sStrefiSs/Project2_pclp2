#include <iostream>
#include <string>
using namespace std;
class Produs
{
private:
	string nume;
	double pret;
public:
	Produs(string n, double p) : nume(n), pret(p) {}
	string getNume() const
	{
		return nume;
	}
	double getPret() const
	{
		return pret;
	}
};