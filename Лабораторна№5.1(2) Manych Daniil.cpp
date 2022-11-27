#include<math.h>
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main(int argc, char** argv)
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const double x=1.2;
	int sum, mul , P ;
	int k,j, k_start, k_end, j_start, j_end;
	cout<<"Введіть початкові значення i =";
	cin>> k_start;
	cout<<"Введіть кінцеве значення i =";
	cin>>k_end;
	cout<<"Введіть початкові значення j =";
	cin>>j_start;
	cout<<"Введіть кінцеве значення j =";
	cin>>j_end;
	sum=0;
	k=k_start-1;
	do
	{
		k++;
	 sum=sum+(1+log(k));
	}
	while(k<=k_end);
	mul=1;
	j=j_start-1;
	do
	{
		j++;
		mul=mul*pow(j,3)*exp(sin(j));
	}
	while(j<=j_end);
	P=(1/cos(sqrt(exp(6))))*sum+(mul/pow(x,3.05));
	cout<<"Сума ="<<sum<<endl;
	cout<<"Добуток ="<<mul<<endl;
	printf(" P = %7.5f\n",P);
	system("pause");
	return 0;
}
