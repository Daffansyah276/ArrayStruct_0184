#include <iostream>
using namespace std;

string matkul[] = {" Pemograman dasar", "Algoritma"};

float Nilaiakhir[2] = {1, 2.5};

char grade[5];

int main()
{
    cout << "Nama matakuliah : " << matkul[1] << endl;
    matkul[0] = "Logika Teknik Pemograman ";
    cout << "Nama matakuliah : " << matkul[0] << endl;

    for(int i = 0; i < 2; i++)
    {
        cout << "Nilai akhir ke-" << i+1 << "=" << Nilaiakhir[i] << endl;
    }

    cout << "Input Grade" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Masukan Grade : ";
        cin >> grade[i];
    }

    cout <<endl;
    cout << "Tampillkan Grade" << endl;
    cout << endl;

    for (int i= 0;i < 5; i++)
    {
        cout << grade[i];
    }
}