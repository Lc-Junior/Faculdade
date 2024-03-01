package calculadorabasica;

import java.util.Scanner;

public class CalculadoraBasica {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int valor1=0, valor2=0,x=0;
        String condicao = null;
       
        do{
            System.out.printf("Digite o primeiro valor: ");
            valor1 = ler.nextInt();
            System.out.printf("\nDigite o segundo valor: ");
            valor2 = ler.nextInt();
            
            
            System.out.printf("\n==================\n");
            System.out.printf("Calculadora Básica\n");
            System.out.printf("==================\n\n");
            
            System.out.printf("1 - Soma\n");
            System.out.printf("2 - Subtracao\n");
            System.out.printf("3 - Divisao\n");
            System.out.printf("4 - Multiplicacao\n");
            x = ler.nextInt();
            
        switch(x){
            case 1:
                System.out.printf("A Soma de %d + %d e igual a: %d\n" ,valor1, valor2,(valor1+valor2));
                break;
            case 2:
                System.out.printf("A Subtracao de %d + %d e igual a: %d\n" ,valor1, valor2,(valor1-valor2));
                break;
            case 3:
                if(valor1 == 0 || valor2 == 0){
                    System.out.printf("Impossível divisão por 0!");
                }
                System.out.printf("A Divisao de %d + %d e igual a: %d\n" ,valor1, valor2,(valor1/valor2));
                break;
            case 4:
                System.out.printf("A Multiplicacao de %d + %d e igual a: %d\n" ,valor1, valor2,(valor1*valor2));
                break;
            default:
                System.out.printf("Opção inválida!");
                
        }
        
        
        System.out.printf("\nDeseja fazer mais um cálculo? S ou N\n");
        condicao = ler.next();
        } while(!condicao.equals("N"));
        
    }
    
}
