import java.util.*;

class StringMain
{
	public String str1,str2;
	int iNo = 0;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter first string :");
		str1 = sobj.nextLine();
		System.out.println("Enter second string :");
		str2 = sobj.nextLine();
		System.out.println("Enter number :");
		iNo = sobj.nextInt();
	}

	public void Display()
	{
		System.out.println("first stirng :"+str1);
		System.out.println("second stirng :"+str2);
		System.out.println("number is :"+iNo);
	}
}

class StringDemo extends StringMain
{
	public boolean StrCmpX()
	{
		
	}
}

class Example3
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