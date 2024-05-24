package bancojdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.ResultSet;
import java.util.Scanner;


public class BancoJDBC {
    private Connection con;
    private Statement stmt;
    
    public BancoJDBC(){
        try{
            Class.forName("com.mysql.jdbc.Driver");
            System.out.println("Driver encontrado!");
        } catch(ClassNotFoundException e){
            System.out.println("Driver não encontrado!" + e);
            System.out.println("Error: " + e.getMessage());
        }
        
        String url = "jdbc:mysql://localhost:3306/Banco";
        String user = "root";
        String password = "";
        try{

        con=DriverManager.getConnection(url,user,password);
        stmt = con.createStatement();

        }catch(SQLException e){
        System.out.println("Error: "+ e.getMessage());
        }
        inserirRegistros2(0, url, url, url);
        listarRegistros();
}

    private void listarRegistros() {
        try{
            ResultSet rs;
            rs = stmt.executeQuery("SELECT * FROM Empregado");
            while(rs.next()){
                int matricula = rs.getInt("matricula");
                String nome = rs.getString("nome");
                String telefone = rs.getString("telefone");
                float salario = rs.getFloat("salario");
                
                System.out.println(matricula + "\t" + nome + "\t" + telefone + "\t" + salario);
            }
        } catch(SQLException e){
            System.out.println("Erro:" + e.getMessage());
        }
                System.out.println("");
    }
    
    private void inserirRegistros2(int mat, String n, String tel, String sal){
        try{
            stmt.executeUpdate("INSERT INTO Empregado VALUES("+mat+",'"+n+"','"+tel+"','"+sal+"')");
            System.out.println("Empregado cadastrado!\n");
            }catch(SQLException e){
                System.out.println("Erro: "+ e.getMessage());
            }
    }
    
    private void alterarRegistros(String sal, int mat){
        try{
            stmt.executeUpdate("UPDATE Empregado SET salario= '"+sal+"' WHERE matricula="+mat+"");
            System.out.println("O salário foi alterado cm sucesso!\n");
        }catch(SQLException e){
            System.out.println("Erro: "+ e.getMessage());
        }
    }
    
    private void apagarRegistros(int mat){
        try{
            stmt.executeUpdate("DELETE FROM Empregado WHERE matricula="+mat+"");
        }catch(SQLException e){
                System.out.println("Erro: "+ e.getMessage());
        }
}
    
     private void mostrarMediaSalarial(){
        float somaSalario = 0;
        int contador = 0;
        try{
            ResultSet rs;
            rs = stmt.executeQuery("SELECT * FROM Empregado");
             while ( rs.next() ) {
             //   int matricula = rs.getInt("matricula");
             //   String nome = rs.getString("nome");
             //   String telefone = rs.getString("telefone");
                float salario = rs.getFloat("salario");
                somaSalario = somaSalario + salario;
                contador++;
            }
        }catch(SQLException e){
            System.out.println("Erro: "+ e.getMessage());
        }
        System.out.println("Media dos salarios: " + (somaSalario/contador));
        System.out.println("");
    }
     
     public static void main(String[] args) {
        BancoJDBC bancoJDBC = new BancoJDBC();
        Scanner leia = new Scanner(System.in);
        int matricula, matriculaExcluida, matriculaAlterar, opcao;
        String nome, telefone, salario, alterarSal;
       
       
       do{
       
       System.out.println("1 - INSERIR");
       System.out.println("2 - ALTERAR SALARIO");
       System.out.println("3 - CONSULTAR");       
       System.out.println("4 - EXCLUIR"); 
       System.out.println("5 - MEDIA SALARIAL");
       System.out.println("6 - SAIR");
       System.out.println("Digite a sua opção: ");
       opcao = leia.nextInt();
       
       switch(opcao){
           case 1: 
                    System.out.println("Digite a matricula do aluno para inserir: ");
                    matricula = leia.nextInt();
                    System.out.println("Digite o nome do aluno para inserir: ");
                    nome = leia.next();
                    System.out.println("Digite o telefone do aluno para inserir: ");
                    telefone = leia.next();
                    System.out.println("Digite o salario do aluno para inserir: ");
                    salario = leia.next();
                    bancoJDBC.inserirRegistros2(matricula, nome, telefone, salario);
                    break;
           case 2:
                    System.out.println("Digite a matricula do aluno para alterar o salário: ");
                    matriculaAlterar = leia.nextInt();
                    System.out.println("Digite o valor do novo salário: ");
                    alterarSal = leia.next();
                    bancoJDBC.alterarRegistros(alterarSal, matriculaAlterar); 
                    break;
           case 3:
                    bancoJDBC.listarRegistros();
                    break;
           case 4:
                    System.out.println("Digite a matricula do aluno para exclusão: ");
                    matriculaExcluida = leia.nextInt();
                    bancoJDBC.apagarRegistros(matriculaExcluida);
                    break;
           case 5:
                    bancoJDBC.mostrarMediaSalarial();
                    break;
           case 6:
                    System.out.println("Saindo...");
        }
       }while(opcao!=6);
    
    }
}


