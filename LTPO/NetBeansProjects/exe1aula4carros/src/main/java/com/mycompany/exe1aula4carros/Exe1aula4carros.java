package com.mycompany.exe1aula4carros;


import java.util.Scanner;
import javax.swing.JOptionPane;


public class Exe1aula4carros {

    public static void main(String[] args) {
        int ano, contaGeral=0, conta2000=0;
        float valor, valorDesconto=0, valorVeiculo;
        String decisao;
        boolean continuar = true;
      while (continuar == true){
        Scanner leia = new Scanner(System.in);
        
        System.out.print("Digite valor do veiculo: ");
        valor = leia.nextFloat();
        System.out.print("Diginte ano do veiculo: ");
        ano = leia.nextInt();
        
        valorDesconto = valorDesc(ano, valor);
        
        System.out.println("Desconto: " + valorDesconto);
        valorVeiculo = (valor-valorDesconto);
        System.out.println("Valor do Veiculo: " + valorVeiculo);
        System.out.printf("Parcelado em 24 x de R$ %.2f sem juros", valorParcela(valorVeiculo));
        
        decisao = JOptionPane.showInputDialog("Deseja fazer outro calculo? S ou N");
        if (decisao.equals("S") || (decisao.equals("s"))){
            System.out.println("Novo Calculo");
        }else{
            System.out.println("Voce saiu");
            continuar = false;
        }
        
      }
        
    }
          
    public static float valorDesc(int anoCarro, float valorCarro){
        if (anoCarro <=2000){
           return(valorCarro*12)/100;
        }
        else {
           return(valorCarro*7)/100;
        }
    }

    private static float valorParcela(float valorVeiculo) {
        return valorVeiculo/24;
    }
    
}
