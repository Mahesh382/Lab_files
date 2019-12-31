//8-bit binary addition of the unsigned integers.
#include<iostream>
#include<conio.h>
using namespace std;
void conv_bin(int, int a[]);
void disp(int arr[]);
int add_bin(int c[],int b[], int sum[]);

int main()
{
	int c[7], b[7], sum[7];
	int x,y;
	cout<<"enter 1st decimal number:"<<endl;
	cin>>x;
	cout<<"enter 2nd decimal number:"<<endl;
	cin>>y;
	conv_bin(x,c);
	cout<<"The Binary of 1st number is:";
	disp(c);
	cout<<endl;
	conv_bin(y,b);
	cout<<"The Binary of 2nd number is:";
	disp(b);
	cout<<endl;   //it breaks the line
	int d=add_bin(c,b,sum);
	cout<<"The required Carry is:"<<d<<endl;
	cout<<"The sum is:";
	disp(sum);
	cout<<endl;
	
	getch();
	return 0;
}


// for display
void disp(int arr[])
{
	for(int i=0;i<=7;i++)
	{
		cout<<arr[i];
	}
}

//for converting  into binary digit
void conv_bin(int x, int a[])
{
	for(int i=7;i>=0;i--)
	{
		a[i]=x%2;
		x=x/2;
	}
}







// for addition of two binary digit.
 int add_bin(int c[], int b[], int sum[])
 {
 	int carry=0;
 	for(int i=7;i>=0;i--)
 	{
 		sum[i]=(c[i]+b[i]+carry)%2;
 		carry=(c[i]+b[i]+carry)/2;
	 }
 	
 	return carry;
 }
