program swap;

var

a: integer;

procedure swap (var x,y: integer);
	var 
		x1, y1: integer;
	begin 
		x1:= x;
		y1:= y;
		x1:= x1 + y1;
		y1:= x1 - y1;
		x1:= x1 - y1;
		x:= x1;
		y:= y1;
	end;


begin

writeln('Ingrese numero 1');
readln(a);
writeln('Ingrese numero 2');
readln(a);
swap(a,a);


writeln('Primer numero ', a ,' Segundo numero ', a);
end.
