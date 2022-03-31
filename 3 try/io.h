#ifndef IOBOOK_H
#define IOBOOK_H

#include "h.h"

istream& operator>>(istream& in, BOOK& Book);
ostream& operator<<(ostream& out, BOOK Book);
istream& operator>>(istream& in, GROUP& Group);
ostream& operator<<(ostream& out, GROUP Group);
#endif