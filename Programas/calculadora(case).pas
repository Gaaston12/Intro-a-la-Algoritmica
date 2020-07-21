{Este programa es una simple calculadora que suma, resta, divide o multiplica que anda como el orto, creada por Gaston Martin }
program Calculadora;
var
	num1: real;             {variable dato}
	num2: real;             {variable dato}
	res: real;              {resultado de la operacion}
	op: char;               {operador}
begin
	writeln('INGRESE UN NUMERO');
	readln(num1);
	writeln('INGRESE EL OPERADOR +,-,/,*');
	READLN(OP);
	writeln('INGRESE UN NUMERO');
	readln(num2);

case op of
	'+': res := (num1 + num2);
	'-': res := (num1 - num2);
 	'/': 
			begin
				if (num2<>0) then
				res:= (num1 / num2);
			end;
	'*': res := (num1 * num2);
end;
writeln('EL RESULTADO ES', res:2:0)
end.

