import java.util.Scanner;
public class ArrayElemOcc {
    static int occur(int arr[],int n,int k){
        int res=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                res++;
            }
        }
        return res;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int z=occur(arr, n, k);
        System.out.println("Number of times element occurs in an array = "+z);
    }
}
