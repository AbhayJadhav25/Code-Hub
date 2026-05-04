import java.sql.*;
import java.util.*;
public class Q1{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/skillswap","root","Abhay123");

            DatabaseMetaData dbmd = con.getMetaData();

            System.out.println("Database Name : "+dbmd.getDatabaseProductName());

            System.out.println("Database Version : "+dbmd.getDatabaseProductVersion());

            ResultSet rs = dbmd.getTables(null,null,"%",null);

            System.out.println("\nTables : ");
            while(rs.next()){
                System.out.println("rs.getString(5)");
            }
            
            System.out.println("Enter Table Name : ");
            String tName = sc.next();

            ResultSet rs2 = dbmd.getColumns(null , null , tName , null);

            System.out.println("Columns in user Table : ");
            while(rs2.next()){
                System.out.println(rs2.getString("COLUMN_NAME"));
            }
        }catch(Exception e){
            System.out.println(e);
        }
    }
}
