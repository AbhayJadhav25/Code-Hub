import javax.swing.*;
import java.awt.*;

public class Q3 {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Font Family");

        JTextArea textArea = new JTextArea(20,30);
        textArea.setEditable(false);

        GraphicsEnvironment ge = GraphicsEnvironment.getLocalGraphicsEnvironment();
        String[] font = ge.getAvailableFontFamilyNames();

        for(String fonts : font){
            textArea.append(fonts+"\n");
        }

        JScrollPane scroll = new JScrollPane(textArea);
        frame.add(scroll);

        frame.pack();
        frame.setSize(400,300);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
