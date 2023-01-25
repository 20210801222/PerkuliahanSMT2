#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string ipk;
    string keterangan;
};

int main()
{
    char tab = '\t';
    int jmlhMhs = 5;
    int firstCat = 0;
    int secondCat = 0;
    int thirdCat = 0;
    int uncategorizedCat = 0;

    Mahasiswa mhs[jmlhMhs];

    for (int i = 0; i < jmlhMhs; i++)
    {
        cout << "Data-" << i + 1 << " : "
             << "Entry Data" << endl;
        cout << "          Nama   : ";
        getline(cin, mhs[i].nama);
        cout << "          NIM    : ";
        getline(cin, mhs[i].nim);
        cout << "          IPK    : ";
        getline(cin, mhs[i].ipk);

        int ipk = stoi(mhs[i].ipk);

        if (ipk >= 88)
        {
            mhs[i].keterangan = "Sangat Memuaskan";
            firstCat++;
        }
        else if (ipk >= 77 && ipk <= 88)
        {
            mhs[i].keterangan = "Memuaskan";
            secondCat++;
        }
        else if (ipk >= 60 && ipk <= 76)
        {
            mhs[i].keterangan = "Cukup";
            thirdCat++;
        }
        else
        {
            mhs[i].keterangan = "Uncategorized";
            uncategorizedCat++;
        }
    }

    cout << "              DAFTAR NAMA MHS STRUKTUR DATA             " << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "No.\t\tNama\t\tNIM\t\tIPK\t\tKET." << endl;
    for (int j = 0; j < jmlhMhs; j++)
    {
        cout << j + 1 << tab << tab << mhs[j].nama << tab << tab << mhs[j].nim << tab << tab << mhs[j].ipk << tab << tab << mhs[j].keterangan << endl;
    }
    cout << endl;
    cout << "Jumlah predikat sangat memuaskan = " << firstCat << "\tOrang." << endl;
    cout << "Jumlah predikat memuaskan        = " << secondCat << "\tOrang." << endl;
    cout << "Jumlah predikat cukup            = " << thirdCat << "\tOrang." << endl;
    cout << "Jumlah predikat uncategorized    = " << uncategorizedCat << "\tOrang." << endl;
}
