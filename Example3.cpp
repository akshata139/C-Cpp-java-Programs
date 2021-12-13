/*

3. Write a program which accept one number from user and check whether 9th or 12th bit is on or off

*/

#include<iostream>
#include<stdbool.h>

using namespace std;

typedef unsigned int UINT;

class BitOperation
{
	public:
	bool CheckBit(UINT iNo)
	{
		UINT iMask = 0x00000900;
		UINT iResult = 0;
		
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
	UINT iValue1 = 0;
	bool bRet = false;
	
	cout<<"Enter number : \n";
	cin>>iValue1;
	
	BitOperation bobj;
	
	bRet = bobj.CheckBit(iValue1);
	
	if(bRet == true)
	{
		cout<<" 9th or 12th Bits are on!! \n";
	}
	else
	{
		cout<<" 9th or 12th Bits are off!! \n";
	}
	
	return 0;
}