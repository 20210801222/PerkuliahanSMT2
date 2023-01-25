#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string alamat;
    string ips;
    string ipk;
    string keterangan;
};

int main()
{
    char tab = '\t';
    int jmlhMhs = 25;

    Mahasiswa mhs[jmlhMhs];

    for (int i = 0; i < jmlhMhs; i++)
    {
        cout << "Data-" << i + 1 << " : "
             << "Entry Data" << endl;
        cout << "          Nama   : ";
        getline(cin, mhs[i].nama);
        cout << "          NIM    : ";
        getline(cin, mhs[i].nim);
        cout << "          Alamat : ";
        getline(cin, mhs[i].alamat);
        cout << "          IPS    : ";
        getline(cin, mhs[i].ips);
        cout << "          IPK    : ";
        getline(cin, mhs[i].ipk);

        float ipk = stof(mhs[i].ipk);

        if (ipk >= 3.75)
        {
            mhs[i].keterangan = "MHS PERFECT";
        }
        else if (ipk >= 3.50 && ipk <= 3.75)
        {
            mhs[i].keterangan = "MHS EXCELLENT";
        }
        else
        {
            mhs[i].keterangan = "MHS DBASE";
        }
    }

    cout << "              DAFTAR NAMA MHS STRUKTUR DATA             " << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "No.\t\tNama\t\tNIM\t\tAlamat\t\tIPK\t\tIPS\t\tKET." << endl;
    for (int j = 0; j < jmlhMhs; j++)
    {
        cout << j + 1 << tab << tab << mhs[j].nama << tab << tab << mhs[j].nim << tab << tab << mhs[j].alamat << tab << tab << mhs[j].ips << tab << tab << mhs[j].ipk << tab << tab << mhs[j].keterangan << endl;
    }
}
