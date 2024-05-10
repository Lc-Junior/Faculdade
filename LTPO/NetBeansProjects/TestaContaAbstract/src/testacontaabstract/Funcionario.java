package testacontaabstract;

abstract class Funcionario {
    private String nome;
    double salario;

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
        public abstract double calculaBonificacao();

        
}
