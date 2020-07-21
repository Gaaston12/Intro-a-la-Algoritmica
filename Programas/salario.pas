program HorasTrab;

var
	horastrabajadas: Real;
	salsem:  Real;
begin
	writeln('Ingrese las horas trabajadas');
	readln(horastrabajadas);
	if (horastrabajadas<=40)
		then 
		salsem := (horastrabajadas*40)
		else 
			salsem := (horastrabajadas-40)*15+40*10;

writeln('El salario es ' , salsem: 3:2 );
end.
