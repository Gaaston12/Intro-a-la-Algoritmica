{ 
Gaston Martin 41.522.639
}
unit lista;

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
 //declaracion de las acciones 
procedure inicializar(var x:q;var p:q); 
procedure insertarf(var x:q;var p:q;var a: Telem);
procedure supPrim(var x:q;var p:q);
procedure mostrar(x:q;p:q);
procedure Liberar(var x:q;var p:q);

implementation

 	//accion para crear una lista vacia
procedure inicializar(var x:q;var p:q);
var
	aux,aux2:q; //elementos ficticios 
begin
	new(aux);
	new(aux2);
	(aux2^).next:=nil;
	(aux2^).back:=aux;
	(aux^).next:=aux2;
	(aux^).back:=nil;
	x:=aux;
	p:=aux2;
end;//fin de la accion inicializar

//accion para incertar un elemento al final de la lista
procedure insertarf(var x:q;var p:q;var a: Telem);	
var 
	aux,aux2,aux3: q;
begin
		//ingreso de la informacion para el nuevo elemento
		readln(a.ape);
		writeln('Ingrese el apellido');
		readln(a.ape);
		writeln('Ingrese el nombre');
		readln(a.nom);
		writeln('Ingrese el DNI');
		readln(a.dni);
		writeln('Ingrese el sexo');
		readln(a.sexo);
		aux3:=p;
		aux2:=(aux3^).back;
		new(aux); //se obtiene el nuevo elemento
		(aux^).info.nom:= a.nom;
		(aux^).info.ape:= a.ape;
		(aux^).info.dni:= a.dni;
		(aux^).info.sexo:= a.sexo;
		(aux2^).next:=aux;
		(aux^).next:=aux3;
		(aux^).back:=aux2;
		(aux3^).back:=aux;
end;//fin de la funcion insertarf

//funcion para suprimir el elemento cabeza o el primero
procedure supPrim(var x:q;var p:q);
var
	aux,aux2:q;
begin
	if(x=nil) then
		writeln('La lista esta vacia')
	else begin
		aux2:=x;
		aux:=(aux2^).next;
		(aux2^).next:=(aux^).next;
		((aux^).next^).back:=aux2;
		dispose(aux);	
	end;//fin del if
end;//fin de la funcion suPrim
	
//accion para mostrar toda la secuencia
procedure mostrar(x:q;p:q);
var
	aux: q;
begin
	if ((x^).next=nil) then
		writeln('La lista esta vacia')
	else begin
		aux:=(x^).next;
		while ((aux^).next<>nil)do begin
			writeln('nombre: ',(aux^).info.nom);
			writeln('apellido: ',(aux^).info.ape);
			writeln('DNI: ',(aux^).info.dni);
			writeln('sexo: ',(aux^).info.sexo);
			(aux):=(aux^).next;
		end;//fin del while
	end;//fin del if
end;//fin de la funcion mostrar

//accion para librear, para librerar espacio en la memoria
procedure Liberar(var x:q;var p:q);
var
	aux:q;
begin 
	while ((x^).next<>p) do begin
		aux:=(x^).next;
		(x^).next:=(aux^).next;
		((aux^).next)^.back:=x;
		dispose(aux);
	end; //fin de while
	dispose(p);
	dispose(x);
end;//fin de la funcion liberar

end.//fin del programa
