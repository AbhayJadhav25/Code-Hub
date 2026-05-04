import java.util.Random;

class calculator extends Thread{
    int arr[];
    int start ; 
    int end ;
    int sum = 0;

    calculator(int arr[] , int start , int end){
        this.arr = arr;
        this.start = start;
        this.end = end;
    }

    @Override
    public void run(){
        for(int i = start ; i<end ; i++){
            sum+=arr[i];
        }
    }

    public int sum(){
        return sum;
    }
}
public class Q4_2 {
    public static void main(String[] args) {
        int arr[] = new int[1000];
        Random r = new Random();
        int totalSum=0;
        for(int i =0 ; i<1000 ; i++){
            arr[i] = r.nextInt(100);
        }

        calculator threads[] = new calculator[10];

        for(int i = 0 ;i<10; i++){
            int start = i *100;
            int end = start + 100;

            threads[i] = new calculator(arr, start, end);
        }

        for(int i = 0 ; i<10 ; i++){
            threads[i].start();
        }

        for(int i=0;i<10;i++){
            try{
                threads[i].join();
            }catch(Exception e){
                System.out.println("Error..!");
            }
        }
        for(int i =0 ; i<10;i++){
            totalSum+=threads[i].sum();
        }
        System.out.println("Total sum = "+totalSum);
        System.out.println("Average  =  "+(totalSum/1000.0));
    }
}
