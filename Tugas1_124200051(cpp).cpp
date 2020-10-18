#include <iostream>

using namespace std;

int main()
{
	char nama [50], nim [15];
	float nilai_uts,nilai_uas,nilai_akhir;
	
	cout<< "-------------------------------------------" <<endl;
	cout<< "|Tugas Praktikum Algoritma dan Pemrograman|" <<endl;
	cout<< "|NIM : 124200051                          |" << endl;
	cout<< "|Nama : Dikhi Dewantoro                   |" << endl;
	cout<< "-------------------------------------------" <<endl;
	cout<< "" <<endl;
	
	cout<<"Nama Mahasiswa : ";
	cin>>nama;
	cin.getline (nama,sizeof(nama));
	cout<<"nim : ";
	cin>>nim;
	cout<< "" <<endl;
	cout<< "Nilai Uts   = "; 
	cin>> nilai_uts;
    cout<< "Nilai Uas   = ";
	cin>> nilai_uas; 
	
	cout<<"--------------------------------------------------------------------"<<endl;
	
	nilai_akhir = (nilai_uts + nilai_uas )/2;
	
	cout<<" Mahasiswa dengan nama "<<nama<<"("<<nim<<") mendapatkan nilai = "<<nilai_akhir;
	
	
}

