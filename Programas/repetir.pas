program		NUMEROS;

var

n: integer;

begin
repeat
	writeln('Ingrese un numero menor a 10');
	readln(n);
until n<10;
writeln('Los numeros siguientes son...');

writeln('REPETIR');
repeat
	n:=n+1;
	writeln(n);
until n>9;

end.
