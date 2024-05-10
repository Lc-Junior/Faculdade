package testacontaabstract;

public class TestaContaAbstract {

    public static void main(String[] args) {
       Conta c = new ContaPoupanca();
       c.setSaldo(1000);
        System.out.println("Saldo da conta: "+ c.getSaldo());
        c.imprimeExtratoDetalhado();
    }
    
}
