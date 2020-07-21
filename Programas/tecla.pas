{este programa indentifica la clase de tecla que le ingreses...}

program  Tecla;

var
	caracter: char;  {variable independente}

begin

	writeln('INGRESE UN CARACTER');
	readln(caracter);

case caracter of
	'0'..'9': begin 
						writeln('Es un numero') 
						end;
	'a'..'z': begin 
						writeln('Es una letra minuscula')
						end;
	'A'..'Z': begin 
						writeln('Es una letra mayuscula') 
						end
	else
		begin 
		writeln('Es un caracter especial')
		end
	end;
end.

	


