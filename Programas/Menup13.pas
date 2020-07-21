Program menu;
const
	N=255;

Type
	TRango = 1..N;

	Tarr= array [TRango] of string;

	TElem=record
					nom: Tarr;
					ape : Tarr;
				end;

	TNodo=record
					Persona:TElem;
					next:^TNodo;
					back:^TNodo;
				end;

 	c=^TNodo;

Var
	res:char;

Procedure inicializar (var p:c); {crea una secuencia y si esta tiene elementos la vacia}
begin
	new(p);
	If (p <> nil) then
		p:= nil;
end;

Procedure incertF (var p:c ; elem:integer); {agrega un nuevo elemento al final de la lista}
var
	aux:^TNodo;
begin
	new(aux);
	If (p=nil)
	While (p<>nil)Do
{primero buscar el ultimo elemento p con un mientras}
	new(aux);
	(aux^).info:= elem;
	(aux^).next := (p^).next ;
	(p^).next:= aux;
end;

Procedure ElimPos (var p:c); {elimina un elemento en una posicion dada (si esta existe)}
var
	aux:^TNodo;
	ec:^TNodo;
	pos: integer;
	cont: integer;
begin
	if (p=nil) Then begin
		Writeln ('la sec esta vacia, no hay elementos para eliminar');
	end
	Else
		Writeln ('¿en que posicion esta el elemento que quiere eliminar?');
		Read (pos);
	while (pos <1) Do begin
		Writeln ('posicion invalida ingrese una nueva');
		Read (pos);
	end;
	If (pos =1) then begin
		p:= (p^).next;
	end
	Else begin
		new(ec);
		cont:=2;
		aux:=p;
		While ((cont<pos) and not ((aux^).next=nil)) Do begin
			cont:= cont+1;
			aux:= (aux^).next;
		end;	
		If ((aux^).next<>nil) Then begin
			ec:=(aux^).next;
			(aux^).next:= (ec^).next;
		end
		else
			Writeln ('la posicion no existe');
	end;	
end;

Procedure mostrarSec (p:c); {muestra todos los elementos de la sec}
begin
	If (p=nil) Then begin
		Writeln ('la sec esta vacia');
	end
	Else
		While (p <> nil) Do begin
			Writeln ((p^).info);
			p:= (p^).next;
		end;
end;
