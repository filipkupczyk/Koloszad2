#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

class Mebel {
private:
	int waga;
	int liczba;
public:
	Mebel(int waga1, int liczba1);
	Mebel();
	int getWaga();
	virtual int oblicz_koszt(int waga1) = 0;
	virtual ~Mebel();
	virtual void show();
};
class Stol : public Mebel {
	public: 
		Stol(int waga1, int liczba1);
		Stol();
		~Stol();
		virtual int oblicz_koszt(int waga1) override;
};
class Lawka : public Mebel {
	public:
		Lawka(int waga1, int liczba1);
		Lawka();
		~Lawka();
		virtual int oblicz_koszt(int waga1) override;
};
#endif
