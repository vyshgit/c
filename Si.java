	import java.util.*;
	class Student{
	int regno;
	String name;
	void read(){
	Scanner scan=new Scanner(System.in);
	System.out.print("Enter Your Name:");
	name=scan.nextLine();
	System.out.print("Enter Your Register Number:");
	regno=scan.nextInt();
	
	}
	}
	class Si extends Student{
	int in=70,ex=40;
	
	void display()
	{
		System.out.print("\tName:"+name+"\n\tRegister NO:"+regno+"\n\tInternal mark:"+in+"\n\tExternal mark:"+ex+"\n\tTotal Mark:"+(in+ex));
	}
	public static void main(String[] args)
	{
		Si s=new Si();
		s.read();
		s.display();
	}
	
	}
