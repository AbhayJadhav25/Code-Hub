import java.io.*;
import java.util.*;
public class Q4 {
    public static void main(String[] args) throws Exception{
        if(args.length != 1){
            System.out.println("Enter File name = ");
            System.exit(0);
        }
        int lineCount = 0 , wordCount = 0 , characterCount = 0;
        String line;
         File f = new File(args[0]);
        BufferedReader br = new BufferedReader(new FileReader(args[0]));
       
        if(!f.exists()){
            System.out.println("Not any file avilable.");
            System.exit(0);
        }
        if(f.isFile()){
            while((line = br.readLine())!=null){
                lineCount++;
                characterCount+=line.length();

                if(!line.trim().isEmpty()){
                    String words[] = line.trim().split("\\s+");
                    wordCount+=words.length;
                }

            }
            System.out.println("Number of line = "+lineCount);
            System.out.println("Number of Characters = "+characterCount);
            System.out.println("Number of Words = "+wordCount);
        }else{
            System.out.println(args[0]+"is not a File");
        }
    }
}
