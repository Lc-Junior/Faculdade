drop database Projecao;
Create schema if not exists Projecao default character set utf8;
use Projecao;

create table if not exists aluno(
	id int not null,
    nome varchar(255),
    email varchar(255),
    data_nascimento datetime,
    primary key (id)
    ) engine = InnoDB;
    

create table if not exists turma(
	id int not null,
    inicio datetime,
    fim datetime,
    observacoes longtext,
    primary key (id)
    ) engine = InnoDB;
    
    
create table if not exists alunoturma(    
	aluno_id int not null,
    turma_id int not null,
    primary key (aluno_id, turma_id),
    foreign key (aluno_id) references aluno(id),
    foreign key (turma_id) references turma(id)
    )Engine=InnoDB;
    
	insert into aluno values(1,'Joao Paulo Pimentel','jpapim@gmail.com','1978-02-19');
    insert into aluno values(2,'Joao Paulo Pimentel','jpapim@gmail.com','1988-02-19');
    insert into aluno values(3,'Anibal Da Silva','anibal@gmail.com','1968-12-14');
    
    select * from aluno;
    
	insert into turma values(1,'2019-03-01','2019-07-15','Turma de banco de dados I');
	insert into turma values(2,'2019-04-01','2019-07-22','Turma de banco de dados II');
    
    select * from turma;
    
    insert into alunoturma values (1, 1);
	insert into alunoturma values (2, 1);
    
    select * from alunoturma;
    
	insert into alunoturma values (3, 2);
    
    select * from alunoturma;
    
create table nota(
	id int not null,
    aluno_id int,
    turma_id int,
    nota decimal (4, 2),
    primary key(id),
    foreign key (aluno_id) references aluno (id),
    foreign key (turma_id) references turma (id)
    )
    Engine=InnoDB;
    
    insert into nota values (1, 1, 1, 10);
    insert into nota values (2, 2, 1, 8);
	insert into nota values (3, 3, 2, 5);
    
    select * from nota as n1
    where n1.nota > (
	select avg(n2.nota)
    from nota as n2
    where n2.turma_id = n1.turma_id);
	
    
    select n1.*, (
		select max(n2.nota)
        from nota as n2
        where n2.turma_id = 1
        ) as maior_nota
        from nota as n1
        where n1.turma_id = 1;
    
    
        