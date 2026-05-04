import java.util.*;

class MissingNumber {
    static int missingNumber(int arr[]){
    int n = arr.length;
    int sn = (n*(n+1))/2;
    int s=0;
    for(int i=0; i<n ; i++){
        s+=arr[i];
    }
    int missNum = sn - s;
    return missNum;
}       
public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter size of an array : ");
            int size = sc.nextInt();

            int arr[] = new int[size];

            System.out.println("Enter " + size + " elements in an array : ");
            for (int i = 0; i < arr.length; i++) {
                arr[i] = sc.nextInt();
            }
            int missNum = missingNumber(arr);
            System.out.println("Missing Number is " + missNum);
            sc.close();
        }
    }