{Dado un arreglo de caracteres ya cargado, desarolla un algoritmo que informe si la frase es un tautograma(es decir si todas las palabras del arreglo empiezan con la misma letra) hecho por Gaston Martin 41.522.639
Analisis:
	Datos de Entrada: arreglo de caracteres ya cargado
	Datos de Salida: Cadena de caracteres
	Relacion: se fija si todas las palabras de la frase empiezan con la misma letra
		PRE: true
		POST:	Para todo x que sea mayor a 1 y menor a n, tal que arre[i] sea igual que arre[j]
		ESQUEMA: RP }
program ejer19;

Const
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
	a: TData;
	i: integer;
	ec, es, pl: char;
	existe: boolean;
	//accion para cargar la frase
procedure cargar(var x: tdata);
	var
		i: trango;
		resp: char;
		
	begin
		i:=1;
		writeln('quiere ingresar una frase? s/n');
		read(resp);
		if (resp='n') then
			x.marca:=1
		else
			writeln('Ingrese la frase letra por letra, para terminar ingrese "."');
			repeat  //siclo para ingresar la frase
				read(a.arre[i]);
				i:=i+1;
				x.marca:=i+1;
			until (x.arre[i-1]='.');
	end;
//acccion para mostrar los escrito
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
	//invocaciones de las funciones para cargar y mostrar
	cargar(a);
	show(a);
	i:=1;
	if (i=a.marca) then
				writeln('La secuencia esta vacia')
			else 
				if (i<>a.marca) then
					existe:= true;
					ec:='-';
					es:=a.arre[i];
					while (es=' ') and (i<>a.marca) do begin
						ec := es;
						es := a.arre[i+1];
					end;
					if (ec=' ')and(es<>' ') and (i<>a.marca) then
						pl:=es;
					
					while (existe = true) and (i<>a.marca) do begin
						while(es<>' ')do begin
							ec:=es;
							es:=a.arre[i+1];
						end;
						ec:=es;
						es:=a.arre[i+1];
						if (es<>pl) then
							existe:= false
						else
							existe:= true;
						end;
					
			if(existe = false) then
				writeln('No todas las palabras empiezan con la misma letra')
			else
				if(existe = true) then
					writeln('Todas empiezan con la misma letra');
			
end.
