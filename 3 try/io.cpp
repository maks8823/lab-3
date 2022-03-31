#include <iterator>
#include "io.h"

istream& operator>>(istream& in, BOOK& Book) {
	in >> Book.Author;
	in >> Book.Name;
	in >> Book.Year;
	in >> Book.Cost;
	in >> Book.Number;
	return in;
}

ostream& operator<<(ostream& out, BOOK Book) {
	out << Book.Author << " "
		<< Book.Name << " "
		<< Book.Year << " "
		<< Book.Cost << " "
		<< Book.Number;
	return out;
}

istream& operator>>(istream& in, GROUP& Group) {
	in >> Group.Name;
	Group.Books.clear();
	istream_iterator<BOOK> in_iter(in);
	istream_iterator<BOOK> in_end;
	while (in_iter != in_end) {
		BOOK boo = *in_iter;
		Group.Books.push_back(boo);
		in_iter++;
	}
	return in;
}

ostream& operator<<(ostream& out, GROUP Group) {
	out << "Список Книг: " << Group.Name << endl;
	vector<BOOK>::iterator iter;
	iter = Group.Books.begin();
	while (iter != Group.Books.end()) {
		out << *iter << endl;
		iter++;
	}
	return out;
}