package testafuncionarioexception;


public class Funcionario {
    private double salario;
    
    public void aumentaSalario(double aumento){
        if (aumento < 0){
            IllegalArgumentException erro = new IllegalArgumentException();
            throw erro;
        }
    }
}
