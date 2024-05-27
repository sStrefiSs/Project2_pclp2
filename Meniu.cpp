#include <iostream>
#include "Produs.cpp"
#include <vector>
using namespace std;
class Meniu
{
private:
	vector<Produs> produse;
public:
	void adaugaProdus(const Produs& produs)
	{
		produse.push_back(produs);
	}
	void afiseazaMeniu() const
	{
		for (const auto& produs : produse)
		{
			cout << " Produs: " << produs.getNume() << ", Pret: " << produs.getPret() << " ";
		}
	}
};