/*
AUTOR:    Octavio Corral Tovar
CURSO:    Lenguajes y Automatas 1
PROGRAMA: Autómata finito determinista
FECHA:    02/05/2022
*/

using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <map>
#include "automata.h"


int main() {
	string w;
	                                                                                       
	cout << "cadena: ";
	cin >> w;

	AutomataFD a;

	if (a.test(w)) cout << "accepted" << endl;
	else cout << "rejected\n";

	return 0;
}