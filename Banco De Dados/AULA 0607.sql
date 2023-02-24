drop database ExercicioAula6;

create schema if not exists `ExercicioAula6` default character set utf8;
use `ExercicioAula6`;

CREATE TABLE `ExercicioAula6`.`Estudantes`(
	`nome` varchar(255),
    `email` varchar(255),
    `telefone` varchar(255),
    `altura` decimal(3,2),
    `aprovado` tinyint(1)
    )
    ENGINE = InnoDB;

CREATE TABLE `ExercicioAula6`.`Estudantes2`(
	`nome` varchar(255),
    `email` varchar(255),
    `telefone` varchar(255),
    `altura` decimal(3,2),
    `nota` decimal(2,1),
    `aprovado` tinyint(1)
    )
    ENGINE = InnoDB;
 
 
 
insert into `Estudantes2` (nome, email, telefone, altura, nota, aprovado)
		values ('João ', 'jpapim@gmail.com', '3345-0909', 1.69, 6.5, 0);
insert into `Estudantes2` (nome, email, telefone, altura, nota, aprovado)
		values ('Luana', 'luana@gmail.com', '3345-0202', 1.72, 8.2, 1);
insert into `Estudantes2` (nome, email, telefone, altura, nota, aprovado)
		values ('Felipe', 'feliperet@gmail.com', '0420-0420', 1.81, 7.0, 0);
insert into `Estudantes2` (nome, email, telefone, altura, nota, aprovado)
		values ('Catarina', 'Catarina@gmail.com', '3225-1909', 1.76, 3.7, 1);    
insert into `Estudantes2` (nome, email, telefone, altura, nota, aprovado)
		values ('Marina', 'manim@gmail.com', '3315-9909', 1.65, 5.7, 0);
        
        
        
select * from Estudantes2;
select * from Estudantes WHERE altura 
select * from Estudantes WHERE altura NOT BETWEEN 1.50 AND 1.70;
select * from Estudantes Order By aprovado DESC, nome;

select count(*) from Estudantes;
select sum(altura) from Estudantes;
select avg(nota) from Estudantes2;
select max(altura) from Estudantes2;
select min(altura) from Estudantes2;

select avg(nota) from Estudantes where aprovado in (0);
select count(*) from Estudantes where altura > 1.70;
select sum(altura) from Estudantes where aprovado in (1);
