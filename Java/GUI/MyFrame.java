import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class MyFrame extends JFrame implements ActionListener{
    JButton button = new JButton();
    MyFrame() {

        button.setBounds(200, 100, 100, 50);
        button.addActionListener(this);
        button.setText("I am a button");
        button.setSize(150, 50);
        button.setFocusable(false);
        // button.addActionListener(e -> System.out.println("Poo");) // lambda function
        this.setLayout(null);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500,500);
        this.setVisible(true);
        this.add(button);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource()==button) {
            System.out.println("Poo");
        }
    }
}
