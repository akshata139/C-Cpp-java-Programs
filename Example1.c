//1.Write a program which checks whether 15th bit is On or OFF. 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0X00004000;
	UINT iResult = 0;
	
	iResult = iMask & iNo;
	
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter value.\n");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("15th bit is on..\n");
	}
	else
	{
		printf("15th bit is off..\n");
	}
	
	return 0;
}