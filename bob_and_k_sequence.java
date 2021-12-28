import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] c = new int[n];
        for(int i = 0; i < n ; i++ ){
            c[i] = scanner.nextInt();
        }

        int minOperation = Integer.MAX_VALUE;
        for(int x=-100000; x<= 100000; x++){
            int op = 0;
            for(int j=0; j<n ; j++)
                op += Math.abs((x + (j * k))-c[j]);
            if(op<minOperation) minOperation = op;
        }


        System.out.println(minOperation);

    }
}
