program 	TipoRecord; 
	type Tpuntoy= record
		y1: real;
		y2: real;
	end;
	type TPuntox= record
		x1: real;
		x2: real;
	end;
var
x: TPuntox;
y: TPuntoy;

function distancia(x: TPuntox; y: TPuntoy):real;
	var 
	distanciaa: real;
	begin
	distanciaa:= sqrt(sqr(x.x1 - x.x2)+sqr(y.y1 - y.y2));
	
end;
begin

	writeln('Ingrese la coordenada del primer punto en x');
	readln(x.x1);
	writeln('Ingrese la coordenada del primer punto en y');
	readln(y.y1);
	writeln('Ingrese la coordenada del segundo punto en x');
	readln(x.x2);
	writeln('Ingrese la coordenada del segundo punto en y');
	readln(y.y2);

	writeln('la distancia es',distancia(x,y));

end.

