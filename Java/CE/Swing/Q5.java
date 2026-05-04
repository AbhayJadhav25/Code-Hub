import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
public class Q5 {
    public static void main(String args[]){
        JFrame frame = new JFrame();
        frame.setSize(300,200);
        frame.setLayout(new GridLayout(5,1,10,10));
        Font font = new Font("Arial" , Font.PLAIN , 14);
        JPanel p1 = new JPanel();

        JLabel fontLabel = new JLabel("Font Family");
        fontLabel.setFont(font);
        String fonts[] = {"Arial","Time New Roman","Courier"};
        JComboBox<String> cb = new JComboBox<String>(fonts);
        p1.add(fontLabel);
        p1.add(cb);

        JPanel p2 = new JPanel();
        JLabel fontSize = new JLabel("Font Size");
        fontSize.setFont(font);
        JTextField sizeText = new JTextField(5);
        p2.add(fontSize);
        p2.add(sizeText);

        JPanel p3 = new JPanel();
        JLabel fontStyle = new JLabel("Font Style");
        fontStyle.setFont(font); 
        JCheckBox b1 = new JCheckBox("Bold");
        JCheckBox b2 = new JCheckBox("Italic");
        p3.add(fontStyle);
        p3.add(b1);
        p3.add(b2);

        JPanel p4 = new JPanel();
        JTextField t2 = new JTextField("Hello , Everyone");
        t2.setPreferredSize(new Dimension(200, 40));
        t2.setEditable(false);
        p4.add(t2);

        JPanel p5 = new JPanel();
        JButton apply = new JButton("Apply");
        JButton exit = new JButton("Exit");
        p5.add(apply);
        p5.add(exit);

        frame.add(p1);
        frame.add(p2);
        frame.add(p3);
        frame.add(p4);
        frame.add(p5);
        
        apply.addActionListener(e->{
            String fontName = (String)cb.getSelectedItem();
            int size = Integer.parseInt(sizeText.getText());

            int style = Font.PLAIN;
            if(b1.isSelected()) style |= Font.BOLD;
            if(b2.isSelected()) style |= Font.ITALIC;

            t2.setFont(new Font(fontName , style,size));
        });

        exit.addActionListener(e->{
            System.exit(0);
        });
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
