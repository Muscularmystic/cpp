#include<iostream>
#include<string.h>
using namespace std;
string tenth[]={"Ten","Twenty","Thirty","fourty","fifty","sixty","Seventy","Eighty","Ninety"};
string hundred[]={"One Hundred","Two Hundred","Three Hundred","four Hundred","five Hundred","six Hundred","Seven Hundred","Eight Hundred","Nine Hundred"};
string unit[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
string value[]={".","Thousand","Million","Billion","Trillion","Quadrillion","Quntillion"};
string Eleven_to_ninetin[]={"Eleven","Twelve","Thirteen","Fourteen","fifthteen","Sixteen","Seventeen","Eighteen","Nineteen"};

void read(char char1,char char2,char char3)
{
	int a=char3-48;
	int b=char2-48;
	int c=char1-48;
	
	if(a==0 && (b!=0 && b!=1) && c!=0)
	{
		cout<<tenth[b-1]<<" "<<unit[c-1];
	}
	if(a!=0 && b==0 && c!=0)
	{
		cout<<hundred[a-1]<<" "<<unit[c-1];
	}
	if(a!=0 && b!=0 && c==0)
	{
		cout<<hundred[a-1]<<" "<<tenth[b-1];
	}
	if(a!=0 && b==0 && c==0)
	{
		cout<<hundred[a-1];
	}
	if(a==0 && b==0 && c!=0)
	{
		cout<<unit[c-1];
	}
	if(a!=0 && (b!=0 && b!=1) && c!=0)
	{
		cout<<hundred[a-1]<<" "<<tenth[b-1]<<""<<unit[c-1];
	}
	if(a!=0 && b==1 &&c!=0)
	{
		cout<<hundred[a-1]<<" "<<Eleven_to_ninetin[c-1];
	}
	if(a==0 && b==1 && c!=0)
	{
		cout<<Eleven_to_ninetin[c-1];
	}
	if(a==0 && b!=0 && c==0)
	{
		cout<<tenth[b-1];
	}
	if(a==0 && b==0 && c==0)
	{
		return;
	}
		
	
}

int main()
{
    string num;  
	int flag=0;   
    int size,partition;      
    cout<<"Enter number:"<<endl;
    cin>>num;		
    size=num.length();
    if(size%3==1)
    {
    	num.insert(0,"00");
    	size=num.length();
    
	}
	
	if(size%3==2)
	{
		num.insert(0,"0");
    	size=num.length();
    	
	}
	
	
    int i=0;
    partition=size/3;
	do
	{
		read(num[i+2],num[i+1],num[i]);
		cout<<" "<<value[partition-1];
		cout<<endl;
		i=i+3;
		
		partition=partition-1;
	}while(i<size && partition!=0);

    return 0;
}
