program  calcraices;

var
a,b,c,x1,x2,raiz: real;
inicio: char;

begin
	writeln('forma de la funcion cuadratica: Ax^ + Bx + C');
	writeln('Comenzemos... (S/N) //N= FIN');
	readln(inicio);
	if((inicio<>'n')and(inicio<>'N'))
	then
		writeln('Ingrese el valor de A');
		readln(a);
		if a <> 0 then
			begin
			writeln('Ingrese el valor de B');
			readln(b);
			writeln('Ingrese el valor de C');
			readln(c);
		raiz:= sqrt((b)*(b)-(4*a*c));
	x1:= ((-(b)) + raiz)/(2*a);
	x2:= ((-(b)) - raiz)/(2*a);
	writeln('La raiz x1, es:', x1:3:2);
	writeln('La raiz x2; es:', x2:3:2);
		end
		else 
			begin
				writeln('La divicion por 0 no existe');
		end;

end.


