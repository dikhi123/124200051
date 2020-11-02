#include <iostream>
using namespace std;
main()

{
  string nama, pass;
  int NH, UTS, UAS, rata_a, rata_k, matkul;

cout<< "-------------------------------------------" <<endl;
cout<< "|Tugas Praktikum Algoritma                |" <<endl;
cout<< "|NIM : 124200051                          |" << endl;
cout<< "|Nama : Dikhi Dewantoro                   |" << endl;
cout<< "-------------------------------------------" <<endl;
cout<< "" <<endl;
	
cout<<"================================="<<endl;
cout<<"           Login Akun            "<<endl;
cout<<"================================="<<endl;

	cout << "Username : "; 
	cin >> nama;
	cout << "Password : "; 
	cin >> pass;
	cout << ""<<endl;
 
		if (nama == "Dikhi" or nama == "DIKHI" or nama == "dikhi")
		{
		if (pass == "124200051")
		{
		cout << "LOGIN BERHASIL!"<<endl;
		}
		else cout << "PASSWORD ANDA SALAH!"<<endl;
		}
		else if (pass == "124200051")
		{
		cout << "USERNAME ANDA SALAH!"<<endl;
		}
		else cout << "USERNAME DAN PASSWORD ANDA SALAH!"<<endl;
		
	cout<<""<<endl;

cout<<"========================"<<endl;
cout<<"Input Nilai Mata Kuliah "<<endl;
cout<<"========================"<<endl;
cout<<""<<endl;

cout<<"=============================="<<endl;
cout<<"|1.Algoritma dan Pemograman  |"<<endl;
cout<<"|2.Kalkulus		     |"<<endl;
cout<<"=============================="<<endl;
cout<<"Pilih : ";
cin>>matkul;
cout<<""<<endl;

		switch (matkul)
		{
		case 1 : 
			cout<<"Nilai Harian 	: ";
			cin>>NH;
			cout<<"Nilai UTS	: ";
			cin>>UTS;
			cout<<"Nilai UAS	: ";
			cin>>UAS;
			cout<<""<<endl;
			rata_k =(NH+UTS+UAS)/3;
			
				if (rata_k>=80)
				{
				cout<<"Selamat Anda Lulus Kalkulus dengan nilai " << rata_k <<endl;
				}
				else
				{
				cout<<"Anda Tidak Lulus Kalkulus dengan nilai " << rata_k <<endl;
				}
			break;
			
		case 2 :
			cout<<"Nilai Harian		: ";
			cin>>NH;
			cout<<"Nilai UTS 	: ";
			cin>>UTS;
			cout<<"Nilai UAS	: ";
			cin>>UAS;
			cout<<""<<endl;
			rata_a = (NH+UTS+UAS)/3;
			
				if (rata_a>=80)
				{
				cout<<"Selamat Anda Lulus Kalkulus dengan nilai " << rata_a <<endl;
				}
				else
				{
				cout<<"Anda Tidak Lulus Kalkulus dengan nilai " << rata_a <<endl;	
				}
			break;
			
		case 3 :
			cout<<"Input Salah"<<endl;
			break;
		}

}
