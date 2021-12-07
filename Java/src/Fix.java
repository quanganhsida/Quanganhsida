import java.util.*;
import java.sql.*;

public class Fix {
    public static void main(String[] args) {
        String url = "jdbc:mysql://localhost:3306/demo1";
        String user = "root";
        String password = "";
        Scanner sc = new Scanner(System.in);
        try{
            //1. Get a connection to DTB
            Connection conn = DriverManager.getConnection(url, user, password);
            
            //2. Create a statement
            Statement statement = conn.createStatement();
            
            //3. Execute SQL query
            System.out.println("Nhap cu phap: ");
            String sql1 = sc.nextLine();
            //String sql1 = "INSERT INTO `demo1`(`ID`, `User`, `Password`) VALUES ('2','Quanganhsida','123')";
            statement.executeUpdate(sql1);
            System.out.println("Insert success !");
            ResultSet rs = statement.executeQuery("select * from demo1");
            
            //4. Process the result set
            while (rs.next()){
                System.out.println(rs.getInt("ID") + " - " + rs.getString("User")
                        + " - " + rs.getString("Password"));
            }
        }
        catch (Exception e){
            e.printStackTrace();
        }
    }
}
