#include <iostream>
#include <iomanip>

using namespace std;
main()
{
	int ayah , ibu, anak1, anak2, b1, b2, b3, b4, total;
	
	cout <<"-----------------------------------------------------"<<endl;
	cout <<"Tugas Praktikum Algoritma dan Pemograman #2          "<<endl;
	cout <<"Nama : Dikhi dewantoro                               "<<endl;
	cout <<"NIM  : 124200051                                     "<<endl;
	cout <<"-----------------------------------------------------"<<endl;
	cout <<""<<endl;
	
	cout <<"-----------------------------------------------------"<<endl;
	cout <<"                 BANTUAN BENCANA ALAM                "<<endl;
	cout <<"-----------------------------------------------------"<<endl;
	cout <<""<<endl;
	
	cout<<"Usia Ayah : ";
	cin>>ayah;
	
	//if ayah
	if (ayah>0 && ayah <= 12) // anak-anak
	{b1 = 15000*30;}
		else if (ayah>12 && ayah <=20 ) // remaja
		{b1 = 20000*30;}
		else if (ayah>20) // dewasa
		{b1 = 30000*30;}
	
	cout<<"Usia Ibu  : ";
	cin>>ibu;
	
	//if ibu
	if (ibu>0 && ibu <= 12) // anak-anak
	{b2 = 15000*30;}
		else if (ibu>12 && ibu <=20 ) // remaja
		{b2 = 20000*30;}
		else if (ayah>20) // dewasa
		{b2 = 30000*30;}
	
	else
	{cout<<"usia tidak sesuai"<<endl;}
	
	cout<<"Usia Anak Pertama : ";
	cin>>anak1;
	
	//if anak1
	if (anak1>0 && anak1 <= 12) // anak-anak
	{b3 = 15000*30;}
		else if (anak1>12 && anak1 <=20 ) // remaja
		{b3 = 20000*30;}
		else if (anak1>20) // dewasa
		{b3 = 30000*30;}
	
	cout<<"Usia Anak Kedua : ";
	cin>>anak2;
	
	//if anak2
	if (anak2>0 && anak2 <= 12) // anak-anak
	{b3 = 15000*30;}
		else if (anak2>12 && anak2 <=20 ) // remaja
		{b3 = 20000*30;}
		else if (anak2>20) // dewasa
		{b3 = 30000*30;}
	
	else
	{cout<<"usia tidak sesuai"<<endl;}
	
	
	total = b1 + b2 + b2 + b3 ;
	cout <<"Total bantuan yang diterima selama satu bulan sebesar Rp."<<total<<endl;	
	
}

