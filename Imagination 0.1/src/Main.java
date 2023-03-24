
// ExitCode 12345 è per uscita con System.exit


import java.util.Scanner;
import java.util.concurrent.TimeUnit;
public class Main {
    public static void main(String[] args) throws InterruptedException {

        String player, tipo;
        int x, risposte = 0;

        System.out.println("TAVERNIERE: Salute viandante...");
        //TimeUnit.SECONDS.sleep(3);
        System.out.println("TAVERNIERE: TU... NON PUOI... PASSARE!");
        //TimeUnit.SECONDS.sleep(3);
        System.out.println("TAVERNIERE: Ah no scusa sono un po'confuso");
        //TimeUnit.SECONDS.sleep(3);
        player = inputString("TAVERNIERE: Dimmi un po'... Qual è il tuo nome?");
        System.out.println("TAVERNIERE: Ah, " + player + ". Molto piacere, io sono...");
        //TimeUnit.SECONDS.sleep(3);
        System.out.println("E mentre il TAVERNIERE stava dicendo il suo nome, un'esplosione distrusse tutto");
        //TimeUnit.SECONDS.sleep(3);
        System.out.println("E da qui ebbe inizio la storia di " + player);
        //TimeUnit.SECONDS.sleep(3);

        do{
            try {
                risposte = inputInt("Sei pronto?\n[1]SI\n[2]NO");
                if(risposte == 2){
                    System.out.println("ALLORA ADDIO");
                    //TimeUnit.SECONDS.sleep(3);
                    System.exit(12345);
                }else if(risposte != 1){
                    System.out.println("Non ho capito bene");
                }
            } catch(Exception e){
                System.out.println("Non ho capito bene");
            }
        } while(risposte != 1 && risposte != 2);


        System.out.println(player + " si risveglia in una strana caverna");
        System.out.println("D'ora in poi potrai fare le tue scelte, scegliendo il numero della scelta");
        risposte = inputInt("-----MENU-----\n[1]CHI SONO?\n[2]COSA CI FACCIO QUI?\n[3]DOV'È FINITA LA TAVERNA?\n");
        switch(risposte){

        }





    }

    public static String inputString(String string){
        Scanner scanner = new Scanner(System.in);
        System.out.println(string);
        return scanner.nextLine();
    }

    public static int inputInt(String string){
        Scanner scanner = new Scanner(System.in);
        System.out.println(string);
        return scanner.nextInt();
    }


}