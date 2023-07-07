#ifndef CAPACITOR_H
#define CAPACITOR_H

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
using std::strcmp;

#ifdef _WIN32
	void limparTela() {
        system("cls");
    }
#else
	void limparTela() {
        system("clear");
    }
#endif

struct Capacitor
{
    double capacitancia;
    char unidade[3];
};

Capacitor Serie(int);
Capacitor Paralelo(int);
Capacitor Mista(int, int);
double ConverterUnidade(const Capacitor&);

#endif // CAPACITOR_H