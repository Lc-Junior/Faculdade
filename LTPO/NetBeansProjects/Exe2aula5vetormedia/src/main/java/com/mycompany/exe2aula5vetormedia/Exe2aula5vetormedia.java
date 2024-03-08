package com.mycompany.exe2aula5vetormedia;

import java.util.Scanner;

public class Exe2aula5vetormedia {
    
    public static void main(String[] args) {
        float numeros[] = new float[5];
        Scanner leia = new Scanner(System.in);
       
        for(int i = 0;i<5;i++){
            System.out.println("Digite o "+ (i+1) + "º número ");
            numeros[i] = leia.nextFloat();
    }
        System.out.println("\n\nA média dos números digitados foi: " + calculoMedia(numeros));
        
}

    private static float calculoMedia(float[] numeros) {
        float media = 0;
            for(int i=0; i < 5; i++){
                media += numeros[i];
            }
        return (media/5);
        }
    }