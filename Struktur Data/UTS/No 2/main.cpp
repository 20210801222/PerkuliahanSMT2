#include <iostream>
#include <string>

using namespace std;

void displayIndex(int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << i << "\t  ";
	}
}

void displayData(string *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "\t";
	}
}

int main()
{
	string data[9] = {"Anton", "Yusuf", "Azzah", "Jojon", "Yahya", "Naura", "Ester", "Yunus", "Aisyah"};
	string search;
	int dataLeng = sizeof(data) / sizeof(string);

	cout << "Index : ";
	displayIndex(dataLeng);
	cout << endl;

	cout << "Data  : ";
	displayData(data, dataLeng);
	cout << "\n\n";

	cout << "Masukkan kata kunci pencarian : ";
	cin >> search;

	cout << endl;

	bool found = false;
	for (int i = 0; i < dataLeng; i++)
	{
		if (!data[i].find(search))
		{
			cout << data[i] << " Index Ke-" << i << " | ";
			found = true;
		}
	}

	cout << endl;
	if (!found)
	{
		cout << "Data Not Found! Try Again!";
	}
}