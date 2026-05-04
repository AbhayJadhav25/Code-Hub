import java.io.*;

class Q1 {
    public static void main(String args[]) {
        try {
            File file1 = new File(args[0]);
            BufferedReader br = new BufferedReader(new FileReader(file1));
            BufferedWriter wrOdd = new BufferedWriter(new FileWriter("odd.txt"));
            BufferedWriter wrEven = new BufferedWriter(new FileWriter("even.txt"));

            int lineCount = 0;
            String line;
            while ((line = br.readLine()) != null) {
                if (lineCount % 2 == 0) {
                    wrEven.write(line);
                    wrEven.newLine();
                } else {
                    wrOdd.write(line);
                    wrOdd.newLine();
                }
                lineCount++; // <-- increment here
            }

            // Always close resources
            br.close();
            wrOdd.close();
            wrEven.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
