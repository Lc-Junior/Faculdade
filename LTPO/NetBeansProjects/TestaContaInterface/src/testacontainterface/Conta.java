package testacontainterface;

public interface Conta {
    void deposita(double valor);
    void saca(double valor);
    double getSaldo();
}