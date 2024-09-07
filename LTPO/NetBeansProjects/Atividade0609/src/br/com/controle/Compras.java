package br.com.controle;

public class Compras {
    private double compra;
                double menor;
                double desconto=0;

    public double getCompra() {
        return compra;
    }

    public void setCompra(double compra) {
        this.compra = compra;
    }
                
    public double calcularCompra(String valor){
        this.compra = Double.valueOf(valor);
        
        if(menor < this.compra){
            menor = this.compra;
        }
        
        if(this.compra < 500){
            desconto += this.compra*0.05;
            this.compra = this.compra*0.95;
            
        }
        else if(this.compra >= 500){
            desconto += this.compra*0.03;
            this.compra = this.compra*0.97;
        }

        return compra;
    }
    
    public double respDescontoCompra(){
        return desconto;
    }
    
    public double respMenorCompra(){
        return menor;
    }
    
}
