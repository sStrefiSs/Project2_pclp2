#include <iostream>
#include <string>
using namespace std;
class Eveniment
{
private:
	string descriere;
	string data;
public:
	Eveniment(string desc, string d): descriere(desc), data(d) {}
	string getDescriere() const
	{
		return descriere;

	}

	string getDat() const
	{
		return data;
	}
};