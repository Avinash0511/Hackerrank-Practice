import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int sum=0;
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            for(int j=0;j<n;j++) {
                sum += (a + (Math.pow(2,j))*b);
                System.out.print(sum + " "); 
                sum = sum - a;
            }
            sum = 0;
            System.out.print("\n");
        }
        in.close();
    }
}
