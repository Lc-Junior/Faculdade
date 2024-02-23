/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package primeiroprograma;

/**
 *
 * @author 202211684
 */
public class PrimeiroPrograma {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        float nota1, nota2, nota3, media;
        nota1 = 8; nota2 = 7.8F;nota3 = 9;
        media = (nota1+nota2+nota3)/3;
        System.out.println("Media das notas foi: "+media);
        if(media >= 6){
            System.out.println("Parabéns! Você foi aprovado!");
            }
        else{
            System.out.println("Você foi reprovado!");
        }
    }
    
}
