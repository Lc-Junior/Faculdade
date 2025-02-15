<%-- 
    Document   : exercicio
    Created on : 14 de fev. de 2025, 21:47:15
    Author     : 202211684
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h1>Formulário!</h1>
        <form action="exercicio.do" method="post">
            <input type="number" name="a" size="4"> <br>
            <input type="number" name="b" size="4"> <br>
            <input type="submit" value="+" name="operacao">
            <input type="submit" value="-" name="operacao">
            <input type="submit" value="*" name="operacao">
            <input type="submit" value="/" name="operacao">
            <input type="submit" value="Media" name="operacao">
        </form>
    </body>
</html>
