package br.com.controle;

public class Vendas {
    private double valor;

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
    
    public double desconto(){
        return this.valor*0.1;
    }
}
