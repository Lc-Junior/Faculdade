package br.com.controle;

public class Atividade {
    private double valor1, valor2;
                double media, maiorMedia, mediaTotal;
                       int qtd;

    public double getValor1() {
        return valor1;
    }

    public void setValor1(double valor1) {
        this.valor1 = valor1;
    }

    public double getValor2() {
        return valor2;
    }

    public void setValor2(double valor2) {
        this.valor2 = valor2;
    }

    public void calculo(double valor1, double valor2){
        media = (valor1+valor2)/2;
            if(media > maiorMedia){
                maiorMedia = media;
            }
            mediaTotal += media;
            qtd++;
            
    }

    public double mediaTotal(){
        return mediaTotal/qtd;
    }
    
    public double maiorMedia(){
        return maiorMedia;
    }
    
    
    

    
}
