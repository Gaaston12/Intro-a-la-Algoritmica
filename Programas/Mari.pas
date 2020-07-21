program mari;

const
	punt=10;

var
	puntos: integer;
	preguntas: integer;
	n: integer;
	procedure cargar(var pre: integer);
		begin
			writeln('ingerse la cantidad de preguntas');
			readln(preguntas);
	end;
	
	procedure respu(p: integer);
		var
		respuesta: integer;
		begin
		
			writeln('LA RESPUESTA ES 1/0?');
			readln(respuesta);
			if respuesta = 1 then
			puntos := puntos+1
			else
			puntos := puntos-1;
			end;

begin
	cargar(preguntas);
	puntos:=punt;
	repeat
		writeln('Pregunta');
		writeln('-------------------------------');
		respu(puntos);
		writeln('===============================');
		writeln('Los Puntos son');
		writeln(puntos);
		n:= n+1
	until n=preguntas;
end.
	
