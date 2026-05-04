import java.io.*;
class Q3{
    public static void main(String args[]){
        if(args.length == 0){
            System.out.println("Provide Input.Try again");
            System.exit(0);
        }
        String input = args[0];
        File f = new File(input);

        if(!f.exists()){
            System.out.println("Not a such file.");
            System.exit(0);
        }
        if(f.isDirectory()){
            int count = 0;
            System.out.println(input+" is a directory.");
            File files[] = f.listFiles(); 

            System.out.println("File name ends with .txt");
            for(File file : files){
                if(file.isFile()){
                    count++;
                }
                if(file.isFile() && file.getName().endsWith(".txt")){
                    System.out.println(file.getName());
                }
            }
            System.out.println("Total Files  =  "+count);
        }else if(f.isFile()){
            System.out.println(input+" is File.");
            System.out.println("Absolute Path =  "+f.getAbsolutePath());
            System.out.println("Size of file  =  "+f.length());
            System.out.println("Attribute 1 : Can Read= "+f.canRead());
            System.out.println("Attribute 2 : Can Write= "+f.canWrite());
            System.out.println("Attribute 3 : Can Execute= "+f.canExecute());
        }
    }
}