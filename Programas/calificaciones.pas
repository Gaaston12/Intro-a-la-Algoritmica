PROGRAM		Calificaciones;
VAR
num: real;

BEGIN

	Writeln('Ingrese un numero valor ');
  Readln(num);

	IF(num>10)
		then begin
		writeln('Valor Ingresado No VALIDO');
	end;	
	IF(num<=10) and (num>=8)
		then begin
		writeln('La Calificación es un A');
	end;	
	IF(num=7)
		then begin
		writeln('La Calificación es un B');
	end;
	IF (num=6)
		then begin
		writeln('La Calificación es un C');
	end;
	IF (num=5)
		then begin
		writeln('La Calificación es un D');
	end;
	IF (num<=4) and (num>=1)
		then begin
		writeln('La Calificación es un E');
	end;

	If (num>=5) and (num<=10) 
		then begin
		writeln('Estas aprobado felicitaciones');
		end
		else begin
			if (num<5) and (num>=0)
		then begin
			writeln('Estas desaprobado, ponte a estudiar mas');
		end;
	end;
END.
