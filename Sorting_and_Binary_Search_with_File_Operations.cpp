#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	int A[5] = { 6,4,9,2,5, };
	fstream dosya;
	dosya.open("dosya1.txt", ios::out);
	dosya << "siralanmamis dizi " << endl;
	for (int i = 0; i < 5; i++)
	{
		dosya << A[i] << " ";
	}

	int gecici;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (A[j] > A[j + 1])
			{
				gecici = A[j];
				A[j] = A[j + 1];
				A[j + 1] = gecici;
			}
		}
	}
	int aranan, enkucukindis = 0, enbuyukindis = 4, ortaindis, bulunanindis = -1;
	cout << " aranan sayiyi giriniz " << endl;
	cin >> aranan;
	while (enkucukindis <= enbuyukindis)
	{
		ortaindis = (enkucukindis + enbuyukindis) / 2;
		if (A[ortaindis] == aranan)
		{
			bulunanindis = ortaindis;
			break;
		}
		else if (A[ortaindis] < aranan)
		{
			enkucukindis = ortaindis + 1;
		}
		else
		{
			enbuyukindis = ortaindis - 1;
		}
	}
	if (bulunanindis != -1)
	{
		dosya << " aranan sayi " << bulunanindis << ". indistedir " << endl;
	}
	else
	{
		dosya << " aranan sayi bulunamadi " << endl;
	}
	dosya.close();
	dosya.open("dosya1.txt", ios::in);
	string satir;
	while (getline(dosya, satir))
	{
		cout << satir;
	}
	dosya.close();

	return 0;
}    
