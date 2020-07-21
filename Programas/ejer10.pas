unit Martin.lista;

interface 
uses crt;
const
	N=255;

Type
	//registro con info de la persona
	Telem=record
					nom: string;
					ape: string;
					dni: string;
					sexo: string;
				end;
	//tipo para utilizar punteros
	Tnodo=record
					info:Telem;
					next:^Tnodo;
					back:^Tnodo;
				end;

 	q=^Tnodo;
