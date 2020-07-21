program		NUMEROS;

var

n: integer;

begin
repeat
	writeln('Ingrese un numero menor a 10');
	readln(n);
until n<10;
writeln('Los numeros siguientes son...');

for n:=n to 10 do
writeln(n);
n:=n+1;
end.
