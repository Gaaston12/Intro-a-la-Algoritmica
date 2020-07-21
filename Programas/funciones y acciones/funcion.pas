program puntorecta;

type TPunto= record
						x: real;
						y: real;
	end;
type TRecta= record
						a: real;
						b: real;
	end;

	function recta(n: TPunto; m: TRecta): boolean;
		begin
			if ((n.y) = (m.a)*(n.x)+(m.b)) then 
				recta:= true
			else begin
				recta:= false
		end;
	end;
var
p: TPunto;
r: TRecta;

	procedure cargarpunto ( var p:TPunto; var r:TRecta);
	begin
		writeln('Ingrese la coordenada en x del punto');
		readln(p.x);
		writeln('Ingrese la coordenada en y del punto');
		readln(p.y);
		writeln('Ingrese la pendiente de la recta');
		readln(r.a);
		writeln('Ingrese el coeficiente de la recta');
		readln(r.b);
end;
begin

if recta(p,r) then
	writeln('El punto esta adentro de la recta')
else begin 
	writeln('El punto esta afuera de la recta');
end;


end.
