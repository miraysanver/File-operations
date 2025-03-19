#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string dosyayolu = "C:\\Users\\miray\\Desktop\\sayilar.txt";
	ifstream dosya(dosyayolu);
	ofstream cift("ciftler.txt");
	ofstream tek("tekler.txt");
	int sayi;
	string satir;
	if (!dosya.is_open())
		cout << " sayilar dosyasi acilamadi " << endl;
	if (!cift.is_open())
		cout << " ciftler dosyasai acilamadi " << endl;
	if (!tek.is_open())
		cout << " tekler dosyasi acilamadi " << endl;
	while (dosya >> sayi)
	{

		if (sayi % 2 == 0)
		{
			cift << sayi << "\t";
		}
		else
		{
			tek << sayi << "\t";
		}
	}
	dosya.close();
	cift.close();
	tek.close();
	return 0;
}
