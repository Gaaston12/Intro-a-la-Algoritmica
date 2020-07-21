
Program numPos;

uses units,crt;

var 
	q,x:puntq;
	cant:integer;
begin
	ini(q);	
	x:=q;	
	Carga(q,x);
	cant:=0;	
	while (x^.next<>nil) do begin
		x:=x^.next;
		if(x^.info>=0)then begin
			cant:=cant+1
		end;	
	end;
	clrscr;
	writeln('la cantidad de numeros positivos es: ',cant); 
	writeln('  ');
	Mostrar(q);
	writeln('  ')
end.
