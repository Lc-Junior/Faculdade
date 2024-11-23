/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package br.com.visao;

import br.com.controle.ContaCorrente;
import javax.swing.JOptionPane;

public class Tela extends javax.swing.JFrame {
    ContaCorrente c = new ContaCorrente();
    /**
     * Creates new form Tela
     */
    public Tela() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jRsaque = new javax.swing.JRadioButton();
        jRdeposito = new javax.swing.JRadioButton();
        jBcalcular = new javax.swing.JButton();
        jLresultado = new javax.swing.JLabel();
        jTvalor = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("Digite um valor e escolha uma das opções abaixo:");

        jRsaque.setText("Saque");
        jRsaque.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRsaqueActionPerformed(evt);
            }
        });

        jRdeposito.setText("Depósito");

        jBcalcular.setText("Calcular");
        jBcalcular.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jBcalcularActionPerformed(evt);
            }
        });

        jLresultado.setText("0.00");

        jTvalor.setColumns(4);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap()
                        .addComponent(jLabel1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jTvalor, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(163, 163, 163)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jBcalcular)
                            .addComponent(jRsaque)
                            .addComponent(jRdeposito)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(117, 117, 117)
                        .addComponent(jLresultado)))
                .addContainerGap(61, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(14, 14, 14)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel1)
                    .addComponent(jTvalor, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(28, 28, 28)
                .addComponent(jRsaque)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jRdeposito)
                .addGap(44, 44, 44)
                .addComponent(jBcalcular)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 45, Short.MAX_VALUE)
                .addComponent(jLresultado)
                .addGap(54, 54, 54))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void jRsaqueActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRsaqueActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRsaqueActionPerformed

    private void jBcalcularActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jBcalcularActionPerformed
        // TODO add your handling code here:
        if(jRsaque.isSelected()){
                if(c.getSaldo() <= 0){
                    JOptionPane.showMessageDialog(null, "Saldo insuficiente");
                }
                
        else{
                try{
            c.setSaque(Double.valueOf(jTvalor.getText()));
            jLresultado.setText("O valor do saldo atual é: "+ c.getSaldo());
            }
                catch(NumberFormatException e){
                    JOptionPane.showMessageDialog(null, "Digite apenas números.");
                }
            }
        }
 
        if(jRdeposito.isSelected()){
            try{
            c.setDeposito(Double.valueOf(jTvalor.getText()));
            jLresultado.setText("O valor do saldo atual é: "+ c.getSaldo());
        }
            catch(NumberFormatException e){
                JOptionPane.showMessageDialog(null, "Digite apenas números");
            }
        }
        
        if(jRdeposito.isSelected() && jRsaque.isSelected()){
            jLresultado.setText("Opção inválida, selecione apenas uma opção!");
        }
        
    }//GEN-LAST:event_jBcalcularActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Tela.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Tela.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Tela.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Tela.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Tela().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jBcalcular;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLresultado;
    private javax.swing.JRadioButton jRdeposito;
    private javax.swing.JRadioButton jRsaque;
    private javax.swing.JTextField jTvalor;
    // End of variables declaration//GEN-END:variables
}