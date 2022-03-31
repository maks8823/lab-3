#include <algorithm>
#include "h.h"
#include <string>
bool operator<(BOOK book1, BOOK book2) {
	bool result = book1.Year > book2.Year;
	return result;
}
void GROUP::sort() {
	std::sort(this->Books.begin(), this->Books.end());
}
//void GROUP::find(GROUP& Group,string x) {
//	vector<BOOK>::iterator it = Books.begin();
//	Allocator get_allocator() const;
//	while (it != Books.end()) {
//		if (Books[it]=x) {
//			Books.erase(it);
//		}
//	}
	/*while (i != Group.Books.end()) {
		Group.Books.operator[i].Author;

		
		i++;
	}
}	*/
