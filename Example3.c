//3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF. 

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0X08104040;

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
		printf("7th, 15th, 21st and 28th bits are on..\n");
	}
	else
	{
		printf("7th, 15th, 21st and 28th bits are off..\n");
	}
	
	return 0;
}