#include <iostream>
#include <string>

using namespace std;

struct dataBuku
{
	string idBuku;
	string namaBuku;
	string hargaBuku;
};

int main()
{

	int arraySize = 10;

	dataBuku arrayBuku[arraySize];
	arrayBuku[0] = {"101", "C++", "5000"};
	arrayBuku[1] = {"102", "Java", "10000"};
	arrayBuku[2] = {"103", "PHP", "6000"};

	char tab = '\t';
	int choice;

	cout << "|====================|" << endl;
	cout << "|        MENU        |" << endl;
	cout << "|====================|" << endl
		 << endl;
	cout << "1. Tambah data buku" << endl;
	cout << "2. Cetak data buku" << endl;
	cout << "3. Ubah harga buku" << endl;
	cout << "4. Keluar" << endl
		 << endl;

	cout << "Pilih menu : ";
	cin >> choice;
	cout << endl;

	if (choice == 1)
	{

		string tempID, tempHarga;
		string tempNama;

		cout << "ID Buku : ";
		cin >> tempID;
		cout << "Nama Buku : ";
		cin >> tempNama;
		cout << "Harga Buku : ";
		cin >> tempHarga;

		arrayBuku[3].idBuku = tempID;
		arrayBuku[3].namaBuku = tempNama;
		arrayBuku[3].hargaBuku = tempHarga;

		cout << "\nData berhasil ditambah!" << endl;
		cout << "\nNo.\tID Buku\t\tNama Buku\tHarga Buku" << endl;
		for (int j = 0; j < 4; j++)
		{
			cout << j + 1 << tab << arrayBuku[j].idBuku << tab << tab << arrayBuku[j].namaBuku << tab << tab << "Rp." << arrayBuku[j].hargaBuku << endl;
		}
	}
	else if (choice == 2)
	{
		cout << "No.\tID Buku\t\tNama Buku\tHarga Buku" << endl;

		for (int j = 0; j < 3; j++)
		{
			cout << j + 1 << tab << arrayBuku[j].idBuku << tab << tab << arrayBuku[j].namaBuku << tab << tab << "Rp." << arrayBuku[j].hargaBuku << endl;
		}
	}
	else if (choice == 3)
	{
		string idChange, hargaSblm, hargaStlh;
		cout << "Masukkan ID Buku : ";
		cin >> idChange;
		cout << "Masukkan harga baru :";
		cin >> hargaStlh;

		for (int j = 0; j < 3; j++)
		{
			if (arrayBuku[j].idBuku == idChange)
			{
				hargaSblm = arrayBuku[j].hargaBuku;
				arrayBuku[j].hargaBuku = hargaStlh;
				cout << "\nID buku   : " << arrayBuku[j].idBuku << endl;
				cout << "Nama buku : " << arrayBuku[j].namaBuku << endl;
				cout << "Harga sebelum diubah : Rp " << hargaSblm << endl;
				cout << "Harga setelah diubah : Rp " << hargaStlh << endl;
			}
		}
	}
	else
	{
		return 0;
	}
}