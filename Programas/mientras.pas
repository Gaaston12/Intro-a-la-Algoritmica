program		NUMEROS;

var

n: integer;

begin
repeat
	writeln('Ingrese un numero menor a 10');
	readln(n);
until n<10;
writeln('Los numeros siguientes son...');

writeln('MIENTRAS desde el numero ingresado a 10');
while n<10 do begin	
	n:= n+1;
	writeln(n);
end;

writeln('REPETIR de 10 hasta 20');
repeat
	writeln(n);
	n:=n+1;
until n>20;

writeln('PARA desde 20 hasta 30');
for n:=n to 30 do
writeln(n);
n:=n+1;
end.
