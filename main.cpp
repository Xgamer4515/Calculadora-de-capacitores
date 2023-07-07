#include "capacitor.cpp"

int main()
{
    Capacitor resul;
    char opcao, resp = 'S';
    int qtd, qtd_serie, qtd_paralelo;

    while (resp != 'N' && resp != 'n')
    {
        cout << "==========================\n";
        cout << "Calculadora de capacitores\n";
        cout << "==========================\n\n";

        cout << "1) Série\n";
        cout << "2) Paralelo\n";
        cout << "3) Mista\n\n";
        cout << "Sua opção:[_]\b\b";
        cin >> opcao;

        while (opcao != '1' && opcao != '2' && opcao != '3')
        {
            cout << "Digite novamente sua opção: ";
            cin >> opcao;
        }

        cout << endl;

        switch (opcao)
        {
            case '1':
            {
                cout << "Em série\n\n";
                cout << "Digite a quantidade de capacitores: ";
                cin >> qtd;

                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "Digite novamente a quantidade de capacitores: ";
                    cin >> qtd;
                }

                resul = Serie(qtd);

                cout << "A capacitância total dos capacitores na associação em série é igual a ";
                cout << resul.capacitancia << ' ' << resul.unidade;
                cout << endl;
                break;
            }
            case '2':
            {
                cout << "Em Paralelo\n\n";
                cout << "Digite a quantidade de capacitores: ";
                cin >> qtd;

                while (cin.fail())
                {
                    cin.clear();
                    cin.ignore(100, '\n');
                    cout << "Digite novamente a quantidade de capacitores: ";
                    cin >> qtd;
                }

                resul = Paralelo(qtd);

                cout << "A capacitância total dos capacitores na associação em paralelo é igual a ";
                cout << resul.capacitancia << ' ' << resul.unidade;
                cout << endl;
                break;
            }
            case '3':
            {
                cout << "Digite a quantidade de capacitores em série: ";
                cin >> qtd_serie;

                cout << "Digite a quantidade de capacitores em paralelo: ";
                cin >> qtd_paralelo;

                resul = Mista(qtd_serie, qtd_paralelo);

                cout << "A capacitância total dos capacitores na associação mista é igual a ";
                cout << resul.capacitancia << ' ' << resul.unidade;
                cout << endl;
                break;
            }
        }

        cout << "Deseja continuar (S/N)? ";
        cin >> resp;

        while (resp != 'S' && resp != 's' && resp != 'N' && resp != 'n')
        {
            cout << "Deseja continuar? ";
            cin >> resp;
        }
        
        limparTela();
    }
}