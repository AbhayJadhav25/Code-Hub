import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q1 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Login Form");
       
        // frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JLabel userLabel = new JLabel("Username");
        JTextField userText = new JTextField(15);

        JLabel passLabel = new JLabel("Password");
        JPasswordField passText = new JPasswordField(15);

        JButton submit = new JButton("Submit");
        JButton cancel = new JButton("Cancel");

        frame.add(userLabel);
        frame.add(userText);
        frame.add(new Label("          "));
        frame.add(passLabel);
        frame.add(passText);
        frame.add(new Label("            "));
        frame.add(submit);
        frame.add(cancel);

        submit.addActionListener(e->{
            String user = userText.getText();
            String password = new String(passText.getPassword());
        
            if(user.equals(password)){
                JOptionPane.showMessageDialog(frame , "Correct login details");
            }else{
                JOptionPane.showMessageDialog(frame ,"Invalid Credentials");
            }
        });

        cancel.addActionListener(e->{
            userText.setText("");
            passText.setText("");
        });
         frame.setSize(300,200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
