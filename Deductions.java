import java.util.*;
class Personal{
int empcode;
String desig,name;

}
class Allowance extends Personal{
double bp,hra,da,s;
Allowance()
{	
	Scanner scan=new Scanner(System.in);
	System.out.print("Enter Your Name:");
	name=scan.nextLine();
	System.out.print("Employee Code:");
	empcode=scan.nextInt();
	System.out.print("Designation:"); 
	desig=scan.next();
	System.out.print("Basic Pay:");
	bp=scan.nextDouble();
	hra=.05*bp;
	da=.1*bp;
	s=hra+da;
}
void displayPer(){
System.out.print("\nPAY SLIP:\n-------\nEMPLOYEE CODE:"+empcode+"\nNAME:"+name+"\nDESIGNATION:"+desig+"\nBASICPAY:"+bp+"\nHRA:"+hra+"\nDA"+da);
}
}
class Deductions extends Allowance{
double pf,loan,d,np;
void display(){
pf=.05*bp;
loan=.05*bp;
d=pf+loan;
np=(bp+s-d);
System.out.print("\nPF:"+pf+"\nLoan:"+loan+"\nNET PAY:"+np);

}
public static void main(String[] args){
Deductions e=new Deductions();
e.displayPer();
e.display();

}
}
