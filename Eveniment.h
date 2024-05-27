#pragma once
#ifndef EVENIMENT_H
#define EVENIMENT_H
#include <string>
using namespace std;
class Eveniment
{
private:
	string descriere;
	string data;
public:
	Eveniment(const string& desc, const string& d);
	string getDescriere() const;
	string getData() const;
};
#endif // EVENIMENT_H
