package exemplo2imc;
import java.util.Scanner;
public class Exemplo2IMC {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        
        float peso, altura, imc;
        
        System.out.printf("Informe o peso Corporal em kg:");
        peso = ler.nextFloat();
        System.out.printf("Informe a altura em metros...:");
        altura = ler.nextFloat();
        
        imc = (peso/(altura*altura));
        //imc = IMC(peso, altura);
        
        System.out.printf("===============================\n");
        System.out.printf("\nValor do IMC: %.2f" + IMC(peso, altura));
        System.out.printf("\nValor do IMC: %.2f" + resultadoIMC(imc));
        
        if(imc < 20){
            System.out.printf("IMC = %.2f (Magro!)", imc);
        }
        else if(imc >= 20 && imc < 24){
            System.out.printf("IMC = %.2f (Normal!)", imc);
        }
        else if(imc >= 24 && imc < 29){
            System.out.printf("IMC = %.2f (Acima do peso!)", imc);
        }
        else if(imc >= 29 && imc < 34){
            System.out.printf("IMC = %.2f (Obeso!)", imc);
        }
        else if(imc >= 34){
            System.out.printf("IMC = %.2f (Muito obeso!)", imc);
        }
        System.out.printf("\n===============================");
    }
    
    
    
    
    
    public static float IMC(float peso, float altura){
        return (peso/ (altura*altura));
    }
    
    public static String resultadoIMC(float imc){
        if(imc < 20){
            return("Magro!");
        }
        else if(imc >= 20 && imc < 24){
            return("Normal!");
        }
        else if(imc >= 24 && imc < 29){
            return("Acima do peso!");
        }
        else if(imc >= 29 && imc < 34){
            return("Obeso!");
        }
        else return("Muito obeso!");
    }
}
