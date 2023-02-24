drop database LojaProjecao;
create schema if not exists LojaProjecao default character set utf8;
use LojaProjecao;

create table clientes(
	idCliente int not null auto_increment,
    nomeCliente varchar(50) not null,
    sexoCliente char(1) not null,
    status char(1) not null,
    
    constraint PK_Cliente primary key (idCliente),
    constraint CH_Cliente check(sexoCliente in('F','M'))
    )Engine=InnoDB;
    
create table documentos(
	idDocumento int not null auto_increment,
    idCliente int not null,
    tipoDocumento varchar(25) not null,
    numeroDocumento varchar(15),
	
    constraint PK_Documento primary key (idDocumento),
    constraint Fk_idCliente foreign key (idCliente)
					references clientes(idCliente)
	)Engine=InnoDB;

    insert into clientes values (null,'Joao Da Silva','M','A');
    insert into clientes values (null,'Jose Da Silva','M','I');
    insert into clientes values (null,'Maria Da Silva','F','A');
    
    select * from clientes;
    
    
	insert into documentos values (null,1,'RG','1.345.678');
	insert into documentos values (null,2,'CPF','2.345.678-x');
    insert into documentos values (null,3,'RG','345.345.678-00');
   
    
    select * from documentos;
    
    select clientes.* from clientes where sexoCliente='M';
    
	select clientes.* from clientes where status='A';
    
    SELECT clientes.*, documentos.tipoDocumento FROM clientes, documentos WHERE clientes.idCliente = documentos.idCliente and documentos.tipoDocumento = 'CPF';
    
    select clientes.*,documentos.tipoDocumento,documentos.numeroDocumento from clientes, documentos where clientes.idCliente=documentos.idCliente and documentos.tipoDocumento='RG';
    
SELECT clientes.idCliente AS IDENTIFICAÇÃO, clientes.nomeCliente AS NOME,clientes.sexoCliente AS SEXO, clientes.status AS STATUS,documentos.tipoDocumento AS TIPO_DOCUMENTO, documentos.numeroDocumento AS NÚMERO FROM clientes,documentos WHERE clientes.idCliente = documentos.idCliente And documentos.tipoDocumento = 'RG';
    
    

    
    
    
    
    
    
    
    