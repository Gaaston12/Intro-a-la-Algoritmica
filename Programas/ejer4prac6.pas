program ejer4;
var
	n,i,x: integer;
begin
	writeln('Ingrese un numero limite');
	readln(x);
	n:=0;
	i:= 1;
	while (n<x) do
	    begin
	        writeln(n);
	        n:=n+i;
	        writeln(i);
	        i:=n+i;
	        
	end;
end.
