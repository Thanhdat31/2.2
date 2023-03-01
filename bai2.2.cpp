#include<iostream>
using namespace std;
int giaithua(int n)
{
	if (n == 0)
		return 1;
		return   n * giaithua(n - 1);
}
int main()
{
	int n;
	cout << "nhap n :";
	cin >> n;
	int gt = giaithua(n);
	cout << "giai thua " << n << "="<<gt<<endl;
	return 0;
}


