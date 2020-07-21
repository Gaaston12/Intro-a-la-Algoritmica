{Este simple programa muestra los numeros multiplos de 5 entre 0 y 100, hecho por Gaston Martin}

program MUlt5;
var
 
num: integer;    {variable}

begin
writeln('Numeros Multiplos de 5');

num:= 0;      {le asigno 5 a la variable num}

	repeat     {accion interactiva}
	writeln(num);
	num:= num+5;			{a la variable num le sumo 5 cada vez que se repita este paso}
	until
	num>100				{se va a repetir hasta que la variable sea mayor que 100}
end.



{ALGORITMO Mult5
	LEXICO	
		num: entero
	INICIO	
		num <-- 5
		repetir
			num <-- num+5
		hasta
			num>100
 FIN.	}

