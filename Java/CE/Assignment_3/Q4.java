import java.util.Scanner;

interface Java_Array{
    public void array_reverse(int arr[]);
    public void array_copy(int arr[]);
    public void array_max(int arr[]);
}

class Operation implements Java_Array{
    public void array_reverse(int arr[]){
        int n = arr.length;
        int left = 0 , right = n-1;
        while(left<right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        System.out.println("Reverse Array : ");
        for(int i = 0 ; i<n ; i++){
            System.out.print(arr[i]+"  ");
        }
        System.out.println();
    }

    public void array_copy(int arr[]){
        int n = arr.length;
        int new_arr[] = new int[n];

        for(int i = 0 ; i<n ; i++){
            new_arr[i] = arr[i];
        }

        System.out.println("Copied Array : ");
        for(int i = 0 ; i< n; i++){
            System.out.print(new_arr[i]+"  ");
        }
        System.out.println();
    }

    public void array_max(int arr[]){
        int max = arr[0];
        for(int i = 1 ;i<arr.length ; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        System.out.println("Maximum of Array  :  "+max);
    }
}
public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array :  ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.println("Enter "+n+" Elements in an array : ");
        for(int i = 0 ; i< n ; i++){
            arr[i]= sc.nextInt();
        }
        int original[] = arr.clone();
        Operation op = new Operation();
        op.array_reverse(arr);
        op.array_copy(original);
        op.array_max(arr);
        sc.close();
    }
}
