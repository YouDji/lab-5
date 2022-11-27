#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <math.h>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void gotoxy (int xp, int yp)
{
	COORD new_xy;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	new_xy.X = xp ; new_xy.Y = yp;
	SetConsoleCursorPosition(hStdOut,new_xy);
	
}
int main(int argc, char** argv) {
	system ("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, e, sin, xstart, xend, xstep;
	cout<<"¬ведите интервал xstart..xend\n";
	cout<<"¬ведите xstart = ";
	cin>>xstart;
	cout<<"¬ведите xend = ";
	cin>>xend;
	cout<<"¬ведите xstep = ";
	cin>>xstep;
	printf("_______________________\n");
	printf("|  x  |  y  |\n");
	printf("------------------\n");
	for(x=xstart; x<=xend; x=x+xstep)
	{
		if(x<0)
		y=pow(e,x)+pow(sin,2)*x/pow(sqrt(x-1),3);
		else
		if(x>=0)
		y=3*pow(x,2);
		printf("|%8.4f| %8.4f|\n",x,y);
		printf("------------------\n");
		system("pause");
		return 0;
	}
}
