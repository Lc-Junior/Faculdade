drop database LojaProjecao; 
Create schema if not exists `LojaProjecao` default character set utf8;
use `LojaProjecao`;

	Create table `categorias` (
    `id` int not null auto_increment primary key,
    `nome` varchar (255) not null
    ) Engine = InnoDB;
    
    Create table `produtos` (
    `id` int not null auto_increment primary key, 
    `categoria_id` int not null,
    `nome` varchar(255) not null,
    `preco` decimal(10,2) not null
    ) engine = InnoDB;
    
    insert into `produtos` values(null, 1, 'Camiseta Social', 45.00);
    insert into `produtos` values(null, 1, 'Camiseta Regata', 31.99);
    insert into `produtos` values(null, 2, 'Caneca Grande', 18.99);
    
   select `produtos`.* from `produtos`
   inner join `categorias` on `produtos`. `categoria_id` = `categorias`.`id`
   order by `produtos`.`nome` ASC;
   
   select `produtos`,`nome`.`categorias` from `produtos`
   inner join `categorias` on `produtos`. `categoria_id` = `categorias`.`id`
   order by `produtos`.`nome` ASC;
   
   select p.categoria_id as identificador_cat, 
   p.nome as nome_produto,
   p.preco as preco_produto,
   c.nome as categoria
   from produtos as p 
   inner join categorias as c on 
   p.categoria_id = c.id
   order by p.nome asc;