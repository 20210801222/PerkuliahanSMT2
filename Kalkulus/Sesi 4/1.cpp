#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {

    float x1, x2, y1, y2, hasilX, hasilY, hasil;

    cout<<"X1 : ";
    cin>>x1;
    cout<<"X2 : ";
    cin>>x2;
    cout<<"Y1 : ";
    cin>>y1;
    cout<<"Y2 : ";
    cin>>y2;

    hasilX = x2 - x1;
    hasilY = y2 - y1;

    hasilX = pow(hasilX, 2);
    hasilY = pow(hasilY, 2);

    hasil = hasilX + hasilY;
    hasil = sqrt(hasil);

    cout<<"X     = "<<hasilX<<endl;
    cout<<"Y     = "<<hasilY<<endl;
    cout<<"Hasil = "<<hasil<<endl;
}
