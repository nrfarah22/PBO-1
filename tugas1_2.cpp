#include <iostream>
using namespace std;

int main()
{
	//TIPE DATA & VARIABLE
	int nim;
	string nama;
	
	//INPUT
	cout<<"===== INPUT ====="<<endl;
	cout<<"Masukkan nama Anda\t: ";	cin>>nama;
	cout<<"Masukkan NIM Anda\t: ";	cin>>nim;
	cout<<endl;
	
	//OUTPUT
	cout<<"===== OUTPUT ====="<<endl;
	cout<<"Nama\t= "<<nama<<endl;
	cout<<"NIM\t= "<<nim<<endl;
	
	//FOR
	cout<<"===== PERULANGAN FOR ====="<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"Perulangan ke-"<<i+1<<endl;
		cout<<"\tNama = "<<nama<<endl;
		cout<<"\tNIM = "<<nim<<endl;
	}
	cout<<endl;
	
	//KONDISIONAL IF
	cout<<"===== KONDISIONAL IF ====="<<endl;
	int gender;
	cout<<"1. Perempuan"<<endl;
	cout<<"2. Laki-laki"<<endl;
	cout<<"Gender Anda : ";	cin>>gender;
	if(gender == 1)
	{
		cout<<"Gender\t= Perempuan"<<endl;
	}
	else if(gender == 2)
	{
		cout<<"Gender\t= Laki-laki"<<endl;
	}
	else
	{
		cout<<"Salah input ..."<<endl;
	}
	cout<<endl;
	
	//PERULANGAN WHILE
	cout<<"===== PERULANGAN WHILE ====="<<endl;
	int j=1;
	while(j <= 5)
	{
		cout<<"Perulangan ke-"<<j<<endl;
		cout<<"\tNama = "<<nama<<endl;
		j++;
	}
	cout<<endl;
	
	//PERULANGAN DO WHILE
	cout<<"===== PERULANGAN DO WHILE ====="<<endl;
	int k=1;
	do
	{
		cout<<"Perulangan ke-"<<k<<endl;
		cout<<"\tNIM = "<<nim<<endl;
		k++;
	}
	while(k <= 5);
	cout<<endl;
	
	//ARRAY 1D
	cout<<"===== ARRAY 1 DIMENSI ====="<<endl;
	int angka1[5]={5,6,7,8,9};
	for(int h=0; h<5; h++)
	{
		cout<<"Anggota array 1d ke-"<<h+1<<" = "<<angka1[h]<<endl;
	}
	cout<<endl;
	
	//ARRAY 2D
	cout<<"===== ARRAY 2 DIMENSI ====="<<endl;
	int angka2[2][5]={{2,4,6,8,10},{1,3,5,7,9}};
	for(int l=0; l<2; l++)
	{
		for(int m=0; m<5; m++)
		{
			cout<<"Array["<<l+1<<"]["<<m+1<<"] = "<<angka2[l][m]<<endl;
		}
	}
	cout<<endl;
	for(int l=0; l<2; l++)
	{
		for(int m=0; m<5; m++)
		{
			cout<<angka2[l][m]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
