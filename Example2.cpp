/*

2. Write a program which accept two numbers from user and display position of common ON bits from that 
two numbers

*/

#include<iostream>

using namespace std;

typedef unsigned int UINT;

class BitOperation
{
	public:
	void CommonBit(UINT iNo1,UINT iNo2)
	{
		UINT iMask = 0x00000001;
		int iResult1 = 0,iResult2 = 0,i = 0,j = 0;
		
		for(i = 1,j = 1;i < 32,j < 32;i++,j++)
		{
			iResult1 = iNo1 & iMask;
			iResult2 = iNo2 & iMask;
			
			if((iResult1 != 0) && (i == j) && (iResult2 != 0))
			{
				cout<<i<<"\t";
			}
			
			iMask = iMask << 1;
		}
	}
};

int main()
{
	UINT iValue1 = 0,iValue2 = 0;
	
	cout<<"Enter first number : \n";
	cin>>iValue1;
	
	cout<<"Enter second number : \n";
	cin>>iValue2;
	
	BitOperation bobj;
	
	cout<<"Common Bit is : \n";
	bobj.CommonBit(iValue1,iValue2);
	
	return 0;
}