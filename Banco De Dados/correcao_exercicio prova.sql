drop database bd_avaliacao_A1;
create schema if not exists `bd_avaliacao_A1` default character set utf8;

use `bd_avaliacao_A1`;
	create table if not exists `bd_avaliacao_A1`.`tb_instrutor`(
		id INT not null, 
        rg VARCHAR(20), 
        nome VARCHAR(100),
        data_nascimento DATE,
        titulacao_id INT
        )
        
        ENGINE = InnoDB;

select * from `tb_instrutor`;