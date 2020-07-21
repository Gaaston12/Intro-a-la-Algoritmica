{Dado un arreglo de numeros enteros de tamaño maximo 'N' y un numero natural 'x', calcular la cantidad de 
ocurrencias de x en el arreglo.
Notas: 
-Cargar el arreglo de manera aleatoria con numeros entre 0 y 100. 
-Definir las funciones y acciones que considere necesarias para obtener 
un buen diseño de su solucion.
-Se provee el procedimiento Mostrar para poder visualizar el arreglo
}
{Parcial n°2 Gaston Martin C2 DNI:41.522.639}
program Examen;

const N =100;

type MisDatos = record  {representaciÃ³n de los datos}
					datos: Array[1..N] of Integer;
					cantidad:Integer;
				end;	
var
arre: MisDatos;
x:integer;

{con esta accion vamos a cargar los datos}
procedure cargar(var g: MisDatos);
var
	i: integer;
begin
	g.cantidad:=Random(100)+1;
	for i:=1 to g.cantidad do begin
		g.datos[i]:= Random(100)+1;
	end;
end;		

{Este procedimiento muestra por salida estandar los datos pasados como parametros}
procedure Mostrar(d:MisDatos);
var i:integer;
begin
	for i:=1 to (d.cantidad)-1 do begin
		write(d.datos[i], '-');
		end;
	writeln(d.datos[d.cantidad]);	
	writeln('Cantidad de Elementos:', d.cantidad);
end;

{esta funcion compara al numero 'x' entre todos lo numeros contenidos por el arreglo}
function compara(j: MisDatos; num: integer): integer;
	var
		i: integer;
		r: integer;
	begin
		r:=0;
		for i:= 1 to N do begin
			if num=(j.datos[i]) then
				r:= r+1;
			end;
		compara:= r;
	end;

begin {Programa principal}
	Randomize; { NO BORRAR: Esta es una forma de generar una nuevo nÃºmero cada vez que el programa se ejecuta.}
	writeln('Ingrese el numero a comparar');
	readln(x);
	cargar(arre); {invocacion a la funcion para cargar}
	Mostrar(arre);{invocacion a la funcion para mostrar todo}
	writeln('La cantidad de numeros que son iguales son ',compara(arre,x));
	
end.
