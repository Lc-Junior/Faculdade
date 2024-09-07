package br.com.controle;


public class Semestre {
    private double nota1;
    private double nota2;
    private double media;
                double maior;
                double total;
                       int qtd;

    public double getNota1() {
        return nota1;
    }

    public void setNota1(double nota1) {
        this.nota1 = nota1;
    }

    public double getNota2() {
        return nota2;
    }

    public void setNota2(double nota2) {
        this.nota2 = nota2;
    }
    
    public double calcularMedia(){
        this.media = (this.nota1 + this.nota2)/2;
        total += this.media;
        qtd++;
        if(this.media > maior){
            maior = this.media;
        }
        return media;
    }
    
    public double calcularMedia(String v1, String v2){
        this.media = (Double.valueOf(v1)+ Double.valueOf(v2))/2;
        total += this.media;
        qtd++;
        if(this.media > maior){
            maior = this.media;
        }
        return media;
    }
    
    public double respMaiorMedia(){
        return maior;
    }
    
    public double respMediaTurma(){
        return total/qtd;
    }
                
}
