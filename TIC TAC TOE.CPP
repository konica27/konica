#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void winner(char a[3][3],string s1,string s2)
{

	if((a[0][0]=='x'&&a[0][1]=='x'&&a[0][2]=='x')||(a[1][0]=='x'&&a[1][1]=='x'&&a[1][2]=='x')||(a[2][0]=='x'&&a[2][1]=='x'&&a[2][2]=='x')||(a[0][0]=='x'&&a[1][0]=='x'&&a[2][0]=='x')||(a[0][1]=='x'&&a[1][1]=='x'&&a[2][1]=='x')||(a[0][2]=='x'&&a[1][2]=='x'&&a[2][2]=='x')||(a[0][0]=='x'&&a[1][1]=='x'&&a[2][2]=='x')||(a[2][0]=='x'&&a[1][1]=='x'&&a[0][2]=='x'))
	{
		cout<<s1<<" WINS.";
	}
		if((a[0][0]=='o'&&a[0][1]=='o'&&a[0][2]=='o')||(a[1][0]=='o'&&a[1][1]=='o'&&a[1][2]=='o')||(a[2][0]=='o'&&a[2][1]=='o'&&a[2][2]=='o')||(a[0][0]=='o'&&a[1][0]=='o'&&a[2][0]=='o')||(a[0][1]=='o'&&a[1][1]=='o'&&a[2][1]=='o')||(a[0][2]=='o'&&a[1][2]=='o'&&a[2][2]=='o')||(a[0][0]=='o'&&a[1][1]=='o'&&a[2][2]=='o')||(a[2][0]=='o'&&a[1][1]=='o'&&a[0][2]=='o'))
	{
		cout<<s2<<" WINS.";
	}
}
int check(char a[3][3],string s1,string s2,int c)
{
	if((a[0][0]==a[0][1]&&a[0][0]==a[0][2])||(a[1][0]==a[1][1]&&a[1][0]==a[1][2])||(a[2][0]==a[2][1]&&a[2][0]==a[2][2])||(a[0][0]==a[1][0]&&a[0][0]==a[2][0])||(a[0][1]==a[1][1]&&a[0][1]==a[2][1])||(a[0][2]==a[1][2]&&a[0][2]==a[2][2])||(a[0][0]==a[1][1]&&a[0][0]==a[2][2])||(a[0][2]==a[1][1]&&a[0][2]==a[2][0]))
    {
    	winner(a,s1,s2);
    	return 500000;
	}
	else if(c==0)
	{
		return 1;
	}
	else if(c==1)
	{
		return 0;
	}
}
   void display1(char a[3][3])
    {
    	for (int i=0;i<3;i++)
    	{
    		for (int j=0;j<3;j++)
    		{
    			cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
int chance(char a[3][3],string s1,string s2,int c)
{  
    int n,v;
	if (c==0)
	{
		 cout<<"Enter Choice: ";
    cin>>n;
	if(n==1)
	{
		a[0][0]='o';
	}
	else if(n==2)
	{
		a[0][1]='o';
	}	
	else if(n==3)
	{
		a[0][2]='o';
	}	
	else if(n==4)
	{
		a[1][0]='o';
	}	
	else if(n==5)
	{
		a[1][1]='o';
	}	
	else if(n==6)
	{
		a[1][2]='o';
	}	
	else if(n==7)
	{
		a[2][0]='o';
	}	
	else if(n==8)
	{
		a[2][1]='o';
	}	
	else if(n==9)
	{
		a[2][2]='o';
	}
	display1(a);
	v=check(a,s1,s2,c);
	return chance(a,s1,s2,v);
    }
	if(c==1)
	{
		 cout<<"Enter Choice: ";
    cin>>n;
    cout<<endl;
	if(n==1)
	{
		a[0][0]='x';
	}
	else if(n==2)
	{
		a[0][1]='x';
	}	
	else if(n==3)
	{
		a[0][2]='x';
	}	
	else if(n==4)
	{
		a[1][0]='x';
	}	
	else if(n==5)
	{
		a[1][1]='x';
	}	
	else if(n==6)
	{
		a[1][2]='x';
	}	
	else if(n==7)
	{
		a[2][0]='x';
	}	
	else if(n==8)
	{
		a[2][1]='x';
	}	
	else if(n==9)
	{
		a[2][2]='x';
	}
	display1(a);
	v=check(a,s1,s2,c);
	return chance(a,s1,s2,v);
	}
}
void display(char a[3][3],string s1,string s2,int c)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	chance(a,s1,s2,c);
}
int main()
{
	char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	string s1,s2;
	cout<<"Enter Player 1 Name(Having Symbol 'x'): ";
	cin>>s1;
	cout<<"Enter Player 2 Name(Having Symbol 'o'): ";
	cin>>s2;
	int c=rand()%2;
	if(c==1)
	cout<<endl<<s1<<" to go first!!!"<<endl;
	else
	cout<<endl<<s2<<" to go first!!!"<<endl;
	cout<<endl<<"Let The game Begin!!!"<<endl<<endl;
	display (a,s1,s2,c);
	return 0;
}
