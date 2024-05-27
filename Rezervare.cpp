#include <iostream>
#include "Masa.cpp"
#include <string>
using namespace std;
class Rezervare
{
private:
	string numeClient;
	Masa masa;
public:
	Rezervare(string nume, Masa m) : numeClient(nume), masa(m) { masa.rezerva(); }
	string getNumeClient() const
	{
		return numeClient;
	}
	int getNumarMasa() const
	{
		return masa.getNumar();
	}
};