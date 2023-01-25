#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int pointAB = 15, pointAE = 60, pointAC = 30;
	int pointBD = 25;
	int pointCF = 42;
	int pointDE = 20, pointDG = 15;
	int pointEG = 20, pointEF = 23;
	int pointGH = 26;
	int pointFH = 28;
	int choice, totalJarak;

	cout << "Rute Terpendek Graf" << endl
		 << endl;
	cout << "|---15KM-- B --25KM-- D --------15KM-------- |" << endl;
	cout << "|                     |                      |" << endl;
	cout << "|                   20KM                     |" << endl;
	cout << "|                     |                      |" << endl;
	cout << "A--------60KM-------  E --------20KM-------- G --26KM-- H" << endl;
	cout << "|                     |                                 |" << endl;
	cout << "|                   23KM                                |" << endl;
	cout << "|                     |                                 |" << endl;
	cout << "|---30KM-- C --42KM-- F -------------28KM---------------|" << endl;

	cout << endl
		 << endl;

	cout << " Tujuan " << endl;
	cout << "1. A - H" << endl;
	cout << "2. A - G" << endl;
	cout << "Pilih Tujuan : ";
	cin >> choice;

	cout << endl;

	if (choice == 1)
	{
		cout << "Kemungkinan Rute : A-B-D-G-H" << endl;
		cout << "                   A-B-D-E-G-H" << endl;
		cout << "                   A-C-F-H" << endl
			 << endl;
		cout << "Rute Terpendek   : A-B-D-G-H, Dengan total jarak : " << pointAB + pointBD + pointDG + pointGH << "KM" << endl;
	}
	else if (choice == 2)
	{
		cout << "Kemungkinan Rute : A-B-D-G" << endl;
		cout << "                   A-B-D-E-G" << endl;
		cout << "                   A-E-G" << endl;
		cout << "                   A-C-F-H-G" << endl
			 << endl;
		cout << "Rute Terpendek   : A-B-D-G, Dengan total jarak : " << pointAB + pointBD + pointDG << "KM" << endl;
	}
	else
	{
		cout << "Invalid Input!" << endl;
	}

	return 0;
}