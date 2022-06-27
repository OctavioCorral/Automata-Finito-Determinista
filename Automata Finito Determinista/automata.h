/*
AUTOR:    Octavio Corral Tovar
CURSO:    Lenguajes y Automatas 1
PROGRAMA: Autómata finito determinista
FECHA:    02/05/2022
*/

#ifndef automata_hpp
#define automata_hpp

#include <iostream>
#include <string>
#include <map>
#include <set>

//DECLARAMOS
typedef map<char, unsigned> event;
typedef map<unsigned, event> transition;
typedef set<unsigned> conjfinal;

class AutomataFD {

private: //atributos
	unsigned state;
	transition delta; // funcion de transiciónes 
	conjfinal cfinal; // conjunto de estados finales 
	set<unsigned> init; // estado inicial 
	

public:
	AutomataFD(); //constructor


	//metodos
	bool test(string);

};



#endif /*Automatafd_hpp*/