import java.util.Scanner;
public class Main {
    public static int printStringN(int n){
        if(n<1){
            return 0;
        }
        else{
            System.out.println("HelloWorld");
            return printStringN(n-1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Please write your code here.
        printStringN(n);
    }
}