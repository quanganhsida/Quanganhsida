import java.util.*;
import java.sql.*;

public class Delete {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String url = "jdbc:mysql://localhost:3306/demo1"; //truy nhap database
        String user = "root";
        String password = "";
        String sql = "select * from demo1"; //Lay het data trong database

        try{
            Connection conn = DriverManager.getConnection(url, user, password);
            Statement statement = conn.createStatement();
            System.out.println("Delete user: ");
            String p = sc.nextLine();
            String sql1 = "DELETE FROM `demo1` WHERE User = '" + p +"'";
            statement.executeUpdate(sql1);
            System.out.println("Delete complete !");
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
