#include <iostream>
using namespace std;
main()
{
	float ipk, rumus_ipk;
	int lama_studi, rumus_studi, banyak_mka, banyak_asisten, lama_asisten, rumus_asisten, publikasi, banyak_pub, rumus_publikasi, jumlah_skor;
	
	cout<< "-------------------------------------------" <<endl;
	cout<< "|Tugas Praktikum Algoritma                |" <<endl;
	cout<< "|NIM : 124200051                          |" << endl;
	cout<< "|Nama : Dikhi Dewantoro                   |" << endl;
	cout<< "-------------------------------------------" <<endl;
	cout<< "" <<endl;
	
cout<<"==========================================================="<<endl;	
cout<<"IPK                             = "; 
cin>> ipk; 
	if ((ipk<=4.000) && (ipk>=3.876))
	{
	rumus_ipk=20*4;
	}
	else if ((ipk>=3.715))
	{
	rumus_ipk=20*3;
	}
	else
	if (ipk>=3.626)
	{
	rumus_ipk=20*2;
	}
	else
	if (ipk>=3.500)
	{
	rumus_ipk=20*1;
	}
	
cout<<"Lama Studi (semester)           = "; 
cin>>lama_studi; 

	if (lama_studi==7)
	{
	rumus_studi=10*4;
    }
    else
    if (lama_studi==8)
	{
	rumus_studi=10*3;
    }
    else
    if (lama_studi==9)
	{
	rumus_studi=10*2;
    }
    else
	if (lama_studi==10)
	{
	rumus_studi=10*1;
    }
    
cout<<"Lama menjadi Asisten (semester) = "; 
cin>> lama_asisten;

cout<<"Banyak MKA Praktikum            = "; 
cin>> banyak_mka;

if (lama_asisten==4)
	{
	rumus_asisten=10*4*banyak_mka;
	}
	if (lama_asisten==3)
	{
	rumus_asisten=10*3*banyak_mka;
	}
	if (lama_asisten==2)
	{
	rumus_asisten=10*2*banyak_mka;
	}
	if (lama_asisten==1)
	{
	rumus_asisten=10*1*banyak_mka;
	}
cout<<"==========================================================="<<endl;

cout <<"==========================="<<endl;
cout <<"|[1]UPN                   |"<<endl;          
cout <<"|[2]Regional              |"<<endl;
cout <<"|[3]Nasional              |"<<endl;
cout <<"|[4]Internasional         |"<<endl;
cout <<"==========================="<<endl;
cout <<"Jenis Publikasi  = "; 
cin>>publikasi;
cout <<"Banyak Publikasi = "; 
cin>>banyak_pub;

	switch (publikasi)
{
	case 1 : 
	rumus_publikasi=10*1*banyak_pub;
	break;
	case 2 : 
	rumus_publikasi=10*2*banyak_pub;
	break;
	case 3 : 
	rumus_publikasi=10*3*banyak_pub;
	break;
	case 4 : 
	rumus_publikasi=10*4*banyak_pub;
	break;
	}
	
	jumlah_skor= rumus_ipk + rumus_studi + rumus_asisten +rumus_publikasi;
	
	
	cout <<"jumlah skor = "<< jumlah_skor<<endl;
	
	if (ipk>3.5)
	{
	if (lama_studi<10)
	{
	if (lama_asisten>0)
	{
	if (banyak_pub>0)
	{
	cout << "Mahasiswa tersebut berhak mendapat karya cendikia";
	}
	else
	cout << "Mahasiswa tersebut tidak berhak mendapat karya cendikia";
	}
	else
	cout << "Mahasiswa tersebut tidak berhak mendapat karya cendikia";
	}
	else
	cout << "Mahasiswa tersebut tidak berhak mendapat karya cendikia";
	}
	cout<<""<<endl;		
	cout<<"============================================================"<<endl;	
	
}




