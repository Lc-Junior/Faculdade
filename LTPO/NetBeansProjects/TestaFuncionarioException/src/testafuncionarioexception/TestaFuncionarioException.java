package testafuncionarioexception;

public class TestaFuncionarioException {

    public static void main(String[] args) {
        Funcionario f = new Funcionario();
        
        try{
        f.aumentaSalario(-1000);
        } catch(IllegalArgumentException e){
            System.out.println("Houve um erro ao aumentar o salário. \nDigite apenas valores positivos!");
        }
    }
    
}
