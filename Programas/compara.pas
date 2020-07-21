Program comparacion;
Var 
Nadador_1, Nadador_2, Nadador_3:  real;

BEGIN

WRITE('ingresa Nadador_1 ');
READLN(Nadador_1);
WRITE('ingresa Nadador_2 ');
READLN(Nadador_2);
WRITE('ingresa Nadador_3 ');
READlN(Nadador_3);

	if(Nadador_1<Nadador_2)and(Nadador_1<Nadador_3)
	then begin
	writeln('El Nadador_1 esta en el primer puesto');
	end;

	if(Nadador_2<Nadador_1)and(Nadador_2<Nadador_3)
	then begin
	writeln('El Nadador_2 esta en el primer puesto');
	end;

	if(Nadador_3<Nadador_1)and(Nadador_3<Nadador_2)
	then begin
	writeln('El Nadador_3 esta en el primer puesto');
	end;

	if(Nadador_1>Nadador_2)and(Nadador_1<Nadador_3)
	then begin
	writeln('El Nadador_1 esta en el segundo puesto');
	end;

	
	if(Nadador_2>Nadador_1)and(Nadador_2<Nadador_3)
	then begin
	writeln('El Nadador_2 esta en el segundo puesto');
	end;
	
	
	if(Nadador_3>Nadador_1)and(Nadador_3<Nadador_2)
	then begin
	writeln('El Nadador_3 esta en el segundo puesto');
	end;

	
	if(Nadador_1>Nadador_2)and(Nadador_1>Nadador_3)
	then begin
	writeln('El Nadador_1 esta en el tercer puesto');
	end;

	
	if(Nadador_2>Nadador_1)and(Nadador_2>Nadador_1)
	then begin
	writeln('El Nadador_2 esta en el tercer puesto');
	end;

	
	if(Nadador_3>Nadador_1)and(Nadador_3>Nadador_2)
	then begin
	writeln('El Nadador_3 esta en el tercer puesto');
	end;
if(Nadador_1=Nadador_3)and(Nadador_3=Nadador_2)and(Nadador_2=Nadador_3)
	then begin
	writeln('Los Nadadores Han Empatado');
	end;
	
Writeln('Muchas Gracias Mundo');
END.








