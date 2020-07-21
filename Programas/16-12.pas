program ejer16;

const 
max = 255;
type 
	trango = 1..max;
	//arreglo de caracteres
	tarre= array[trango] of char;
	//registro con la secuencia y la marca
	tdata= record
			 			arre: tarre;
			 			marca: trango;
			 	 end;
procedure cargar(var x: tdata);
	var
		b: char;
		i: integer;
	begin
		i:=1;
		x.marca:=i;
		while i=x.marca do begin
			writeln('Ingrese la frase, letra por letra');
			writeln('Para terminar ingrese un + ');
			read(b);
			x.arre[i]:=b;
			if b='+' then
				i:=x.marca+1
				else
					i:=i+1;
					x.marca:= i
			end;
			
end;

var
j,i,cont : integer;
existe: boolean;
s: tdata;


begin
cargar(s);
	j:=1;
	while (j<>s.marca) and (s.arre[j]<> ' ') do
		j:=j+1;

if	(j=	s.marca)then 
	writeln('Esta vacio')
else 
	if (j<> s.marca) then
		cont:=0;
		existe:=false;
		while (not existe) and (not(j=s.marca))and(s.arre[i]<> ' ') do
			while (j<>s.marca) and (s.arre[i]<> 'r') do
				j:=j+1;
		if (j=s.marca) or (s.arre[i]= ' ') then
		else 
			if (j<>s.marca) or (s.arre[i]= ' ') then
				existe:= true;
				while (i<>s.marca)and(s.arre[i]<>' ') do 
					i:=i+1;
			cont:= cont+1;
if (existe=true) then
	writeln ('La palabra que contiene la R es la numero: ', cont);
end.
								
