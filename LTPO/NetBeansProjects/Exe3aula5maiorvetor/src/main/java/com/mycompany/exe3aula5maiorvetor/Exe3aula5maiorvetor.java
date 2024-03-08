
package com.mycompany.exe3aula5maiorvetor;

import java.util.Scanner;

public class Exe3aula5maiorvetor {

    public static void main(String[] args) {
        float numeros[] = new float[10];
        Scanner leia = new Scanner(System.in);
       
        for(int i = 0;i<10;i++){
            System.out.println("Digite o "+ (i+1) + "º número ");
            numeros[i] = leia.nextFloat();
    }
        System.out.println("\n\nO maior dos números digitados foi: " + descobrirMaior(numeros));
        
}

    private static float descobrirMaior(float[] numeros) {
        float maior = 0;
            for(int i=0; i < 10; i++){
                    if(numeros[i] > maior){
                maior = numeros[i];
            }
            }
        return maior;
        }
    }
