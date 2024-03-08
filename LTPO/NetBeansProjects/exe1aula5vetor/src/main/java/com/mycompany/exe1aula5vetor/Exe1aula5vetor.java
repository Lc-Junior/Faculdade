package com.mycompany.exe1aula5vetor;

import java.util.Arrays;
import java.util.Scanner;

public class Exe1aula5vetor {

    public static void main(String[] args) {
        //String[] nomes = new String[]{"José", "Maria", "Lucas", "Amanda", "Beatriz", "Luis"};
        String[] nomes = new String[5];
        Scanner leia = new Scanner(System.in);
        for(int i = 0;i<5;i++){
            System.out.println("Digite o "+ (i+1) + "º nome ");
            nomes[i] = leia.nextLine();
        }
        Arrays.sort(nomes);
        System.out.println("\n\nNomes organizados:\n");
        imprimeNomes(nomes);
        
    }
  
    private static void imprimeNomes(String[] nomes) {
        for(String nome : nomes){
            System.out.println(nome);
        }
    }
}
