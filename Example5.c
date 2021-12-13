/*5. Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit
 number 32.
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0X80000001;

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
		printf("1st and last bits are on..\n");
	}
	else
	{
		printf("1st and last bits are off..\n");
	}
	
	return 0;
}