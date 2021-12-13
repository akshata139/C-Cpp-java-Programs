/*

4. Write a program which accept one number , two positions from user and check whether bit at first or
bit at second position is ON or OFF

*/

#include<iostream>
#include<stdbool.h>

using namespace std;

typedef unsigned int UINT;

class BitOperation
{
	public:
	bool CheckBit(UINT iNo,int pos1,int pos2)
	{
		UINT iMask1 = 0x000000001,iMask2 = 0x000000001,iMask;
		UINT iResult = 0;
		
		iMask1 = iMask1 << (pos1 - 1);
		iMask2 = iMask2 << (pos2 - 1);
		
		iMask = iMask1 | iMask2;
		
		iResult = iNo & iMask;
		
		if(iResult == iMask)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	UINT iValue1 = 0,iP1 = 0,iP2 = 0;
	bool bRet = false;
	
	cout<<"Enter number : \n";
	cin>>iValue1;
	
	cout<<"Enter first position : \n";
	cin>>iP1;
	
	cout<<"Enter second position : \n";
	cin>>iP2;
	
	BitOperation bobj;
	
	bRet = bobj.CheckBit(iValue1,iP1,iP2);
	
	if(bRet == true)
	{
		cout<<"Bits are on at "<<iP1<<" and "<<iP2<<endl;
	}
	else
	{
		cout<<"Bits are off at "<<iP1<<" and "<<iP2<<endl;
	}
	
	return 0;
}