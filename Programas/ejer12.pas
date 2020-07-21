program ejer12;

uses UNIDAD,crt;

var
	n: integer;
	paux: p;
	punt:^Telem;
begin
	cargar(punt);
	new(paux);
	paux:=punt;
	if paux^.next=nil then
		writeln('La lista esta vacia')
	else
		begin
			n:=0;
			while(paux^.next<>nil)do
				begin
					paux:=paux^.next;
					writeln('Nombre: ',paux^.info.nom);	
					writeln('Apellido: ',paux^.info.ape);
					writeln('Antiguedad: ',paux^.info.anti);
					repeat
						paux^.info.anti:=	paux^.info.anti + 30;
						n:=n+1;
					until n = paux^.info.basico;
					writeln('Sueldo: ',paux^.info.basico);
	end;
	end;
end.
