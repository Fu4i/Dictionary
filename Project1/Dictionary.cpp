#include "Dictionary.h"
#include <sstream>

void Dictionary::input(string  value)
{
	Map * new_map = new Map(value);
	string hash = md5(value);
	cout << "Ключ для введенного слова:";
	cout << hash << endl;
	bool exit = false;
	int x = hash.at(0);
	switch (x)
	{
	case 48:
	{
		Dics[0]->Buck.push_back(new_map);
		break;
	}
	case 49:
	{

		Dics[1]->Buck.push_back(new_map);
		break;
	}
	case 50:
	{

		Dics[2]->Buck.push_back(new_map);
		break;
	}
	case(51):
	{

		Dics[3]->Buck.push_back(new_map);
		break;
	}
	case 52:
	{

		Dics[4]->Buck.push_back(new_map);
		break;
	}
	case 53:
	{

		Dics[5]->Buck.push_back(new_map);
		break;
	}
	case 54:
	{

		Dics[6]->Buck.push_back(new_map);
		break;
	}
	case 55:
	{

		Dics[7]->Buck.push_back(new_map);
		break;
	}
	case 56:
	{

		Dics[8]->Buck.push_back(new_map);
		break;
	}
	case 57:
	{

		Dics[9]->Buck.push_back(new_map);
		break;
	}
	case 97:
	{

		Dics[10]->Buck.push_back(new_map);
		break;
	}
	case 98:
	{

		Dics[11]->Buck.push_back(new_map);
		break;
	}
	case 99:
	{

		Dics[12]->Buck.push_back(new_map);
		break;
	}
	case 100:
	{

		Dics[13]->Buck.push_back(new_map);
		break;
	}
	case 101:
	{

		Dics[14]->Buck.push_back(new_map);
		break;
	}
	case 102:
	{

		Dics[15]->Buck.push_back(new_map);
		break;
	}
	default:
		break;
	}
}
void Dictionary::output(string key)
{
	bool exit = false;
	int x = key.at(0);
	switch (x)
	{
	case 48:
	{
		for (int i = 0; i < Dics[0]->Buck.size(); i++)
		{
			if (Dics[0]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[0]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 49:
	{
		for (int i = 0; i < Dics[1]->Buck.size(); i++)
		{
			if (Dics[1]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[1]->Buck[i]->getValue() << endl;

		}
		break;
	}
	case 50:
	{
		for (int i = 0; i < Dics[2]->Buck.size(); i++)
		{
			if (Dics[2]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[2]->Buck[i]->getValue() << endl;

		}
		break;
	}
	case 51:
	{
		for (int i = 0; i < Dics[3]->Buck.size(); i++)
		{
			if (Dics[3]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[3]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 52:
	{
		for (int i = 0; i < Dics[4]->Buck.size(); i++)
		{
			if (Dics[4]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[4]->Buck[i]->getValue() << endl;

		}
		break;
	}
	case 53:
	{
		for (int i = 0; i < Dics[5]->Buck.size(); i++)
		{
			if (Dics[5]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[5]->Buck[i]->getValue() << endl;

		}
		break;
	}
	case 54:
	{
		for (int i = 0; i < Dics[6]->Buck.size(); i++)
		{
			if (Dics[6]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[6]->Buck[i]->getValue() << endl;

		}
		break;
	}
	case 55:
	{
		for (int i = 0; i < Dics[7]->Buck.size(); i++)
		{
			if (Dics[7]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[7]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 56:
	{
		for (int i = 0; i < Dics[8]->Buck.size(); i++)
		{
			if (Dics[8]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[8]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 57:
	{
		for (int i = 0; i < Dics[9]->Buck.size(); i++)
		{
			if (Dics[9]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[9]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 97:
	{
		for (int i = 0; i < Dics[10]->Buck.size(); i++)
		{
			if (Dics[10]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[10]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 98:
	{
		for (int i = 0; i < Dics[11]->Buck.size(); i++)
		{
			if (Dics[11]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[11]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 99:
	{
		for (int i = 0; i < Dics[12]->Buck.size(); i++)
		{
			if (Dics[12]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[12]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 100:
	{
		for (int i = 0; i < Dics[13]->Buck.size(); i++)
		{
			if (Dics[13]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[13]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 101:
	{
		for (int i = 0; i < Dics[14]->Buck.size(); i++)
		{
			if (Dics[14]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:" << Dics[14]->Buck[i]->getValue() << endl;
		}
		break;
	}
	case 102:
	{
		for (int i = 0; i < Dics[15]->Buck.size(); i++)
		{
			if (Dics[15]->Buck[i]->getKey() == key)
				cout << "Слово соответвтвующее введенному ключу:"<< Dics[15]->Buck[i]->getValue() << endl;
		}
		break;
	}
	default:
		break;
	}
}
void Dictionary::del(string key)
{
	bool exit = false;
	int x = key.at(0);
	switch (x)
	{
	case 48:
	{
		for (int i = 0; i < Dics[0]->Buck.size(); i++)
		{
			if (Dics[0]->Buck[i]->getKey() == key)
			{
				Dics[0]->Buck.erase(Dics[0]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 49:
	{
		for (int i = 0; i < Dics[1]->Buck.size(); i++)
		{
			if (Dics[1]->Buck[i]->getKey() == key)
			{
				Dics[1]->Buck.erase(Dics[1]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 50:
	{
		for (int i = 0; i < Dics[2]->Buck.size(); i++)
		{
			if (Dics[2]->Buck[i]->getKey() == key)
			{
				Dics[2]->Buck.erase(Dics[2]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 51:
	{
		for (int i = 0; i < Dics[3]->Buck.size(); i++)
		{
			if (Dics[3]->Buck[i]->getKey() == key)
			{
				Dics[3]->Buck.erase(Dics[3]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 52:
	{
		for (int i = 0; i < Dics[4]->Buck.size(); i++)
		{
			if (Dics[4]->Buck[i]->getKey() == key)
			{
				Dics[4]->Buck.erase(Dics[4]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 53:
	{
		for (int i = 0; i < Dics[5]->Buck.size(); i++)
		{
			if (Dics[5]->Buck[i]->getKey() == key)
			{
				Dics[5]->Buck.erase(Dics[5]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 54:
	{
		for (int i = 0; i < Dics[6]->Buck.size(); i++)
		{
			if (Dics[6]->Buck[i]->getKey() == key)
			{
				Dics[6]->Buck.erase(Dics[6]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 55:
	{
		for (int i = 0; i < Dics[7]->Buck.size(); i++)
		{
			if (Dics[7]->Buck[i]->getKey() == key)
			{
				Dics[7]->Buck.erase(Dics[7]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 56:
	{
		for (int i = 0; i < Dics[8]->Buck.size(); i++)
		{
			if (Dics[8]->Buck[i]->getKey() == key)
			{
				Dics[8]->Buck.erase(Dics[8]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 57:
	{
		for (int i = 0; i < Dics[9]->Buck.size(); i++)
		{
			if (Dics[9]->Buck[i]->getKey() == key)
			{
				Dics[9]->Buck.erase(Dics[9]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 97:
	{
		for (int i = 0; i < Dics[10]->Buck.size(); i++)
		{
			if (Dics[10]->Buck[i]->getKey() == key)
			{
				Dics[10]->Buck.erase(Dics[10]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 98:
	{
		for (int i = 0; i < Dics[11]->Buck.size(); i++)
		{
			if (Dics[11]->Buck[i]->getKey() == key)
			{
				Dics[11]->Buck.erase(Dics[11]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 99:
	{
		for (int i = 0; i < Dics[12]->Buck.size(); i++)
		{
			if (Dics[12]->Buck[i]->getKey() == key)
			{
				Dics[12]->Buck.erase(Dics[12]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 100:
	{
		for (int i = 0; i < Dics[13]->Buck.size(); i++)
		{
			if (Dics[13]->Buck[i]->getKey() == key)
			{
				Dics[13]->Buck.erase(Dics[13]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 101:
	{
		for (int i = 0; i < Dics[14]->Buck.size(); i++)
		{
			if (Dics[14]->Buck[i]->getKey() == key)
			{
				Dics[14]->Buck.erase(Dics[14]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	case 102:
	{
		for (int i = 0; i < Dics[15]->Buck.size(); i++)
		{
			if (Dics[15]->Buck[i]->getKey() == key)
			{
				Dics[15]->Buck.erase(Dics[15]->Buck.begin() + i);
				cout << "Удаление произведено успешно" << endl;
			}
			else
				cout << "Введенное знаечение не существует" << endl;
		}
		break;
	}
	default:
		break;
	}
}
void Dictionary::fileout()
{
	ofstream fout("Out.txt");
	fout << "			(Cлово|ключ)" << endl;
	for (int i = 0; i < 16;i++)
	{
		for (int j = 0; j < Dics[i]->Buck.size(); j++)
		{
			fout << "(" << Dics[i]->Buck[j]->getKey() << "|" << Dics[i]->Buck[j]->getValue() << ")" << endl ;
		}
	}
	fout.close();
}
void Dictionary::filein()
{
	ifstream fin("In.txt");
	if (fin.is_open())
	{
		cout << "Файл открыт успешно." << endl;
		string line;
		while (getline(fin, line))
		{
			cout << "Слово: " << line << endl;
			string value;
			istringstream iss(line);
			input(line);
		}
	}
	else
		cout << "Файл не был открыт" << endl;
	fin.close();
}
Dictionary::Dictionary()
{
	Bucket * new_bucket;
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		new_bucket = new Bucket;
		Dics.push_back(new_bucket);
		Dics[i]->num = j + 48;
		j++;
	}
	j = 0;
	for (int i = 10; i < 16; i++)
	{
		new_bucket = new Bucket;
		Dics.push_back(new_bucket);
		Dics[i]->num = j + 97;
		j++;

	}
}
Dictionary::~Dictionary()
{
}
