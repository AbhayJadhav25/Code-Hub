import java.io.*;
public class Q5 {
    public static void main(String[] args) throws Exception{
        if(args.length != 1){
            System.out.println("Enter filename");
            System.exit(0);
        }
        int line = 1;
        String line1 ,line2;
        String input = args[0];
        BufferedReader br1 = new BufferedReader(new FileReader("even.txt"));
        BufferedReader br2= new BufferedReader(new FileReader("odd.txt"));

        BufferedWriter wr = new BufferedWriter(new FileWriter(args[0] , true));
        // System.out.println(new File("odd.txt").getAbsolutePath());
        while(true){
            line1 = br1.readLine();
            line2 = br2.readLine();

            System.out.println(line1);
            System.out.println(line2);
            if(line2 != null){
                wr.write(line2);
                wr.newLine();
            }

            if(line1 != null){
                wr.write(line1);
                wr.newLine();
            }

            if(line1==null && line2==null){
                break;
            }
        }
        br1.close();
        br2.close();
        wr.flush();
        wr.close();
    }
}
