import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q2 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Student Marks");
        frame.setSize(400,400);

        JPanel panel = new JPanel();
        panel.setLayout(new BorderLayout(10,10));
        panel.setBorder(BorderFactory.createEmptyBorder(20,400,20,400));
        JPanel formPanel = new JPanel(new GridLayout(0,2,10,10));

        JLabel rollNo = new JLabel("Roll NO : ");
        JTextField rollText = new JTextField(10);
        rollText.setMaximumSize(rollText.getPreferredSize());

        JLabel name = new JLabel("Name : ");
        JTextField nameText = new JTextField(10);
        nameText.setMaximumSize(nameText.getPreferredSize());

        JLabel sub1 = new JLabel("Subject 1 : ");
        JTextField sub1Text =new JTextField(10);
        sub1Text.setMaximumSize(sub1Text.getPreferredSize());


        JLabel sub2 = new JLabel("Subject 2 : ");
        JTextField sub2Text =new JTextField(10);
        sub2Text.setMaximumSize(sub2Text.getPreferredSize());


        JLabel sub3 = new JLabel("Subject 3 : ");
        JTextField sub3Text =new JTextField(10);
        sub3Text.setMaximumSize(sub3Text.getPreferredSize());
        

        JLabel sub4 = new JLabel("Subject 4 : ");
        JTextField sub4Text =new JTextField(10);
        sub4Text.setMaximumSize(sub4Text.getPreferredSize());


        formPanel.add(rollNo);
        formPanel.add(rollText);
        formPanel.add(name);
        formPanel.add(nameText);
        formPanel.add(sub1);
        formPanel.add(sub1Text);
        formPanel.add(sub2);
        formPanel.add(sub2Text);
        formPanel.add(sub3);
        formPanel.add(sub3Text);
        formPanel.add(sub4);
        formPanel.add(sub4Text);

        JPanel buttonPanel = new JPanel(new FlowLayout());
        JButton result = new JButton("Result");

        buttonPanel.add(result);

        JLabel per = new JLabel("Percentage =  ");
        JTextField perText =new JTextField(10);
        perText.setMaximumSize(perText.getPreferredSize());


        JLabel mark = new JLabel("Total Marks : ");
        JTextField markText =new JTextField(10);
        markText.setMaximumSize(markText.getPreferredSize());
        

        JLabel grade = new JLabel("Grade");
        JTextField greadeText =new JTextField(10);
        greadeText.setMaximumSize(greadeText.getPreferredSize());


        formPanel.add(mark);
        formPanel.add(markText);
        formPanel.add(per);
        formPanel.add(perText);
        formPanel.add(grade);
        formPanel.add(greadeText);

        Font labelFont = new Font("Arial" , Font.BOLD ,16);
        rollNo.setFont(labelFont);
        name.setFont(labelFont);
        name.setFont(labelFont);
        sub1.setFont(labelFont);
        sub2.setFont(labelFont);
        sub3.setFont(labelFont);
        sub4.setFont(labelFont);
        per.setFont(labelFont);
        mark.setFont(labelFont);
        grade.setFont(labelFont);

        panel.add(formPanel , BorderLayout.CENTER);
        panel.add(buttonPanel , BorderLayout.SOUTH);

        frame.add(panel);
        frame.pack();
        frame.setLocationRelativeTo(null);
        
        result.addActionListener(e->{
            int s1 = Integer.parseInt(sub1Text.getText());
            int s2 = Integer.parseInt(sub2Text.getText());
            int s3 = Integer.parseInt(sub3Text.getText());
            int s4 = Integer.parseInt(sub4Text.getText());
            
            int total = s1+s2+s3+s4;
            double avg = total/4.0;

            String Grade = "";

            if(avg>=75){
                Grade = "A+";
            }else if(avg>=60){
                Grade="A";
            }else if(avg>=50){
                Grade="B";
            }else if(avg>=35){
                Grade="Pass";
            }else{
                Grade="Fail";
            }

            perText.setText(String.valueOf(avg));
            markText.setText(String.valueOf(total));
            greadeText.setText(Grade);
        });
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
