#include<iostream>
using namespace std;
int s(int n);
int main()
	{
	int n;
	cout<<"Masukkan n = "; cin >> n;
	cout<<"Jumlah deret S = " << s(n);
	}
	int s(int n)
	{
	if (n == 1){
		return 2;
	}else{
		return (2*n + s(n-1));
	}
	}
