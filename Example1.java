import java.util.*;

class StringMain
{
	public String str1,str2;
	int iNo = 0;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter source string :");
		str1 = sobj.nextLine();
		System.out.println("Enter destination string :");
		str2 = sobj.nextLine();
		System.out.println("Enter length :");
		iNo = sobj.nextInt();
	}

	public void Display()
	{
		System.out.println("Source stirng :"+str1);
		System.out.println("Destination stirng :"+str2);
		System.out.println("length is :"+iNo);
	}
}

class StringDemo extends StringMain
{
	public String StrCatX()
	{
		str1 = str1.concat(str2);
		return String.valueOf(str1);
	}
}

class Example1
{
	public static void main(String arg[])
	{
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		sobj.Display();
		String s = sobj.StrCatX();
		System.out.println("After concatenation string is :"+s);
	}
}