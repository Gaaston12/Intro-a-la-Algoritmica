program calculardistancia;

type TPuntos = record 
	x: real;
	y: real;
end;

var
	punto1: TPuntos;
	punto2: TPuntos;
	distancia: real;
function calcdistancia(punt1: TPuntos;punt2: TPuntos): real;
	begin
		calcdistancia:= sqrt(sqr(punt1.x)+sqr(punt2.y));
	end;
begin
	writeln('Ingrese la coordenada del primer punto en x');
	readln(punto1.x);
	writeln('Ingrese la coordenada del primer punto en y');
	readln(punto1.y);
	writeln('Ingrese la coordenada del segundo punto en x');
	readln(punto2.x);
	writeln('Ingrese la coordenada del segundo punto en y');
	readln(punto2.y);
	distancia:= calcdistancia(punto1,punto2);
	writeln('La distancia entre los puntos es de ', distancia: 2:2);
end.
