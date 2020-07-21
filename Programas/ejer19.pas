{Dado un arreglo de caracteres ya cargado, desarolla un algoritmo que informe si la frase es un tautograma(es decir si todas las palabras del arreglo empiezan con la misma letra) hecho por Gaston Martin 41.522.639
Analisis:
	Datos de Entrada: arreglo de caracteres ya cargado
	Datos de Salida: Cadena de caracteres
	Relacion: se fija si todas las palabras de la frase empiezan con la misma letra
		PRE: true
		POST:	Para todo x que sea mayor a 1 y menor a n, tal que arre[i] sea igual que arre[j]
		ESQUEMA: RP }
		
program ejer19;
	const
		max=255;
	type 
	//arreglo de caracteres
		Tarre = array [1..max] of char;
	//un registro con la secuencia y la marca virtual.
		Tdata = record
          			arre : Tarre;
          			mark: [1..n+1];
       end;
	var
		a: Tdata;	
		ec, es, pl, i: integer;
		existe: boolean;
		//accion para cargar una frase
		procedure cargar(var x: Tdata; i: integer);
			var
				r: char;
			begin
				i:=1;
				writeln('quiere cargar una frase? s/n');
				read(r);
				if (r='n') then
					x.mark:= 1
				else
					writeln('Ingrese la frase letra por letra y para terminar ingrese un "."');
					repeat 
						x.mark:=i+1;
						readln(x.arre[i]);
						i:=i+1;
					until (x.arre[i-1]='.');
		end;
		
		begin
			cargar(a);
			if (i=a.mark) then
				writeln('La secuencia esta vacia')
			else 
				if (i<>a.mark) then
					existe:= true;
					ec:=' ';
					es:=a.arre[i];
					while (es=' ' and es<>a.mark) do begin
						ec := es;
						es := a.arre[i+1];
					end;
					if (ec=' ' )and (es<>' ' and es<>a.marca) then
						pl:=es;
					end;
					while (existe = true) and (es<>a.mark)do begin
						while(es<>' ')do begin
							ec:=es;
							es:=a.arre[i+1];
						end;
						ec:=es;
						es:=a.arre[i+1];
						if (es<>pl) then
							existe:= false;
						else
							existe:= true;
						end;
					end;
			if(existe = false) then
				writeln('No todas las palabras empiezan con la misma letra');
			else
				if(existe = true) then
					writeln('Todas empiezan con la misma letra');
				end;
			end;	
	end.
