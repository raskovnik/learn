import java.awt.event.*;
import javax.swing.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.FlowLayout; 

public class MyFrame extends JFrame implements ActionListener {
    JMenuBar menuBar;
    JMenu fileMenu;
    JMenu editMenu;
    JMenu helpMenu;
    JMenuItem loadItem;
    JMenuItem saveItem;
    JMenuItem exitItem;

    MyFrame() {
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500,500);
        this.setLayout(new FlowLayout());
        
        menuBar = new JMenuBar();
        fileMenu = new JMenu("File");
        editMenu = new JMenu("Edit");
        helpMenu = new JMenu("Help");

        loadItem = new JMenuItem("Load");
        saveItem = new JMenuItem("Save");
        exitItem = new JMenuItem("Exit");

        loadItem.addActionListener(this);
        saveItem.addActionListener(this);
        exitItem.addActionListener(this);

        fileMenu.add(loadItem);
        fileMenu.add(saveItem);
        fileMenu.add(exitItem);

        menuBar.add(fileMenu);
        menuBar.add(editMenu);
        menuBar.add(helpMenu);

        this.setJMenuBar(menuBar);

        this.setVisible(true);


    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == loadItem) {
            System.out.println("Loading an item");
        }
        else if (e.getSource() == saveItem) {
            System.out.println("Saving an item");
        }
        if (e.getSource() == exitItem) {
            System.out.println("Exiting");
            System.exit(0);
        }
    }
}
