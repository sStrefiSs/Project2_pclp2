#pragma once
#ifndef PRODUS_H
#define PRODUS_H
#include <iostream>
#include <string>
using namespace std;
class Produs
{
private:
	string nume;
	double pret;
public:
	Produs(string n, double p);
	string	getNume()const  ;
	double getPret() const;
};
#endif // PRODUS_H
