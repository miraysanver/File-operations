#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int n;
	string ad, soyad;
	int numara;
	cout << " kisi sayisini giriniz " << endl;
	cin >> n;
	fstream dosya;
	dosya.open("isimler1.txt", ios::out);
	cout << " kisilerin bilgilerini giriniz " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> ad >> soyad >> numara;
		dosya << ad << "\t" << soyad << "\t" << numara << endl;
	}
	dosya.close();
	dosya.open("isimler1.txt", ios::in);
	string satir;
	while (getline(dosya, satir))
	{
		cout << satir << endl;
	}
	dosya.close();
	return 0;
}
