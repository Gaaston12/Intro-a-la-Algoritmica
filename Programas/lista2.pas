Unit lista2;

Interface

Type
	Data= Record 
				nomb,apll,Dni:String;
				end;
	Nodo= Record 
				info:Data; next:^Nodo; back:^Nodo
       end;
       
puntero=^Nodo;
Procedure Inicializar(var p:puntero; var q :puntero); 
Procedure IncertarF (var p:puntero; var q :puntero;x:Data);
procedure SuprimirC(var p:puntero; var q :puntero);
Procedure Mostrar (p:puntero;q :puntero);
Procedure Salir (var p:puntero; var q :puntero);

implementation

Procedure Inicializar(var p:puntero; var q :puntero); 
begin
 p^.next:=nil;
 q^.back:=nil
end;

Procedure IncertarF (var p:puntero; var q :puntero;x:Data);
var 
	aux:puntero;
	aux2:puntero;
Begin
	 aux:=p^.next;
	while (aux^.next<>nil) do begin 
		aux:=aux^.next
	end;
 new(aux2);
 aux2^.info.nomb:=x.nomb;
 aux2^.info.apll:=x.apll;
 aux2^.info.dni:=x.dni;
 aux^.next:=aux^.next;
 aux2^.back:=aux;
 aux^.next:=aux2;
(aux^.next)^.back:=aux2
end; 

procedure SuprimirC(var p:puntero; var q :puntero);
var
r:puntero;
begin
  r:=p^.next;
 (r^.back)^.next:=r^.next;
 (r^.next)^.back:=r^.back;
 dispose(r)
end;

Procedure Mostrar (p:puntero;q :puntero);
Var 
	aux:puntero;

begin 
	
	aux:=p^.next;	
	while (aux<>nil) do begin 
		Writeln(aux^.info.nomb);
		Writeln(aux^.info.apll);
		Writeln(aux^.info.dni);
		aux:=aux^.next
	end

end;

Procedure Salir (var p:puntero; var q :puntero);
var 
	elim:puntero;
Begin 
		
	elim:=p;	
	while (elim<>nil) do Begin
		Dispose(elim)
	end;
	Dispose(q);
	Dispose(p);
End;	

end.
