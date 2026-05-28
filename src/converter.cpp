#include "converter.hpp"

double Conversor_moedas::real_Pra_Dolar(double valor) { return valor * 0.20;}

double Conversor_moedas::dolar_Pra_Real(double valor){ return valor * 5.08;}

double Conversor_moedas::real_Pra_Euro(double valor){ return valor * 0.17;}

double Conversor_moedas::euro_Pra_Real(double valor){ return valor * 5.92;}

double Conversor_moedas::dolar_Pra_Euro(double valor){ return valor * 0.86;}

double Conversor_moedas::euro_Pra_Dolar(double valor){ return valor * 1.16;}

double Conversor_temperatura::celsius_Pra_Fahrenheit(double temp) { return 1.8 * temp + 32; }

double Conversor_temperatura::celsius_Pra_Kelvin(double temp) { return temp + 273.15; }

double Conversor_temperatura::fahrenheit_Pra_Celsius(double temp){ return (temp - 32)/ 1.8; }

double Conversor_temperatura::fahrenheit_Pra_Kelvin(double temp){ return (temp - 32) / 1.8 + 273.15; }

double Conversor_temperatura::kelvin_Pra_Celsius(double temp){ return temp - 273.15; }

double Conversor_temperatura::kelvin_Pra_Fahrenheit(double temp){ return 1.8 * (temp - 273.15) + 32; }