package testacontainterface;

public class TestaContaInterface {

    public static void main(String[] args) {
        ContaCorrente c1 = new ContaCorrente();
        ContaPoupanca c2 = new ContaPoupanca();
        
        c1.deposita(500);
        c2.deposita(500);
        
        c1.saca(100);
        c2.saca(100);
        
        System.out.println("Saldo da conta corrente: " + c1.getSaldo());
        System.out.println("Saldo da conta poupança: " + c2.getSaldo());
    }
    
}
