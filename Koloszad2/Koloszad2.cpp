#include <iostream>
#include <string>
#include "Header.h"

using namespace std;
pair<int, int> zamowienie(Mebel* tab[], int size) {
	int koszt = 0;
	int liczba = 0;
	for (int i = 0; i < size; i++) {
		if (i < 5) {
			koszt += tab[i]->oblicz_koszt(tab[i]->getWaga());
			liczba += 4;
		}
		else if (i >= 5 && i < 15) {
			koszt += tab[i]->oblicz_koszt(tab[i]->getWaga());
			liczba += 6;
		}
	}
	
	return make_pair(koszt, liczba);
}
int main() {
	Mebel** meble = new Mebel * [15];
	for (int i = 0; i < 5; i++)
		meble[i] = new Stol(2 + i, 4);
	for (int i = 5; i < 15; i++)
		meble[i] = new Lawka(4 + i, 4);

	pair<int, int> p = zamowienie(meble, 15);
	cout << p.first << endl;
	cout << p.second << endl;
	return 0;
};
