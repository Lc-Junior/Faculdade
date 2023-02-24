drop database bd_aula_join;
create schema if not exists bd_aula_join default character set utf8;
use bd_aula_join;

create table if not exists bd_aula_join.tabelaA (
	nome varchar(50) null
)Engine=InnoDB;

create table if not exists bd_aula_join.tabelaB (
	nome varchar(50) null
)Engine=InnoDB;    

insert into tabelaA values('Fernanda');
insert into tabelaA values('Josefa');
insert into tabelaA values('Joao');
insert into tabelaA values('Pimentel');


insert into tabelaB values('Carlos');
insert into tabelaB values('Manoel');
insert into tabelaB values('Joao');
insert into tabelaB values('Pimentel');

select * from tabelaA;

select * from tabelaB;

select a.nome, b.nome
from tabelaA as A
Inner Join tabelaB as B
on a.nome = b.nome;


select a.nome, b.nome
from tabelaA as A
left join tabelaB as B
on a.nome = b.nome;

select a.nome, b.nome
from tabelaA as A
right join tabelaB as B
on a.nome = b.nome;

select a.nome, b.nome
from tabelaA as A
left join tabelaB as B
on a.nome = b.nome
where b.nome is null;


select a.nome, b.nome
from tabelaA as A
right join tabelaB as B
on a.nome = b.nome
where a.nome is null;


