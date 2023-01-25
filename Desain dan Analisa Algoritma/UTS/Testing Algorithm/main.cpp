#include <iostream>

using namespace std;

int main()
{
	bool cuciTangan, testSuhu, qrCode;
	char temp = 'n';

	cout << "Sudah cuci tangan ? (y/n)";
	cin >> temp;
	if (temp == 'y')
	{
		cuciTangan = true;
		temp = 'n';
	}
	else
	{
		cuciTangan = false;
	}

	cout << "Sudah test suhu ? (y/n)";
	cin >> temp;
	if (temp == 'y')
	{
		testSuhu = true;
		temp = 'n';
	}
	else
	{
		testSuhu = false;
	}

	cout << "Sudah scan QR Code ? (y/n)";
	cin >> temp;
	if (temp == 'y')
	{
		qrCode = true;
		temp = 'n';
	}
	else
	{
		qrCode = false;
	}

	cout << "\nCuci tangan  : " << cuciTangan << endl;
	cout << "Test Suhu    : " << testSuhu << endl;
	cout << "Scan QR Code : " << qrCode << endl;

	if (cuciTangan == false || testSuhu == false || qrCode == false)
	{
		cout << "Anda tidak bisa mengakses mall";
	}
	else
	{
		cout << "Anda bisa mengakses mall";
	}
}