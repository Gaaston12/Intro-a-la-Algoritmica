program ejer8;

type Tarre= array [1..100] of integer;

type	Tregistro= record
	a: Tarre;
	cant: integer;
end;

var
notas: Tregistro;
i, n: integer;
promedio: real;
cantidadnotas: integer;

	procedure cargarnotas(var notas: Tregistro); 
	var
		cont: integer;
	begin
		cont:= 0;
		repeat
			writeln('Ingrese las notas');
			readln(notas.a[i]);
			cont:= cont+1
		until (cont = n);
		writeln('La cantidad de notas es ', cont);
		cantidadnotas:= cont;
end;

	function calcpromedio(notas: Tregistro): real;
	var
		suma: real;
		i: integer;
		
	begin
		notas.cant:= cantidadnotas;
		suma:= 0;
		for i:= 1 to notas.cant do begin
		suma:= suma+notas.a[i]/100
		end;
	calcpromedio:=suma
	end;

		procedure cantaprobados(var notas: Tregistro; cantidadnotas: integer);
			var
			apro: integer;	
			repro: integer;		
			porap: real;
			pordes: real;
			begin
			for i := 1 to cantidadnotas do begin
				if notas.a[i] >= 6 then
				apro:= apro+1
				else
				repro:= repro+1;
				end;
			writeln('La cantidad de aprobados es', apro);
			writeln('La cantidad de desaprobados es', repro);
		
				porap:= apro*100/notas.cant;
				pordes:= repro*100/notas.cant;
				writeln('El porcentaje de aprobados es ',porap :2:2);
				writeln('El porcentaje de desaprobados es ', pordes:2:2);
			end;

		procedure mayor4(notas: Tregistro);
			var
				mayor: real;
			begin
				mayor:=0;
				for i:= 1 to notas.cant do begin
					if notas.a[i]>4 then
					mayor := mayor + 1;
				end;
			writeln('La cantidad de alumnos con la nota mayor de 4 es ',mayor);
		end;

begin

	writeln('Cantidad de alumnos');
	readln(n);
cargarnotas(notas);
promedio:= calcpromedio(notas);
writeln('El promedio global es', promedio);
cantaprobados(notas, cantidadnotas);
mayor4(notas);
end.


