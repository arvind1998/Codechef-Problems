#include<iostream>

using namespace std;

#define MAX 1000
int topa=-1;
int topb=-1;
char a[MAX];
char b[MAX];

int length(char s[])
{
        int i,len=0;
        for(i=0;s[i]!='\0';i++)
                len++;
        return len;
}


int check(char c)
{
	if(c=='+'||c=='-')
		return 1;
 	if(c=='/'||c=='*')
                return 2;
	else if(c==')')
		return 3;
	else if(c=='(')
		return 4;
	else
		return 0;



}
 
void push(char c[], char x, int t)
{
	if(t==0)
	{
        	if(topa==MAX-1)
        	{
                	cout<<"Stack Overflow"<<endl;
                	return;
        	}
        	c[++topa]=x;
	}
	if(t==1)
        {
                if(topb==MAX-1)
                {
                        cout<<"Stack Overflow"<<endl;
                        return;
                }
                c[++topb]=x;
        }

}

char pop(char c[], int t)
{
	if(t==0)
        	return c[topa--];
	if(t==1)
		return c[topb--];
}

bool isEmpty(int t)
{
	if(t==0)
	{
        	if(topa==-1)
                	return true;
        	else
                	return false;
	}
	if(t==1)
        {
                if(topb==-1)
                        return true;
                else
                        return false;
        }

}

void arraycheck(char c)
{
        char temp;

        if(isEmpty(1)==true)
                push(b,c,1);

        else
        {
                if(check(b[topb])<check(c))
                        push(b,c,1);


                else
                {
                        while(check(b[topb])>=check(c))
			{
				temp=pop(b,1);
                                push(a,temp,0);
			}

                        push(b,c,1);
                }

		while(isEmpty(1)==true)
			push(a,c,0);

        }
}


int main()
{
	char str[50],i=0,chk=0,num1,num2;
	cout<<"Enter the expression:";
	cin>>str;

	while(i<length(str))
	{
		chk=check(str[i]);
		if(chk==0)
			push(a,str[i],0);
		else
			arraycheck(str[i]);
		i++;
		

	}
	while(isEmpty(1)==false)
		push(a,pop(b,1),0);
	for(i=0;i<=topa;i++)
		cout<<a[i];

	cout<<endl;
	return 0;
}






