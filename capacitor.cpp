#include "capacitor.h"

// Função que calcula a capacitância total na associação em série
Capacitor Serie(int qtd)
{
    Capacitor capacitores[qtd];
    Capacitor total{0, "F"};

    for (int i = 0; i < qtd; ++i)
    {
        cout << endl;
        cout << 'C' << i + 1 << ": ";
        cin >> capacitores[i].capacitancia;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Digite novamente o valor: ";
            cin >> capacitores[i].capacitancia;
        }

        cout << "Unidade (F, mF, uF, pF, nF): ";
        cin >> capacitores[i].unidade;

        while (strcmp(capacitores[i].unidade, "F") != 0 &&
               strcmp(capacitores[i].unidade, "mF") != 0 &&
               strcmp(capacitores[i].unidade, "uF") != 0 &&
               strcmp(capacitores[i].unidade, "pF") != 0 &&
               strcmp(capacitores[i].unidade, "nF") != 0)
        {
            cout << "Unidade inválida. Digite novamente: ";
            cin >> capacitores[i].unidade;
        }

        capacitores[i].capacitancia = ConverterUnidade(capacitores[i]);
        cout << endl;
    }

    for (int i = 0; i < qtd; ++i)
        total.capacitancia += 1 / capacitores[i].capacitancia;

    total.capacitancia = 1 / total.capacitancia;

    return total;
}

// Função que calcula a capacitância total na associação em paralelo
Capacitor Paralelo(int qtd)
{
    Capacitor capacitores[qtd];
    Capacitor total{0, "F"};

    for (int i = 0; i < qtd; ++i)
    {
        cout << endl;
        cout << 'C' << i + 1 << ": ";
        cin >> capacitores[i].capacitancia;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Digite novamente o valor: ";
            cin >> capacitores[i].capacitancia;
        }

        cout << "Unidade (F, mF, uF, pF, nF): ";
        cin >> capacitores[i].unidade;

        while (strcmp(capacitores[i].unidade, "F") != 0 &&
               strcmp(capacitores[i].unidade, "mF") != 0 &&
               strcmp(capacitores[i].unidade, "uF") != 0 &&
               strcmp(capacitores[i].unidade, "pF") != 0 &&
               strcmp(capacitores[i].unidade, "nF") != 0)
        {
            cout << "Unidade inválida. Digite novamente: ";
            cin >> capacitores[i].unidade;
        }

        capacitores[i].capacitancia = ConverterUnidade(capacitores[i]);
        cout << endl;
    }

    for (int i = 0; i < qtd; ++i)
        total.capacitancia += capacitores[i].capacitancia;

    return total;
}

// Função que calcula a capacitância total na associação mista
Capacitor Mista(int qtd_serie, int qtd_paralelo)
{
    Capacitor total_serie = Serie(qtd_serie);
    Capacitor total_paralelo = Paralelo(qtd_paralelo);
    Capacitor total{0, "F"};

    total.capacitancia = total_serie.capacitancia + total_paralelo.capacitancia;

    return total;
}

// Função auxiliar para converter a unidade de capacitância
double ConverterUnidade(const Capacitor& c)
{
    if (strcmp(c.unidade, "F") == 0)
        return c.capacitancia;
    else if (strcmp(c.unidade, "mF") == 0)
        return c.capacitancia * 1e-3;
    else if (strcmp(c.unidade, "uF") == 0)
        return c.capacitancia * 1e-6;
    else if (strcmp(c.unidade, "nF") == 0)
        return c.capacitancia * 1e-9;
    else if (strcmp(c.unidade, "pF") == 0)
        return c.capacitancia * 1e-12;
    else
        return c.capacitancia;
}