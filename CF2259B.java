import java.util.*;

class CF2259B{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] arr = new int[n];
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }
            int countOdd=0,countEven0=0;
            int countEven2=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2 == 1)countOdd++;
                else if(arr[i]%4==0)countEven0++;
                else countEven2++;
            }
            System.out.println(Math.max(countOdd,Math.max(countEven0,countEven2)));
        }
    }
}
