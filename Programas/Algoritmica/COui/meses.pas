{este programa es un simple ejecutable que te calcula el salario de un trabajador dependiendo de la cantidad  de horas que trabajó}

program meses;

var
dias: integer;
begin	
	writeln('Ingrese un numero que represente un año'); 
	readln(dias);
if (dias>=13)
		then begin
		writeln('El valor ingresado es invalido');
end;

if (dias<=0)
		then begin
		writeln('El valor ingresado es invalido');

end;
		 	
	case dias of

		1: writeln('EL mes ingresado es enero y tiene 31 dias');
		2: writeln('El mes ingresado es febrero y tiene 28 dias');
		3: writeln('El mes ingresado es marzo y tiene 31 dias');
		4: writeln('El mes ingresado es abril y tiene 30 dias');
		5: writeln('El mes ingresado es mayo y tiene 31 dias');
		6: writeln('El mes ingresado es junio y tiene 30 dias');
		7: writeln('El mes ingresado es julio y tiene 31 dias');
		8: writeln('El mes ingresado es agosto y tiene 30 dias');
		9: writeln('El mes ingresado es septiembre 30 dias');
		10: writeln('El mes ingresado es octubre y tiene 31 dias');
		11: writeln('El mes ingresado es noviembre y tiene 30 dias');
		12:	writeln('El mes ingresado es diciembre y tiene 30 dias');

	end;
			 	
			
end.

