#include<iostream>
#include<conio.h>
using namespace std;
void conv_bin(int, int a[]);
void disp(int arr[]);
int add(int c[],int b[], int sum[]);
void twos_comp(int m[],int acomp[]);

 int main()
{
	int m[8],acomp[8];
	int c[8], b[8], sum[8];
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
	cout<<endl;
	twos_comp(b,acomp);
	cout<<"The required 2's complement is:";
	disp(acomp);
	cout<<endl;
	cout<<"the reqiured difference is:";
	add(c,acomp,sum);
	if(sum[0]==0)
	disp(sum);
	else{
		twos_comp(sum,acomp);
		cout<<"-";
		disp(acomp);
		
		}
	
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

void twos_comp(int m[],int acomp[])
{
	int one[8]={0,0,0,0,0,0,0,1};
	for(int i=0; i<=7; i++)
	{
		m[i]=1-m[i];
	}
	add(m,one,acomp);
}

int add(int c[], int b[], int sum[])
 {
 	int carry=0;
 	for(int i=7;i>=0;i--)
 	{
 		sum[i]=(c[i]+b[i]+carry)%2;
 		carry=(c[i]+b[i]+carry)/2;
	 }
 	
 	return carry;
 }



