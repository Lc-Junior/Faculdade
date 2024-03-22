package testaconta;

public class Conta {
    private double saldo;
    private double limite = 500;
    private int numero;

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }
  
    
public void deposita (double valor){
    this.saldo += valor;
}

public double consultaSaldoDisponivel(){
    return this.saldo + this.limite;
}

public void saque(double valor){
    if( valor<=0){
         System.out.println("Não pode sacar valor zero ou negativo!");
    }
    else if(valor > (this.saldo+this.limite)){
        System.out.println("Saldo indisponível!");
    }
    else{
        this.saldo -= valor;
    }
}
    
}