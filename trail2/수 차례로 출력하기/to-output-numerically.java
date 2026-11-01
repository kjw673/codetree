import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // Please write your code here.
        printAscend(n);
        System.out.print("\n");
        printDecend(n);
    }

    public static void printAscend(int n){
        if(n<1){
            return;
        }
        else{
            printAscend(n-1);
            System.out.printf("%d ",n);
        }
    }

    public static void printDecend(int n){
        if(n<1){
            return;
        }
        else{
            System.out.printf("%d ",n);
            printDecend(n-1);
        }
    }
}
