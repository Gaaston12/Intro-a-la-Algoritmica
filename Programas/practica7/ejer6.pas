program ejer6;

type Tentero= array [1..100] of integer;

type	Tregistro= record
	a: Tentero;
	cant: integer;
end;

var

z: Tregistro;

function sumaentero(l:Tregistro): integer;
	var
		i, suma: integer;
	begin
	suma:=0;
	for i := 1 to l.cant do begin
		suma:= suma + l.a[i]
	end;
	sumaentero:= suma
end;

procedure cargar(var x: Tregistro );
	var
	i: integer;
	begin
		i:= 1;
		repeat
			writeln('Ingresar un numero');
			readln(x.a[i]);
			i:= i+1;
		until (i > x.cant);
end;


begin

writeln('Ingrese la cantidad maxima de numeros');
readln(z.cant);
cargar(z);

writeln('La suma es ',sumaentero(z));
end.
