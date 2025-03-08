package br.com.controle;

public class Simular {
    private double valor;
    private double juros;
    private double meses;

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public double getJuros() {
        return juros;
    }

    public void setJuros(double juros) {
        this.juros = juros;
    }

    public double getMeses() {
        return meses;
    }

    public void setMeses(double meses) {
        this.meses = meses;
    }
    
    public double calculaJuros(){
        return valor*(this.juros/100)*(this.meses)-valor;
    }
    
    public double calculaMontante(){
        return valor*(this.juros/100)*(this.meses);
    }
}
