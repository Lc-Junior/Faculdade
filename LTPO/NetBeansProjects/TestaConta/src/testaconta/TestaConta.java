package testaconta;

public class TestaConta {

    public static void main(String[] args) {
        
        Conta referencia = new Conta();
        referencia.saldo = 1000.0;
        //referencia.limite = 500.0;
        referencia.numero = 1;
        
        System.out.println("Saldo do Cliente: "+referencia.saldo);
        System.out.println("Limite do Cliente: "+referencia.limite);
        System.out.println("Número da Conta: "+referencia.numero);
        
        Cliente cliente1 = new Cliente();
        Cliente cliente2 = new Cliente();
        
        cliente1.nome = "João";
        cliente1.codigo = 1;
        cliente2.nome = "Lucas";
        cliente2.codigo = 2;
        
        System.out.println("\n\nNome do primeiro cliente: " + cliente1.nome);
        System.out.println("Código do primeiro cliente: " + cliente1.codigo);
        
        System.out.println("Nome do segundo cliente: " + cliente2.nome);
        System.out.println("Código do segundo cliente: " + cliente2.codigo);
        
        CartaoDeCredito cartao1 = new CartaoDeCredito();
        CartaoDeCredito cartao2 = new CartaoDeCredito();
        
        cartao1.numero = 2189;
        cartao1.dataDeValidade = "07/08/2030";
        cartao2.numero = 2750;
        cartao2.dataDeValidade = "02/05/2028";
        
        System.out.println("\n\nNúmero do primeiro cartão: " + cartao1.numero);
        System.out.println("Data de validade do segundo cartão: " + cartao1.dataDeValidade);
        
        System.out.println("Número do segundo cartão: " + cartao2.numero);
        System.out.println("Data de validade do segundo cartão: " + cartao2.dataDeValidade);

        Agencia agencia1 = new Agencia();
        Agencia agencia2 = new Agencia();
        
        agencia1.numero = 58;
        agencia1.uf = "DF";
        agencia2.numero = 26;
        agencia2.uf = "BA";
        
        System.out.println("\n\nNúmero da primeira Agência: " + agencia1.numero);
        System.out.println("Unidade Federativa da primeira Agência: " + agencia1.uf);
        
        System.out.println("Número da segunda Agência: " + agencia2.numero);
        System.out.println("Unidade Federativa da segunda Agência: " + agencia2.uf);
        
        
        
        CartaoDeCredito cdc = new CartaoDeCredito();
        Cliente c = new Cliente();
        
        cdc.cliente = c;
        cdc.cliente.nome = "João Paulo Pimentel";
        cdc.cliente.codigo = 1;
        
        System.out.println("\n\nNome: " + cdc.cliente.nome);
        System.out.println("Código: " + cdc.cliente.codigo);
        
        Conta cc = new Conta();
        Agencia a = new Agencia();
        
        cc.agencia = a;
        cc.agencia.numero = 1;
        cc.agencia.uf = "GO";
        
        System.out.println("\n\nNúmero Agência: " + cc.agencia.numero);
        System.out.println("Código Agência: " + cc.agencia.uf);
    }
    
}