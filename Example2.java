import java.util.*;

class StringMain
{
	public String str1,str2;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter source string :");
		str1 = sobj.nextLine();
		System.out.println("Enter destination string :");
		str2 = sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("Source stirng :"+str1);
		System.out.println("Destination stirng :"+str2);
	}
}

class StringDemo extends StringMain
{
	public boolean StrCmpX()
	{
		char Arr[] = str1.toCharArray();
		char Brr[] = str2.toCharArray();
		int i = 0,j = 0;
		boolean bAns = false;
		for((i = 0;i < Arr.length;i++) && (j = 0;j < Brr.length;j++))
		{
			if(Arr[i] == Brr[j])
			{
				bAns = true;
			}
		}
		return bAns;
	}
}

class Example1
{
	public static void main(String arg[])
	{
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		sobj.Display();
		boolean bRet = sobj.StrCmpX();

		if(bRet == true)
		{
			System.out.println("Strings are equal!!");
		}
		else
		{
			System.out.println("Stirngs are not same!!");
		}
	}
}