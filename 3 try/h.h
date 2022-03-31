#ifndef BOOKS_H
#define BOOKS_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;
class BOOK {
	string Author;
	string Name;
	int Year;
	string Cost;
	int Number;
	friend ostream& operator<<(ostream& out, BOOK Book);
	friend istream& operator>>(istream& in, BOOK& Book);
	friend bool operator<(BOOK book1, BOOK book2);
	friend class GROUP;
};

class GROUP {
	string Name;
	vector<BOOK> Books;
public:
	void sort();
	//void find(GROUP& Group, string x);
	friend ostream& operator<<(ostream& out, GROUP Group);
	friend istream& operator>>(istream& in, GROUP& Group);
};

#endif