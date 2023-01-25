#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	cout << "Deret Kuadrat Bilangan Ganjil" << endl;
	int num = 1;
	int sum = 0;
	while (num <= 19)
	{
		cout << "[" << num * num << "] ";
		sum += num * num;
		num += 2;
	}
	cout << "\n\n";

	cout << "Total nilai deret = " << sum << endl;
	cout << "Rata nilai deret = " << (float)sum / 10;
}