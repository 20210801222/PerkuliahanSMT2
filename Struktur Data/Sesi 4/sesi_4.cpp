#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int dataArray[3][3] = {
		{16, 31, 12},
		{10, 15, 18},
		{15, 24, 10}
	};

	int searchData, indexOne, indexTwo;
	char choose;
	bool flag = false;
	bool active = true;

	while(active)
	{
		cout<<"Search Data : ";
		cin>>searchData;

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (dataArray[i][j] == searchData)
				{
					flag = true;
					indexOne = i + 1;
					indexTwo = j + 1;
				}
			}
		}

		if (flag) {
			cout<<"Data Ditemukan! Data Berada di Index["<<indexOne<<"]["<<indexTwo<<"]"<<endl;
		} else {
			cout<<"Data Tidak Ditemukan!"<<endl;
		}

		cout<<endl;


		cout<<"Try Again?(Y/N) : ";
		cin>>choose;

		cout<<endl;

		if (choose == 'n' || choose == 'N') {
			return 0;
		}

	}

	return 0;
}
