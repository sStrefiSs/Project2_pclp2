#pragma once
#ifndef MASA_H
#define MASA_H
class Masa
{
private:
	int numar;
	bool rezervata;
public:
	Masa(int nr);
	void rezerva();
	bool esteRezervata() const;
	int getNumar() const;
};
#endif // MASA_H
