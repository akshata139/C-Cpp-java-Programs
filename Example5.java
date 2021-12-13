import java.util.*;

class Number
{
	public int Product(int Brr[],int iLen)
	{
		int iCnt = 0,iMul = 1;

		for(iCnt = 0;iCnt < iLen;iCnt++)
		{
			if((Brr[iCnt] % 2)!= 0)
			{
				iMul = iMul * Brr[iCnt];
			}
		}

		return iMul;
	}
}

class Example5
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iSize = 0,iCnt = 0,iRet = 0;
		int[] Arr = new int[100];
		
		System.out.println("Enter number of elements :");
		iSize = sobj.nextInt();

		System.out.println("Enter elements :");

		for(iCnt = 0;iCnt < iSize; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		System.out.println("Entered elements are :");
		for(iCnt = 0;iCnt < iSize;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}

		Number nobj = new Number();

		iRet = nobj.Product(Arr,iSize);

		System.out.println("Multiplication of odd elements are :"+iRet);

	}
}