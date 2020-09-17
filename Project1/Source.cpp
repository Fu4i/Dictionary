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
		cout << "Введите цифру соответствующуу выбранному варианту." << endl;
		cout << "1. Добавление в слова в словарь." << endl;
		cout << "2. Поиск по ключу." << endl;
		cout << "3. Удаление по ключу." << endl;
		cout << "4. Редактирование по ключу." << endl;
		cout << "5. Запись в файл." << endl;
		cout << "6. Считывание с файла." << endl;
		cout << "7. Выход из программы." << endl;
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
			cout << "Введите слово." << endl;
			cin >> value;
			dict->input(value);
			system("pause");
			system("cls");
			cout << "Внесение произведено успешно." << endl;
			break;
		}
		case 2:
		{
			string key;
			cout << "Введите ключ." << endl;
			cin >> key;
			dict->output(key);
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			string key;
			cout << "Введите ключ для удаления." << endl;
			cin >> key;
			dict->del(key);
			system("pause");
			system("cls");
			break;
		}
		case 4:
		{
			string key;
			cout << "Введите ключ для редактирования." << endl;
			cin >> key;
			dict->del(key);
			cout << "Введите слово на замену старого." << endl;
			cin >> key;
			dict->input(key);
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			dict->fileout();
			cout << "Запись в файл успешна." << endl << endl;
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
			cout << "Введенно неверное число, попробуйте еще раз." << endl << endl;
			break;
		}
	} while (exit);
	system("pause");
	return 0;
}


