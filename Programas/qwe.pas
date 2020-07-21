program ejer19;

Const
max = 255;
type 
	trango = 0..max;
	//arreglo de caracteres
	tarre= array[trango] of char;
	//registro con la secuencia y la marca
	tdata= record
			 			arre: tarre;
			 			marca: trango;
			 	 end;
var
	a: tdata;
	i: trango;
	//accion para cargar la frase
procedure cargar(var x: tdata);
	var
		i: trango;
		//resp: char;
		
	begin
			i:=1;
			writeln('Ingrese la frase letra por letra, para terminar ingrese "."');
			repeat  //siclo para ingresar la frase
				read(x.arre[i]);
				if (x.arre[i]='.')and(i=1) then 
					x.marca:=1
				else begin
					x.marca:=i;
				end;
				i:=i+1;
			until (x.arre[i-1]='.');
				writeln(x.marca);
		end;
	
	procedure show(x: tdata);
var
	i: trango;
begin
	i:=1;
	for i:=1 to x.marca do begin //siclo para mostrar la frase
		write(x.arre[i]);
	end;
		writeln();
end;
begin
	cargar(a);
	show(a);
	i:=1;
	if (i=a.marca) then
		writeln('puto')
		else begin
		if (i<a.marca)then
		writeln('gil');
		end;
end.
