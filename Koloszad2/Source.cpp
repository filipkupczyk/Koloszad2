#include "Header.h"
#include <iostream>

using namespace std;

Mebel::Mebel(int waga1, int liczba1) {
	waga = waga1;
	liczba = liczba1;
}
Mebel::Mebel() {}
Mebel::~Mebel(){}
void Mebel::show() {
	cout << "liczba nog: " << liczba << endl << "waga: " << waga << endl;
}
int Mebel::getWaga() {
	return waga;
}

Stol::Stol() {}
Stol::~Stol() {}
Stol::Stol(int waga1, int liczba1) :Mebel(waga1, liczba1) {}
int Stol::oblicz_koszt(int waga1) {
	int koszt = 0;
	koszt = 50 + waga1 * 2;
	return koszt;
}

Lawka::Lawka() {}
Lawka::~Lawka() {}
Lawka::Lawka(int waga1, int liczba1) : Mebel(waga1, liczba1){}
int Lawka::oblicz_koszt(int waga1) {
	int koszt = 0;
	koszt = 20 + waga1 * 4;
	return koszt;
}