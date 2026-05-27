#include "menu.hpp"
#include "converter.hpp"
#include <iostream>
#include <cstdlib>
#include <thread>

using std:: cout;
using std:: cin;
using std:: endl;

void sleep()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void interface:: menu_Inicial()
{
    bool ativo = true;
    while(ativo){
    std::system("clear");
    cout << "============================================" << endl;
    cout << "========= Conversor de medidas =============" << endl;
    cout << "============================================" << endl;
    int opc; 
    cout << "Digite 1 - conversor de moedas" << endl;
    cout << "Digite 2 - conversor de temperaturas" << endl;
    cout << "Digite 3 - Sair do programa" << endl;
    cin >> opc;
    switch (opc)
    {
    case 1 :
        menu_Moedas();
        break;
    case 2 :
        std::system("clear");
        menu_Temperatura();
        break;

    case 3 : 
        ativo = false;
        break;
    
    default:
        break;
    }
    }
}

void interface:: menu_Moedas()
{
    std::system("clear");
    cout << "================================================" << endl;
    cout << "=================Conversor de moedas ===========" << endl;
    cout << "================================================" << endl;

    int opc;
    cout << "Qual moeda vc deseja transformar ?" << endl;
    cout << "Digite 1 - Real" << endl;
    cout << "Digite 2 - Dolár" << endl;
    cout << "Digite 3 - Euro" << endl;
    cout << "Digite 4 - Voltar ao inicio" << endl;
    cin >> opc;

    switch (opc)
    {
    case 1 :
    {
        cout << endl << endl << "Em qual moeda ? " << endl << "Digite 1 - Dolar" << endl << "Digite 2 - Euro" << endl << "Digite 3 - Volta ao inicio" << endl;
        int opc2;
        cin >> opc2;
        switch (opc2)
        {
        case 1 : 
        {
            double valor;
            cout << "Qual valor : ";
            cin >> valor;
            cout << "O valor convertido sera de : " << Conversor_moedas::real_Pra_Dolar(valor) << endl;
            sleep();
            break;
        }
        case 2 : 
        {
            double valor;
            cout << "Qual valor : ";
            cin >> valor;
            cout << "O valor convertido sera de : " << Conversor_moedas::real_Pra_Euro(valor) << endl;
            sleep();
            break;
        }
        case 3 :
            return;
            break;
        default:
            break;
        }
        break;
    }
    case 2 : 
    {
        cout << endl << endl << "Em qual moeda ? " << endl << "Digite 1 - Real" << endl << "Digite 2 - Euro" << endl << "Digite 3 - Volta ao inicio" << endl;
        int opc2;
        cin >> opc2;
        switch (opc2)
        {
        case 1 : 
        {
            double valor;
            cout << "Qual valor : ";
            cin >> valor;
            cout << "O valor convertido sera de : " << Conversor_moedas::dolar_Pra_Real(valor) << endl;
            sleep();
            break;
        }
        case 2 : 
        {
            double valor;
            cout << "Qual valor : ";
            cin >> valor;
            cout << "O valor convertido sera de : " << Conversor_moedas::dolar_Pra_Euro(valor) << endl;
            sleep();
            break;
        }
        case 3 :
            return;
        default:
            break;
        }
        break;
    }
    case 3 : 
    {
        cout << endl << endl << "Em qual moeda ? " << endl << "Digite 1 - Dolar" << endl << "Digite 2 - Real" << endl << "Digite 3 - Volta ao inicio" << endl;
        int opc2;
        cin >> opc2;
        switch (opc2)
        {
        case 1 : 
        {
            double valor;
            cout << "Qual valor : ";
            cin >> valor;
            cout << "O valor convertido sera de : " << Conversor_moedas::euro_Pra_Dolar(valor) << endl;
            sleep();
            break;
        }
        case 2 : 
        {
            double valor;
            cout << "Qual valor : ";
            cin >> valor;
            cout << "O valor convertido sera de : " << Conversor_moedas::euro_Pra_Real(valor) << endl;
            sleep();
            break;
        }
        case 3 :
            return;
        default:
            break;
        }
        break;
    }
    case 4 :
        return;
    default:
        break;
    }
}

void interface::menu_Temperatura()
{
    std::system("clear");
    cout << "================================================" << endl;
    cout << "=========== Conversor de temperatura ===========" << endl;
    cout << "================================================" << endl;

    int opc;
    cout << "Qual medida vc deseja transformar ?" << endl;
    cout << "Digite 1 - Celsius" << endl;
    cout << "Digite 2 - Fahrenheit" << endl;
    cout << "Digite 3 - Kelvin" << endl;
    cout << "Digite 4 - Voltar pra pagina anterior" << endl;
    cin >> opc;

    switch (opc)
    {
    case 1 :
    {
        cout << endl << endl << "Em qual medida ? " << endl << "Digite 1 - Fahrenheit" << endl << "Digite 2 - Kelvin" << endl << "Digite 3 - Voltar ao inicio" << endl;
        int opc2;
        cin >> opc2;
        switch (opc2)
        {
        case 1 : 
        {
            double temperatura;
            cout << "Qual temperatura : ";
            cin >> temperatura;
            cout << "A temperatura convertida sera de : " << Conversor_temperatura::celsius_Pra_Fahrenheit(temperatura) << endl;
            sleep();
            break;
        }
        case 2 : 
        {
            double temperatura;
            cout << "Qual temperatura : ";
            cin >> temperatura;
            cout << "A temperatura convertida sera de : " << Conversor_temperatura::celsius_Pra_Kelvin(temperatura) << endl;
            sleep();
            break;
        }
        case 3 :
            return;
        default:
            break;
        }
        break;
    }
    case 2 : 
    {
        cout << endl << endl << "Em qual medida ? " << endl << "Digite 1 - Celsius" << endl << "Digite 2 - Kelvin" << endl << "Digite 3 - Voltar ao inicio" << endl;
        int opc2;
        cin >> opc2;
        switch (opc2)
        {
        case 1 : 
        {
            double temperatura;
            cout << "Qual temperatura : ";
            cin >> temperatura;
            cout << "A temperatura convertida sera de : " << Conversor_temperatura::fahrenheit_Pra_Celsius(temperatura) << endl;
            sleep();
            break;
        }
        case 2 : 
        {
            double temperatura;
            cout << "Qual temperatura : ";
            cin >> temperatura;
            cout << "A temperatura convertida sera de : " << Conversor_temperatura::fahrenheit_Pra_Kelvin(temperatura) << endl;
            sleep();
            break;
        }
        case 3 :
            return;
        default:
            break;
        }
        break;
    }
    case 3 : 
    {
        cout << endl << endl << "Em qual medida ? " << endl << "Digite 1 - Fahrenheit" << endl << "Digite 2 - Celsius" << endl << "Digite 3 - Voltar ao inicio" << endl;
        int opc2;
        cin >> opc2;
        switch (opc2)
        {
        case 1 : 
        {
            double temperatura;
            cout << "Qual temperatura : ";
            cin >> temperatura;
            cout << "A temperatura convertida sera de : " << Conversor_temperatura::kelvin_Pra_Fahrenheit(temperatura) << endl;
            sleep();
            break;
        }
        case 2 : 
        {
            double temperatura;
            cout << "Qual temperatura : ";
            cin >> temperatura;
            cout << "A temperatura convertida sera de : " << Conversor_temperatura::kelvin_Pra_Celsius(temperatura) << endl;
            sleep();
            break;
        }
        case 3 :
            return;
        default:
            break;
        }
        break;
    }
    case 4 :
        return;
    default:
        break;
    }
}

