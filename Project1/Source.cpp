#include <iostream>
#include <string>
#include <fstream>
#include "Dictionary.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	Dictionary * dict = new Dictionary;
	bool exit = true;
	do {
		int choose;
		cout << "������� ����� ��������������� ���������� ��������." << endl;
		cout << "1. ���������� � ����� � �������." << endl;
		cout << "2. ����� �� �����." << endl;
		cout << "3. �������� �� �����." << endl;
		cout << "4. �������������� �� �����." << endl;
		cout << "5. ������ � ����." << endl;
		cout << "6. ���������� � �����." << endl;
		cout << "7. ����� �� ���������." << endl;
		cin >> choose;
		while (!cin) {
			cin.clear();
			while (cin.get() != '\n');
			cin >> choose;
		}

		switch (choose)
		{
		case 1:
		{
			string value;
			cout << "������� �����." << endl;
			cin >> value;
			dict->input(value);
			system("pause");
			system("cls");
			cout << "�������� ����������� �������." << endl;
			break;
		}
		case 2:
		{
			string key;
			cout << "������� ����." << endl;
			cin >> key;
			dict->output(key);
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			string key;
			cout << "������� ���� ��� ��������." << endl;
			cin >> key;
			dict->del(key);
			system("pause");
			system("cls");
			break;
		}
		case 4:
		{
			string key;
			cout << "������� ���� ��� ��������������." << endl;
			cin >> key;
			dict->del(key);
			cout << "������� ����� �� ������ �������." << endl;
			cin >> key;
			dict->input(key);
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			dict->fileout();
			cout << "������ � ���� �������." << endl << endl;
			system("pause");
			system("cls");
			break;
		}
		case 6:
		{
			dict->filein();
			system("pause");
			system("cls");
			break;
		}
		case 7:
		{
			exit = false;
			break;
		}
		default: 
			system("cls");
			cout << "�������� �������� �����, ���������� ��� ���." << endl << endl;
			break;
		}
	} while (exit);
	system("pause");
	return 0;
}


