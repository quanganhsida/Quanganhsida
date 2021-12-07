import java.util.*;
import java.sql.*;

public class ConnectToMySQL {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/demo1"; //truy nhap database
        String user = "root";
        String password = "";
        String sql = "select * from demo1"; //Lay het data trong database
        try{
            //1. Get a connection to database
            Connection conn = DriverManager.getConnection(url, user, password);

            //2. Create a statement
            Statement statement = conn.createStatement();

            //3. Execute SQL query
            ResultSet rs = statement.executeQuery(sql);
            System.out.println("Connect success !");
            System.out.println("USER  -  PASSWORD");
            System.out.println("---------------------------------------");

            //4. Process the result set
            while (rs.next()){
                System.out.println(rs.getString("User") + " - " + rs.getString("Password"));
            }
        }
        catch(Exception e){
            e.printStackTrace();
        }

    }
}
