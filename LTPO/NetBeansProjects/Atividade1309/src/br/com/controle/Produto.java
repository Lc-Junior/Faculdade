package br.com.controle;

public class Produto {
    private double preco;
    private int quantidade;
    private String nome;
                int estoque;
                double total; 
   
    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getEstoque() {
        return estoque;
    }

    public void setEstoque(int estoque) {
        this.estoque = estoque;
    }
    
    public void cadastroProduto(String nome, double preco, int quantidade){
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
        this.estoque += quantidade;
    }
    
    public void venderProduto(double preco, int quantidade){
       this.preco -= preco;
       this.quantidade -= quantidade;
       this.estoque -= quantidade;
       this.total += this.preco;
    }
    
    public double maisVendido(Double total){
        return total;
    }
}
