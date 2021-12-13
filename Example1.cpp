/*

1.Write a program which accept one number from user and count number of ON (1) bits in it without using % 
and / operator.

*/

#include<iostream>

using namespace std;

typedef unsigned int UINT;

class BitOperation
{
	public:
	int CountOnBit(int iNo)
	{
		UINT iMask = 0x00000001;
		int iResult = 0,i = 0,iCnt = 0;
		
		for(i = 1;i < 32;i++)
		{
			iResult = iNo & iMask;
			
			if(iResult != 0)
			{
				iCnt++;
			}
			
			iMask = iMask << 1;
		}
		return iCnt;
	}
};

int main()
{
	UINT iValue = 0;
	int iRet = 0;
	
	cout<<"Enter number : \n";
	cin>>iValue;
	
	BitOperation bobj;
	
	iRet = bobj.CountOnBit(iValue);
	cout<<"Count of on bit is : "<<iRet<<"\n";
	
	return 0;
}