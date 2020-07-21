unit lista3;

interface
uses crt;

type
	Tnodo=record
					info:integer;
					next:^Tnodo;
				end;

 	q=^Tnodo;
procedure cargar(var x:q);
procedure inicializar(var x:q);
implementation

procedure inicializar(var x:q);
var 
	aux:q;
begin
	new(aux);
	(aux^).next:=nil;
end;


//accion para cargar 
procedure cargar(var x:q);
var 
	aux,aux2:q;
	band: boolean;
	res:char;
	n:integer;
begin
	band:=true;
		while band=true do
			begin
				writeln('Quiere ingresar un elemento? s/n');
				read(res);
				if res='s' then begin
					band:=true;
					writeln('Ingrese el numero');
					read(n);
					x:=nil;
					new(aux);
					(aux^).info:=n;
					if (x=nil) then
						begin
							x:=aux;
							aux2:=x;
						end
					else
					begin
						(aux2^).next:=aux;
						aux2:=(aux2^).next;
					end;
					(aux^).next:=nil;
				end
				else
					if res='n' then
						band:=false
					else
						writeln('Respuesta no valida');
				end;
		
end;	
end.
