#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	fstream dosya;
	dosya.open("PersonelBilgileri.txt", ios::out);
	string ad1 = "Kenan", ad2 = "Yaman", soyad1 = "Koper", dogumyeri1 = "İstanbul", dogumyeri2 = "Tozludere";
	int dogumyili1 = 1978, dogumyili2 = 1990, numara1 = 111, numara2 = 123;
	dosya << numara1 << "\t" << ad1 << "\t" << soyad1 << "\t" << dogumyili1 << "\t" << dogumyeri1 << endl;
	dosya << numara2 << "\t" << ad2 << "\t" << soyad1 << "\t" << dogumyili2 << "\t" << dogumyeri2 << endl;
	string ad3 = "Miray", soyad2 = "Sanver", dogumyeri3 = "Yalova";
	int dogumyili3 = 2004, numara3 = 345;
	dosya << numara3 << "\t" << ad3 << "\t" << soyad2 << "\t" << dogumyili3 << "\t" << dogumyeri3 << endl;
	dosya.close();
	int personelsayisi = 3;
	int ortalama = 1;
	int yas1 = 2024 - dogumyili1;
	int yas2 = 2024 - dogumyili2;
	int yas3 = 2024 - dogumyili3;
	ortalama = (yas1 + yas2 + yas3) / 3;
	cout << " yas ortalamasi = " << ortalama;
} 
