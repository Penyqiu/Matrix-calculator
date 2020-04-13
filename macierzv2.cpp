#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

class Macierz {
private:

	int a[3][3];
	int b[3][3];
	int c[3][3];
	int a_wiersze = sizeof(a) / sizeof(a[0]);
	int a_kolumny = sizeof(a[0]) / sizeof(a[0][0]);
	int b_wiersze = sizeof(b) / sizeof(b[0]);
	int b_kolumny = sizeof(b[0]) / sizeof(b[0][0]);

public:
	void generuj();
	void wypisz();
	void wypelnij();
	void dodaj();
	void odejmij();
	void mnozenie();

};


void Macierz::generuj()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j]=rand() % 10;
			b[i][j] =rand() % 10;
		}
	}
}


void Macierz::wypisz()
{
	cout << "Liczba wierszy w macierzy a = " << a_wiersze << "\n";
	cout << "Liczba kolumn w macierzy a = " << a_kolumny << "\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << a[i][j] << '\t';
		}
		cout << '\n';

	}

	cout << "Liczba wierszy w macierzy b = " << b_wiersze << "\n";
	cout << "Liczba kolumn w macierzy b = " << b_kolumny << "\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << b[i][j] << "\t";
		}
		cout << "\n";

	}

	cout << "JEDNOSTKOWA\n";
	for (int i = 0; i < a_wiersze; i++)
	{
		for (int j = 0; j < a_wiersze; j++)
		{
			if (i == j)
			{
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
		cout << "\n";
	}
	
}


void Macierz::dodaj()
{
	for (int i = 0; i < a_wiersze; i++)
	{
		for (int j = 0; j < b_kolumny; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout << "-----------------------------------------------------------------------\n";
	cout << "DODANA";

	for (int i = 0; i < a_wiersze; i++)
	{
		for (int j = 0; j < b_kolumny; j++)
		{
			cout << "\t" << c[i][j];
		}
		cout << "\n\n";
	}
}

void Macierz::odejmij()
{
	cout << "-----------------------------------------------------------------------\n";
	cout << "ODJETA";
	for (int i = 0; i < a_wiersze; i++)
	{
		for (int j = 0; j < b_kolumny; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	for (int i = 0; i < a_wiersze; i++)
	{
		for (int j = 0; j < b_kolumny; j++)
		{
			cout << "\t" << c[i][j];
		}
		cout << "\n\n";
	}
}

void Macierz::mnozenie()
{
	for (int i = 0; i < a_wiersze; i++)
	{
		for (int j = 0; j < b_kolumny; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	cout << "-----------------------------------------------------------------------\n";
	cout << "MNOZENIE\n";

	for (int i = 0; i < a_wiersze; i++)
	{
		for (int j = 0; j < b_kolumny; j++)
		{
			cout << "\t" << c[i][j];
		}
		cout << "\n\n";
	}
}

void Macierz::wypelnij()
{	
	cout << "Macierz A"<<endl;
	for (int i = 0; i < a_wiersze; i++) {
		for (int j = 0; j < a_kolumny; j++) {
			cin >> a[i][j];
		}

	}
	cout << "Macierz B" << endl;
	for (int i = 0; i < b_wiersze; i++) {
		for (int j = 0; j < b_kolumny; j++) {
			cin >> b[i][j];
		}

	}
	cout << "WYPISANKO-------------------------";
	cout << "Macierz A"<<endl;
	for (int i = 0; i < a_wiersze; i++) {
		for (int j = 0; j < a_kolumny; j++) {
			cout << a[i][j]<<"\t";
		}
		cout << "\n";
	}
	cout << "Macierz B"<<endl;
	for (int i = 0; i < b_wiersze; i++) {
		for (int j = 0; j < b_kolumny; j++) {
			cout << b[i][j]<<"\t";
		}
		cout << "\n";
	}
}
int main()
{
	
	Macierz macierz;
	macierz.generuj();
	macierz.wypisz();
	macierz.dodaj();
	macierz.odejmij();
	macierz.mnozenie();
	cout << "A moze chcesz wypelnic samemu?"<<endl;
	macierz.wypelnij();
}
