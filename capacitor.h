#ifndef CAPACITOR_H
#define CAPACITOR_H

#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
using std::strcmp;

#ifdef _WIN32
#include <Windows.h>

inline void ConfigurarAcentuacaoConsole() {
    system("chcp 65001 > nul");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
}
#endif

inline void LimparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

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
