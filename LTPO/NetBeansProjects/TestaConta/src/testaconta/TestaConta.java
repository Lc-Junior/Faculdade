package testaconta;

import javax.swing.JOptionPane;

public class TestaConta {

    public static void main(String[] args) {
        /*
        Conta referencia = new Conta();
        referencia.setSaldo(2000);
        referencia.deposita(1000);
        referencia.saque(3501);
        referencia.setNumero(1);
        
        System.out.println("Saldo do Cliente: "+ referencia.getSaldo());
        System.out.println("Saldo tota do clientel: "+ referencia.consultaSaldoDisponivel());
        System.out.println("Limite do Cliente: "+referencia.getLimite());
        System.out.println("Número da Conta: "+referencia.getNumero());
        
        Cliente cliente1 = new Cliente();
        Cliente cliente2 = new Cliente();
        
        cliente1.setNome("João");
        cliente1.setCodigo(1);
        cliente2.setNome("Lucas");
        cliente2.setCodigo(2);
        
        System.out.println("\n\nNome do primeiro cliente: " + cliente1.getNome());
        System.out.println("Código do primeiro cliente: " + cliente1.getCodigo());
        
        System.out.println("Nome do segundo cliente: " + cliente2.getNome());
        System.out.println("Código do segundo cliente: " + cliente2.getCodigo());
        
        CartaoDeCredito cartao1 = new CartaoDeCredito();
        CartaoDeCredito cartao2 = new CartaoDeCredito();
        
        cartao1.setNumero(2189);
        cartao1.setDataDeValidade("07/08/2030");
        cartao2.setNumero(2750);
        cartao2.setDataDeValidade("02/05/2028");
        
        System.out.println("\n\nNúmero do primeiro cartão: " + cartao1.getNumero());
        System.out.println("Data de validade do segundo cartão: " + cartao1.getDataDeValidade());
        
        System.out.println("Número do segundo cartão: " + cartao2.getNumero());
        System.out.println("Data de validade do segundo cartão: " + cartao2.getDataDeValidade());

        Agencia agencia1 = new Agencia();
        Agencia agencia2 = new Agencia();
        
        agencia1.setNumero(58);
        agencia1.setUf("DF");
        agencia2.setNumero(26);
        agencia2.setUf("BA");
        
        System.out.println("\n\nNúmero da primeira Agência: " + agencia1.getNumero());
        System.out.println("Unidade Federativa da primeira Agência: " + agencia1.getUf());
        
        System.out.println("Número da segunda Agência: " + agencia2.getNumero());
        System.out.println("Unidade Federativa da segunda Agência: " + agencia2.getUf());
        
        
        
        CartaoDeCredito cdc = new CartaoDeCredito();
        Cliente c = new Cliente();
        
        cdc.cliente = c;
        cdc.cliente.setNome("João Paulo Pimentel");
        cdc.cliente.setCodigo(1);
        
        System.out.println("\n\nNome: " + cdc.cliente.getNome());
        System.out.println("Código: " + cdc.cliente.getCodigo());
        
        Agencia ag = new Agencia();
        Conta co = new Conta();
        
        ag.conta = co;
        ag.conta.setSaldo(1000);
        ag.conta.setNumero(1);
        
        System.out.println("Saldo da Conta: " + ag.conta.getSaldo());
        System.out.println("Numero da Conta: " + ag.conta.getNumero());
        
        */
        Conta cl = new Conta();
        double saldoDisponivel, saldoInicial;
        saldoInicial = cl.getSaldo();
        String valor = JOptionPane.showInputDialog("Digite um valor para deposito");
        double saldo = Double.parseDouble (valor);
        cl.setSaldo (saldo);
        saldoDisponivel = cl.getSaldo();
        String mensagem = String.format("Saldo inicial da Conta: "+saldoInicial + 
                "\nSaldo disponível após depósito: " + saldoDisponivel + "\nLimite do Cheque Especial: " +cl.getLimite()+
                "\nSaldo Total do Cliente: " + cl.consultaSaldoDisponivel());
        JOptionPane.showMessageDialog(null,mensagem);

        
        Cliente pessoa = new Cliente();
        String nome = JOptionPane.showInputDialog("Digite o nome do cliente");
        pessoa. setNome (nome) ;
        String mensagem2 = String. format ("Nome: "+pessoa.getNome());
        JOptionPane.showMessageDialog(null,mensagem2);

    }
    
}