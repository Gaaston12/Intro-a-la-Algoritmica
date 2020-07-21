program ejer10;

uses lista3;
 
var
	a,paux:q;
	cant: integer;
	
begin
	inicializar(paux);
	cargar(paux);
	a:=paux;
	if (a = nil) then
		writeln('secuencia vacia')
	else begin
		cant:=0;	
		while ((a^).next<>nil) do begin
			a:=(a^).next;
			if((a^).info >= 0) then
				cant:=cant+1;
		end;
	end;	
	writeln('La cantidad de numeros positivos es: ',cant);
end.		
