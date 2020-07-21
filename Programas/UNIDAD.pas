Unit UNIDAD;

Interface

uses crt;

Type
	Tpers=Record
					ape: string;
					nom:string;
					anti:integer;
					basico:integer;
				end;
	Telem=Record  
					info:tpers; 
					next:^Telem
       end;
       
	p=^Telem;
procedure cargar(punt:p);

implementation	

procedure cargar(punt:p);
var
	aux,aux2:p;
	res: char;
begin
	punt:=nil;
	new(aux);
	repeat
		writeln('Quiere ingresar un empleado? s/n');
		read(res);
		readln(aux^.info.ape);
		writeln('Ingrese el aprellido');
		readln(aux^.info.ape);
		writeln('Ingrese el nombre');
		readln(aux^.info.nom);
		writeln('Ingrese la antiguedad');
		readln(aux^.info.anti);
		writeln('Ingrese el sueldo basico');
		readln(aux^.info.basico);
		if (punt=nil)then 
			begin
				punt:=aux;
				aux2:=punt;
			end
		else 
			begin
				aux2^.next:=aux;
				aux2:=aux^.next;
			end;
		aux^.next:=nil;
	until res='n';
end;
end.
