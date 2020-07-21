
													{Este Programa esta hecho por Gaston Martin y es una simple calculadora que suma, resta, multiplica y divide}
PROGRAM Calculadora; 

VAR

	num1,num2: real;                           
	resultado: real;
	operador: char;

BEGIN 
	Writeln('Ingrese un numero 1');
  Readln(num1);
	Writeln('Ingrese un operador');
	readln(operador);
  Writeln('Ingrese un numero 2');
  Readln(num2);
 	

	IF (operador = '+') 											
	then begin
		resultado:= num1+num2;
  end
	else begin 
		if (Operador = '-')
		then begin
			resultado:= num1-num2;
		end
		else begin
			IF (operador = '*')
			then begin
				resultado:= num1*num2;
			end
			else begin
				IF (operador = '/') and (num2 <> 0)
				then begin 
					resultado:= num1/num2;
					
				end
	end;
		end;
			end;
	
	Writeln('El resultado es ',resultado:2:0);
END.

  
