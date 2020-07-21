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

var
j,i,cont : integer;
existe: boolean;
a: tdata;

procedure cargar(x: tdata);
	var
		i: integer;
	begin
		i:=0;
		while x.arre[i]<> '+' do
			writeln('Ingrese la frase, letra por letra');
			writeln('Para terminar ingrese un + ');
			read(x.arre[i]);
			i:=i+1;
			x.marca:=i;
end;

begin
	j:=1;
	cargar(a);
	while (j<>a.marca)and(a.arre[j]<>' ') do
		j:=j+1;
			
	if (j=a.marca) then
		writeln('Esta vacio')
	else
		if (j<>a.marca) then
			cont:=0;
			existe:= false;
			while (not existe) and not(j=a.marca) and (a.arre[i]<> ' ') do
				while (i<>a.marca) and (a.arre[i]<> 'r') do
					j:=j+1;
					if (j=a.marca) or (a.arre[i]= ' ') then
						
					else
						if not(j=a.marca) or (a.arre[i]= ' ') then
							existe:=true;
							while (i<>a.marca) and (a.arre[i]<> ' ') do
								j:=j+1;
			
		cont:=cont+1;
if (existe=true) then
	writeln('El caracter r esta en la palabra numero: ', cont)

end.
			
		
