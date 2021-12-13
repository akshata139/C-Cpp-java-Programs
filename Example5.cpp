/*

5. Write a program which accept one number from user and range of positions from user. 
Toggle all bits from that range.

*/

#include<iostream>

using namespace std;

typedef unsigned int UINT;

class BitOperation
{
	public:
	UINT ToggleBitRange(UINT iNo,UINT i,UINT j)
	{
		UINT iMask1 = 0xFFFFFFFF,iMask2 = 0xFFFFFFFF,iMask = 0;
		UINT iResult = 0;
		
		iMask1 = iMask1 << (i - 1);
		iMask2 = iMask2 >> (32 - j);
		
		iMask = iMask1 & iMask2;
		
		iResult = iNo ^ iMask;
		
		return iResult;
	}
	
};

int main()
{
	UINT iValue = 0,iStart = 0,iEnd = 0,iRet = 0;
	
	cout<<"Enter number : \n";
	cin>>iValue;
	
	cout<<"Enter starting and ending positions : \n";
	cin>>iStart>>iEnd;
	
	BitOperation bobj;
	
	iRet = bobj.ToggleBitRange(iValue,iStart,iEnd);
	cout<<"Updated value is : "<<iRet<<"\n";
	
	return 0;
}