#include<iostream>
using namespace std;

int main()
{
	int pemasukan,pengeluaran;
	cout<<"masukan pemasukan =";
	cin>>pemasukan;
	cout<<"masukan pengeluaran =";
	cin>>pengeluaran;
	
	if(pemasukan<pengeluaran)
	{
		cout<<"pemasukan lebih kecil dari pengeluaran\n";
		
	}
	else if(pemasukan>pengeluaran)
	{
		cout<<"pemasukan lebih besar dari pengeluaran\n";
		
	}
	else
	cout<<"eror";
}
