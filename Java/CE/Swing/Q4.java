import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
class Q4{
    public static void main(String args[]){
        JFrame frame = new JFrame("Number Conversion System");
        frame.setSize(500 , 300);
        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout(5,5));
        panel.setBorder(BorderFactory.createEmptyBorder(20,20,20,20));

        JPanel BoxPanel = new JPanel();
        BoxPanel.setLayout(new GridLayout(4,2));

        JLabel decimal = new JLabel("Decimal");
        JTextField decimalText = new JTextField(15);

        JLabel binary = new JLabel("Binary");
        JTextField binaryText = new JTextField(15);

        JLabel octal = new JLabel("Octal");
        JTextField octalText = new JTextField(15);

        JLabel hexaDecimal = new JLabel("Hexadecimal");
        JTextField hexadecimalText = new JTextField(15);

        JPanel btnPanel = new JPanel(new FlowLayout());
        JButton btn = new JButton("Convert");
        JButton exit = new JButton("Exit");

        JPanel row1 = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JPanel row2 = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JPanel row3 = new JPanel(new FlowLayout(FlowLayout.LEFT));
        JPanel row4 = new JPanel(new FlowLayout(FlowLayout.LEFT)); 

        row1.add(decimal);
        row1.add(decimalText);
        row2.add(binary);
        row2.add(binaryText);
        row3.add(octal);
        row3.add(octalText);
        row4.add(hexaDecimal);
        row4.add(hexadecimalText);
        
        BoxPanel.add(row1);
        BoxPanel.add(row2);
        BoxPanel.add(row3);
        BoxPanel.add(row4);

        btnPanel.add(btn);
        btnPanel.add(exit);


        panel.add(BoxPanel ,BorderLayout.CENTER);
        panel.add(btnPanel , BorderLayout.SOUTH);

        btn.addActionListener(e->{
            int dec = Integer.parseInt(decimalText.getText());
            binaryText.setText(Integer.toBinaryString(dec));
            octalText.setText(Integer.toOctalString(dec));
            hexadecimalText.setText(Integer.toHexString(dec).toUpperCase());
        });

        exit.addActionListener(e->{
            System.exit(0);
        });
        frame.add(panel);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}