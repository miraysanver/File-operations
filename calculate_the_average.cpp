#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string dosyayolu = "C:\\Users\\miray\\Desktop\\ornek1.txt";
	ifstream dosya(dosyayolu);
	int puan;
	double ortalama;
	int toplam = 0;
	vector<int>puanlar;
	for (int i = 0; i < 10; i++)
	{
		dosya >> puan;
		puanlar.push_back(puan);
	}
	for (int j = 0; j < 10; j++)
	{
		toplam += puanlar[j];
	}
	ortalama = toplam / 10;
	cout << " sinif ortalamasi " << ortalama << endl;
	dosya.close();
	return 0;
}

