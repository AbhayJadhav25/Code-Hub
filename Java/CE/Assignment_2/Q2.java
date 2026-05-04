import java.util.*;
import MScCAI.*;
import MScCAII.*;
public class Q2 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of objects = ");
        int n = sc.nextInt();

        MscCAIMarks mscI[] = new MscCAIMarks[n];
        MscCAIIMarks mscII[] = new MscCAIIMarks[n];

        for(int i = 0 ; i<n ; i++){
            System.out.println("Enter Detailed of "+i+" Student : ");
            System.out.println("Enter Roll Number = ");
            int rno = sc.nextInt();

            System.out.println("Enter name of student = ");
            String name = sc.next();

            System.out.println("Enter Marks of 1st Year (sem-I and sem-II) : ");
            int semI = sc.nextInt();
            int semII = sc.nextInt();

            
            System.out.println("Enter Marks of 2nd Year (sem-I and sem-II) : ");
            int sem2I = sc.nextInt();
            int sem2II = sc.nextInt();

            mscI[i] = new MscCAIMarks(semI, semII);
            mscII[i] = new MscCAIIMarks(sem2I, sem2II);

            int yearI = mscI[i].total1();
            int yearII = mscII[i].total2();

            double per =( yearI + yearII )/2;

            System.out.println("Name = " + name 
                    + "\nRoll no = " + rno 
                + "\n1st Year Marks = " + yearI 
                + "\n2nd Year Marks = " + yearII 
                + "\nTotal Percentage = " + per);
              if(per>=70){
                System.out.println("Grade = A");
            }else if(per>=60){
                System.out.println("Grade = B");
            }else if(per>=50){
                System.out.println("Grade = C");
            }else if(per>=40){
                System.out.println("Grade = Pass");
            }else{
                System.out.println("Pass");
            }
        }
    }
}
