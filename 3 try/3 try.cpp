#include <windows.h>

#include <iostream>
#include <fstream>
#include "h.h"
#include "io.h"

int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(1251);
	char FileName[100];
	cout << "Из какого файла вводить данные?" << endl;
	cin.getline(FileName, sizeof(FileName));
	GROUP Group;
	ifstream fin(FileName);
	if (fin.is_open()) {
		fin >> Group;
		fin.close();
		Group.sort();
		cout << Group;
		cout << "В какой файл выводить данные?" << endl;
		cin.getline(FileName, sizeof(FileName));
		ofstream fout(FileName);
		if (fout.is_open()) {
			fout << Group;
			cout << "Введите автора" << endl;
			string buffer;
			getline(cin, buffer);
			/*Group.find(Group,buffer);*/
			fout << Group;
			fout.close();
			cout << "Данные выведены в файл " << FileName << endl;
		}
		else {
			cout << "Ошибка записи в файл " << FileName << endl;
		}
	}
	else {
		cout << "Файл " << FileName << " не найден" << endl;
	}
	system("pause");
	return 0;
}