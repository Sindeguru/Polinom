#pragma once
#ifndef _MONOM_H
#define _MONOM_H
#include <iostream>

using namespace std;

class TMonom;
typedef TMonom* pMonom;
class TMonom
{
protected:
	double coef;
	int deg;
	pMonom pnext;

public:
	TMonom(double _coef = 1, int _deg = 0, pMonom _pnext = NULL);
	
	double getcoef() const;
	int getdeg() const;
	
	pMonom getpnext() const;

	void setcoef(double co);
	void setdeg(int de);
	void setpnext(pMonom pn);
};

TMonom::TMonom(double _coef, int _deg, pMonom _pnext)
{
	coef = _coef;
	deg = _deg;
	pnext = _pnext;
}

double TMonom::getcoef() const
{
	return coef;
}

int TMonom::getdeg() const
{
	return deg;
}

pMonom TMonom::getpnext() const
{
	return pnext;
}

void TMonom::setcoef(double c)
{
	coef = c;
}

void TMonom::setdeg(int d)
{
	deg = d;
}

void TMonom::setpnext(pMonom pn)
{
	pnext = pn;
}
#endif