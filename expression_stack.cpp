#include<iostream>

using namespace std;

#define MAX 1000
int top=-1;
char a[MAX];

int length(char s[])
{
	int i,len=0;
	for(i=0;s[i]!='\0';i++)
		len++;
	return len;
}


void push(char x)
{
	if(top==MAX-1)
	{
		cout<<"Stack Overflow"<<endl;
		return;
	}
	a[++top]=x;
}

void pop()
{
	top--;
}

bool isEmpty()
{
	if(top==-1)
		return true;
	else
		return false;
}

int main()
{
	int flag=1,i=0;
	char s[1000];
	cout<<"Enter expression: ";
	cin>>s;
	while((i < length(s) && flag))
	{
		if(s[i]=='('|| s[i]==')')
		{
			if(s[i]=='(')
				push('(');

			else if(isEmpty())
				flag=0;
			else
				pop();	
		}

		i++;
	}

	if(i==length(s) && (isEmpty()==true))
		cout<<"Balanced"<<endl;
	else
		cout<<"Not Balanced"<<endl;

	return 0;
}
