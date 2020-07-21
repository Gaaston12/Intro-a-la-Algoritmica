											{determinacion de tipo de triangulos, By Michael Marchesano}
Program Triangulos;

Var
a,b,c:integer;    {aca determinamos como variables los lados del triangulo}


Begin	
	writeln('Ingrese el lado A');
	readln(a);
	writeln('Ingrese el lado B');
	readln(b);
	writeln('Ingrese el lado C');
	readln(c);

	if(a<>b) and (b<>c)															{si los tres lados son distintos}
	then begin
		writeln('El triangulo es escaleno');
	end;

	if(a=b) and (b=c)															{si los tres lados son iguales}																	
	then begin 
		writeln('El triangulo es equilatero');
	end;

	if(a=b) and (a<>c)														{Si dos lados son iguales y uno distinto}
	then begin 
		writeln('El triangulo es isoceles');
	end;

	if(a<>b) and (a=c)
	then begin
		writeln('El triangulo es isoceles');
	end;

	if(c=b) and (c<>a)
	then begin
		writeln('El triangulo es isoceles');
	end;

writeln('Muchas Gracias');
End.
