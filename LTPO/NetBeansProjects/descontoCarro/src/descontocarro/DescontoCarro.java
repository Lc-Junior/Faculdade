package descontocarro;
import java.util.Scanner;

public class DescontoCarro {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        float valorVeiculo, valorDesconto;
        int anoVeiculo, cont2000=0,contGeral=0;
        String condicao = null;
        
        do{
        System.out.printf("Digite o valor do Veiculo: ");
        valorVeiculo = ler.nextFloat();
        System.out.printf("Digite o ano do Veiculo: ");
        anoVeiculo = ler.nextInt();
        if(anoVeiculo<=2000){
            cont2000++;
        }
        contGeral++;
        valorDesconto = CalculoDesconto(valorVeiculo, anoVeiculo);
        System.out.printf("Valor do Desconto: "+ valorDesconto);
        System.out.printf("\nValor a ser pago: "+ (valorVeiculo-valorDesconto));

        System.out.printf("\nDeseja fazer mais um cálculo?\n");
    
        condicao = ler.next();
        } while(!condicao.equals("N"));
        
        
        System.out.printf("\nContagem total: " + contGeral);
        System.out.printf("\nContagem de carros antes de 2000: " +cont2000);

    }
    public static float CalculoDesconto(float valorVeiculo, int anoVeiculo){
        if(anoVeiculo <= 2000){
            return (float) (valorVeiculo*0.12);
        }
        else{
            return (float) (valorVeiculo*0.07);
            
        }
    }
}
