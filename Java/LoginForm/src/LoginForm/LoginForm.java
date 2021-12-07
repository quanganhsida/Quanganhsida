package LoginForm;

import javax.swing.*;
import java.awt.*;

public class LoginForm extends JFrame{
    private JTextField UserText;
    private JPanel panel1;
    private JTextField PasswordText;
    private JButton loginButton;
    private JFrame frame;

    public LoginForm(){
        frame = new JFrame("Login Frame");
        frame.getDefaultCloseOperation(EXIT_ON_CLOSE);
        frame.setPreferredSize(new Dimension(250, 200));
        frame.setResizable(false);

        //add the panel
        frame.add(panel1);

        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}
