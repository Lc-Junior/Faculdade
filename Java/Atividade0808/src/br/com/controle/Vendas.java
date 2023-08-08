package br.com.controle;

public class Vendas {
    private int valor;

    public int getValor() {
        return valor;
    }

    public void setValor(int valor) {
        this.valor = valor;
    }
    
    public float calcularDesconto(){
        if(valor < 500){
        return (float) (this.valor*0.95);
    }
        
        return (float)(this.valor*0.90);
    }

}
