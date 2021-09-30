import java.util.Scanner;
import java.math.BigInteger;

public class Main
{
	public static void main(String[] args) {
	    
	    Scanner sc = new Scanner(System.in);
	   BigInteger given = sc.nextBigInteger();
	    BigInteger given2 = sc.nextBigInteger();
	    
	    BigInteger a = given;
	    BigInteger b = given2;
	    
	    int  c = 3;
	    c = a.compareTo(b);
	    
	    if(c == 1){
	        System.out.println(b + " " + a);
	    }
	    if(c == -1){
	        System.out.println(a + " " + b);
	    }
	    
	    


	    
	   
		
	}
}
