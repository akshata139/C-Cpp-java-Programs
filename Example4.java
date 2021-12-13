import java.util.*;

class StringMain
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter first string :");
		str = sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("stirng is:"+str);
	}
}

class StringDemo extends StringMain
{
	public String StrRevTogX()
	{
		char Arr[] = str.toCharArray();
		char temp;
		int iStart = 0,iEnd = Arr.length - 1,i = 0;
	    if((Arr[i] >= 'a') && (Arr[i]) <= 'z')
		{
			Arr[i] = Arr[i] - 32;
		}
		return new String(Arr);
	}
}

class Example4
{
	public static void main(String arg[])
	{
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		sobj.Display();
		String bRet = sobj.StrRevTogX();
		System.out.println("Stirngs are "+bRet);
	}
}