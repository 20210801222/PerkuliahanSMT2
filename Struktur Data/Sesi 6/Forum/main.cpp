#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
struct anggota {
	string nama, kelompok, nilai;
};

int main(){
string nama;
string umur;
string nilai;

anggota kelompok[1];
	for (int i = 0; i < 1; i++) {
		cout<<"Hallooo...."<<endl;
		cout<<"Nama saya: ";
		getline(cin, kelompok[i].nama);
		cout<<"Umur saya : ";
		getline(cin, kelompok[i].kelompok);
		cout<<"Target nilai Struktur Data: ";
		getline(cin, kelompok[i].nilai);
		cout<<"\"Enjoy with Struktur Data\" ";
		cout<<endl;
	}
	return 0;
}
