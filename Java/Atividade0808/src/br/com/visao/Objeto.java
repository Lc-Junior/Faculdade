package br.com.visao;

import br.com.controle.Vendas;
import javax.swing.JOptionPane;

public class Objeto {
    public static void main(String[] args) {
       Vendas v = new Vendas();
       v.setValor(Integer.valueOf(JOptionPane.showInputDialog("Digite um valor:")));
       JOptionPane.showMessageDialog(null, v.calcularDesconto());
    }
    
}
