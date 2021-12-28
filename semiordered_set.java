import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] numbers = new int[n];
        int counter = 0;
        for(int i = 0 ; i < n ; i++){
            if(scanner.nextInt() != i+1) counter++;
        }
        if(counter == 2) System.out.println("YES");
        else System.out.println("NO");
    }
}
