import javax.sound.sampled.*;
import java.io.File;
import java.util.Scanner;
import java.io.IOException;

public class audio_player {
    public static void main(String[] args) throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        Scanner scanner = new Scanner(System.in);
        File file = new File("sound.wav");

        AudioInputStream audiostream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();

        clip.open(audiostream);
        
        String response = "";

        while(!response.equalsIgnoreCase("Q")) {
            System.out.println("P - Play, S - Stop, R - Reset, Q - Quit");
            System.out.print("Enter your choice ");
            response = scanner.next().toUpperCase();

            switch(response) {
                case "P":
                    clip.start();
                    break;
                case "S":
                    clip.stop();
                    break;
                case "R":
                    clip.setMicrosecondPosition(0);
                    break;
                case "Q":
                    clip.close();
                    break;
                default:
                    System.out.println("Invalid choice");
                    break;
            }

        }

        System.out.println("Byeee");
        scanner.close();
    }
}
