drop database caesb;
Create schema if not exists caesb default character set utf8;
use caesb;

create table if not exists tipotarifa(
	idtipotarifa int not null,
    desctipotarifa varchar(45) not null,
    primary key (idtipotarifa)
    )Engine=InnoDB;
    
create table if not exists unidadeconsumo(    
	idunidadeconsumo int not null,
    matricula varchar (11) not null,
    endereço varchar (45) not null,
    idtipotarifa int not null,
    primary key (idunidadeconsumo),
    foreign key(idtipotarifa) references tipotarifa (idtipotarifa)
    ) Engine=InnoDB;
    
create table if not exists consumo(    
	idconsumo int not null,
    quantidade float not null,
    mes int not null,
    ano int not null,
    idunidadeconsumo int not null,
    primary key(idconsumo),
    foreign key(idunidadeconsumo) references unidadeconsumo(idunidadeconsumo)
    )Engine=InnoDB;
    
    insert into tipotarifa values (1,'normal');
    insert into tipotarifa values (2,'reduzida');
    
    select * from tipotarifa;
    
    insert into unidadeconsumo values (1,1, 'avenida brasil',1);
    insert into unidadeconsumo values (2,2, 'avenida argentina',1);
    insert into unidadeconsumo values (3,3, 'avenidaparaguai',1);
    insert into unidadeconsumo values (4,4, 'avenida chile',1);
    
    select * from unidadeconsumo;
    
    insert into consumo values(1,30,3,2019,1);
    insert into consumo values(2,39,3,2019,2);
    insert into consumo values(3,50,3,2019,3);
    insert into consumo values(4,30,4,2019,4);
    
    select * from consumo;
    
    select count(matricula) from unidadeconsumo, tipotarifa, consumo where tipotarifa.idtipotarifa = unidadeconsumo.idtipotarifa and consumo.idunidadeconsumo = unidadeconsumo.idunidadeconsumo and 
		consumo.ano = "2019" and 
        consumo.mes = "3" and 
        consumo.quantidade < 40 and
        desctipotarifa = 'normal';
        
        
        select count(matricula) from unidadeconsumo, tipotarifa, consumo where tipotarifa.idtipotarifa = unidadeconsumo.idtipotarifa and consumo.idunidadeconsumo = unidadeconsumo.idunidadeconsumo and 
		consumo.ano = "2019" and 
        consumo.mes = "3" and 
        consumo.quantidade < 40 and
        desctipotarifa = 'normal' and
        unidadeconsumo.endereco;
        
        
        
        