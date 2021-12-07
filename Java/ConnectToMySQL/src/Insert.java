import java.sql.*;
import java.util.*;

public class Insert {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String url = "jdbc:mysql://localhost:3306/demo1"; //truy nhap database
        String user = "root";
        String password = "";
        int i;
        String u, p;
        String sql = "select * from demo1"; //Lay het data trong database
        try{
            Connection conn = DriverManager.getConnection(url, user, password);
            Statement statement = conn.createStatement();
            System.out.println("Insert user: ");
            u = sc.nextLine();
            System.out.println("Insert password:");
            p = sc.nextLine();
            String sql1 = "INSERT INTO `demo1`(`User`, `Password`) VALUES ('"
            + u + "','" + p +"')";
            statement.executeUpdate(sql1);
            System.out.println("Insert complete !");
            ResultSet rs = statement.executeQuery(sql);
            while(rs.next()){
                System.out.println(rs.getString("User") + " - " + rs.getString("Password"));
            }
        }
        catch (Exception e){
            e.printStackTrace();
        }
    }
}
