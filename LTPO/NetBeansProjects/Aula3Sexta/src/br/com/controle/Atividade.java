package br.com.controle;

public class Atividade {
    private double valor;
                double soma;
                double media;
                       int qtd;

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
        soma += this.valor;
        qtd++;
        media=soma/qtd;
    }

    public double resp_Media(){
        return media;
    }
    
    public double resp_Soma(){
        return soma;
    }
    
    

    
}
