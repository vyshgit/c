import java.util.*;
class R{
public static void main(String[] args){
int r;
int marks[]={80,56,78,99,50,30,60,80};
Scanner scan=new Scanner(System.in);
System.out.print("Enter your rollno:");
r=scan.nextInt();
try{
	
	
	System.out.print("Roll no:"+r+"\nMark:"+marks[r-1]);
	

}
catch(Exception a){
System.out.print("\nIncorrect roll no");
}

}

}

