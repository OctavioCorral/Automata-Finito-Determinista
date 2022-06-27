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


//DEFINIMOS

//Metodos
 AutomataFD::AutomataFD() { //Contructor (Inicializacion)
	 state = 0;

 /*Estados Finales del automata*/
	cfinal.insert(1);
	cfinal.insert(2);
	cfinal.insert(4);
	cfinal.insert(5);
	cfinal.insert(7);


	/*Estados del Automata*/
	delta[0]['1'] = 1; //[0] = q0  --  ['1'] = con un '1'  --  1 = q1 |  Entonces: q0 con un '1' te lleva a q1	
	delta[0]['2'] = 1;
	delta[0]['3'] = 1;
	delta[0]['4'] = 1;
	delta[0]['5'] = 1;
	delta[0]['6'] = 1;
	delta[0]['7'] = 1;
	delta[0]['8'] = 1;
	delta[0]['9'] = 1;

	delta[0]['0'] = 2;

	delta[1]['0'] = 1;
	delta[1]['1'] = 1;
	delta[1]['2'] = 1;
	delta[1]['3'] = 1;
	delta[1]['4'] = 1;
	delta[1]['5'] = 1;
	delta[1]['6'] = 1;
	delta[1]['7'] = 1;
	delta[1]['8'] = 1;
	delta[1]['9'] = 1;

	delta[1]['.'] = 3;

	delta[2]['.'] = 3;

	delta[3]['0'] = 4;
	delta[3]['1'] = 4;
	delta[3]['2'] = 4;
	delta[3]['3'] = 4;
	delta[3]['4'] = 4;
	delta[3]['5'] = 4;
	delta[3]['6'] = 4;
	delta[3]['7'] = 4;
	delta[3]['8'] = 4;
	delta[3]['9'] = 4;

	delta[4]['e'] = 5;
	delta[4]['E'] = 5;

	delta[4]['0'] = 4;
	delta[4]['1'] = 4;
	delta[4]['2'] = 4;
	delta[4]['3'] = 4;
	delta[4]['4'] = 4;
	delta[4]['5'] = 4;
	delta[4]['6'] = 4;
	delta[4]['7'] = 4;
	delta[4]['8'] = 4;
	delta[4]['9'] = 4;

	delta[5]['0'] = 5;
	delta[5]['1'] = 5;
	delta[5]['2'] = 5;
	delta[5]['3'] = 5;
	delta[5]['4'] = 5;
	delta[5]['5'] = 5;
	delta[5]['6'] = 5;
	delta[5]['7'] = 5;
	delta[5]['8'] = 5;
	delta[5]['9'] = 5;

	delta[5]['-'] = 6;
	delta[5]['+'] = 6;

	delta[6]['0'] = 7;
	delta[6]['1'] = 7;
	delta[6]['2'] = 7;
	delta[6]['3'] = 7;
	delta[6]['4'] = 7;
	delta[6]['5'] = 7;
	delta[6]['6'] = 7;
	delta[6]['7'] = 7;
	delta[6]['8'] = 7;
	delta[6]['9'] = 7;

	delta[7]['0'] = 7;
	delta[7]['1'] = 7;
	delta[7]['2'] = 7;
	delta[7]['3'] = 7;
	delta[7]['4'] = 7;
	delta[7]['5'] = 7;
	delta[7]['6'] = 7;
	delta[7]['7'] = 7;
	delta[7]['8'] = 7;
	delta[7]['9'] = 7;
	
}


bool AutomataFD::test(string w) {

	map<char, unsigned>::iterator itr;

	for (int i = 0; i < w.length(); i++) {
		itr = delta[state].find(w[i]);

		if (itr != delta[state].end()) {
			state = delta[state][w[i]];
			
		}
		else {
			return false;
			
		}
	}	

	if(cfinal.find(state) !=cfinal.end()){ 
		return true;
	}
	else {
		return false;
	}
}
