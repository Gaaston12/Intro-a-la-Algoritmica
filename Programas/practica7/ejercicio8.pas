program ejer8;
type Tlist = record
						notas: array [1..100] of real;
						cant: integer;
						end;
var
	list: Tlist;
	apro: integer;
	repro: integer;
	mayor4: integer;
	alum: integer;
procedure cargar(var n:Tlist);
	var
		i: integer;
	begin
		i:=1;
		n.cant:=0;
	writeln('Ingrese la cantidad de alumnos');
	readln(alum);
	repeat		
		repeat
			writeln('Ingrese la nota');
			readln(n.notas[i]);
			if (n.notas[i]>10)or(n.notas[i]<0) then
				writeln('La nota debe estar entre 0 y 10');
		until (n.notas[i]<=10)and(n.notas[i]>=0);
	i:=i+1;
	until (i>alum)or(i=100+1)or(n.notas[i-1]=0);
	n.cant:=i-2;
	end;

function promedio(x: Tlist): real;
	var
		i:integer;
		res:real;
	begin
		res:=0;
		for i:=1 to x.cant do begin
			res:=res+x.notas[i];
		end;
	res:=res/x.cant;
	promedio:=res;
end;

procedure aprobados(x: Tlist;var apro: integer;var repro: integer);
var
	i: integer;
begin
	apro:=0;
	repro:=0;
	for i:=1 to x.cant do begin
		if (x.notas[i]>=6) then
			apro:= apro+1
		else
			repro:= repro+1;
		end
	end;

function porcentaje(x: Tlist; r: real): real;
	begin
		porcentaje:= (r*100)/x.cant;
end;

procedure may4(x: Tlist;var mayor4:integer);
	var
		i:integer;
	begin
		mayor4:=0;
		for i:=1 to x.cant do begin
			if (x.notas[i]>=4) then
				mayor4:=mayor4+1;
			end;
		end;

begin
cargar(list);
writeln('Promedio: ',promedio(list):2:2);
aprobados(list,apro,repro);
writeln('Aprobados: ',apro);
writeln('Porcentaje: ',porcentaje(list,apro):2:2,'%');
writeln('Desaprobados: ',repro);
writeln('Porcentaje: ',porcentaje(list,repro):2:2,'%');
may4(list,mayor4);
writeln('Notas mayores a 4: ', mayor4);
end.
