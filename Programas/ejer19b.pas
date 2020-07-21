{Dado un arreglo de caracteres ya cargado, desarolla un algoritmo que informe si la frase es un tautograma(es decir si todas las palabras del arreglo empiezan con la misma letra) hecho por Gaston Martin 41.522.639 c1
Analisis:
	Datos de Entrada: arreglo de caracteres ya cargado
	Datos de Salida: Cadena de caracteres
	Relacion: se fija si todas las palabras de la frase empiezan con la misma letra
		PRE: true
		POST:	 Vi^Vj/ 1<=i>=n^1<=j>=n : (arre[i-1]=' '^arre[i]<>' '):arre[i]=arre[j]
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
	begin
			i:=1;
			writeln('Ingrese la frase, para terminar ingrese "."');
			repeat  //ciclo para ingresar la frase
				read(x.arre[i]);
				if (x.arre[i]='.')and(i=1) then 
					x.marca:=1
				else begin
					x.marca:=i;
				end;
				i:=i+1;
			until (x.arre[i-1]='.'); //condicion de para
				writeln('La marca esta en: ',x.marca);
		end;
	
		
//acccion para mostrar los escrito
procedure show(x: tdata);
var
	i: trango;
begin
	i:=1;
	for i:=1 to x.marca do begin //ciclo para mostrar la frase
		write(x.arre[i]);
	end;
	writeln();
end;
			
begin
	//invocaciones de las funciones para cargar y mostrar
	cargar(a);
	show(a);
	i:=1;
	//ciclo para limpiar los blancos que esten primeros de una palabra
	while(a.arre[i]=' ')and(i<>a.marca) do begin
		i:=i+1
	end;
	pl:= a.arre[i]; 
	if (i=a.marca) then
				writeln('La secuencia esta vacia')
			else 
				if (i<>a.marca) then begin
					existe:=true;
					ec:=' ';
					es:=a.arre[i]; 
					while (existe=true)and(i<>a.marca)do begin
						while(a.arre[i]<>' ') do begin
							i:=i+1;
							es:=a.arre[i];
						end;
						ec:=es;
						i:=i+1;
						es:=a.arre[i];
						if(ec=' ')and(es=pl)then
							existe:=true
						else
							existe:=false; 
						end;
					end;
					
					if (existe=true) then 
						writeln('Todas las palabras empiezacon la misma letra')
					else begin
						writeln('No es tautograma');
					
				end;
			
end.
