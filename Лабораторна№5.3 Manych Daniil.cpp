#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv)
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int e=pow(10,-5) ;
	double n, a, sum=0;  
	cout<<"введите n =";
	cin>>n;
	a=1+1/2+1/3+1/n;
	e=pow(10,-5) ;
	sum=sum+a;
	e=pow(10,-5);
	while(n<=e)
	{
		n++;
		e=pow(10,-5);
		sum=sum+n;
	}
	printf("Sum=%10.7fn=%d\n\n",sum, n );
	system("pause");
	return 0;
}
