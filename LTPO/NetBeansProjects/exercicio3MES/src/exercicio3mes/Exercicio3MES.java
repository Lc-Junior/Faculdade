package exercicio3mes;
import java.util.Scanner;

public class Exercicio3MES {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        
        int i; 
        String nomeMes[]={"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro", };
        System.out.printf("================\n");
        System.out.printf("Mês- Nome do mês");
        System.out.printf("\n================\n");
        
        for(i=0;i<12;i++){
            System.out.printf("%0,2d- %s\n", i+1, nomeMes[i]);

        }
        System.out.printf("================\n");

    }
}
