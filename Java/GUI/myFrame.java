import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;
import java.awt.Dimension;

public class myFrame extends JFrame implements ActionListener {
    JButton button;
    JTextField textfield;
    myFrame() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new FlowLayout());

        button = new JButton("Submit");
        button.addActionListener(this);

        textfield = new JTextField();
        textfield.setPreferredSize(new Dimension(250, 40));

        this.add(button);
        this.add(textfield);
        this.pack();
        this.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button) {
            System.out.println("Welcome "+textfield.getText());
        }
    }
}
