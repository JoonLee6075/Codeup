package Practice;
import java.util.Scanner;
public class Main {
  public int coffeeStack;
  public  int remainingTicket;
  public  int ticketNeeded;
  
      Main(){
    	  
      }
  
	public static void main(String[] args) {
		
		
		Scanner sc = new Scanner(System.in);
		
		int totalTicket = sc.nextInt();
		
		Main mainA = new Main();
		mainA.ticketNeeded = sc.nextInt();
		mainA.calculate(totalTicket , mainA.ticketNeeded);

		System.out.println(mainA.coffeeStack);
	
		
	
		
		
	}
	
	public int calculate(int a, int b) {
		
		if( a < b) {
			return 0;
		}
		 coffeeStack += Math.abs(a / b);
		 remainingTicket = a % b + Math.abs(a / b);
		
		
		return calculate(remainingTicket , ticketNeeded); 	
	}

}


