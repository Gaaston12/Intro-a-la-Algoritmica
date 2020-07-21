program suma;
var
	i,x,n,resultado: integer;

	function suma3(i: integer; x: integer; n: integer): integer;
		var
			suma: integer;
		begin
			suma:=(i+x+n);
		suma3:= suma
		end;

begin
	writeln('Ingrese i');
	readln(i);
	writeln('Ingrese x');
	readln(x);
	writeln('Ingrese n');
	readln(n);
	
	resultado:= suma3(i,x,n);
	writeln('El resultado es ', resultado);
end.

