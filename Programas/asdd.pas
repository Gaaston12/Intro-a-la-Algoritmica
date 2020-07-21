
{Dada una letra  mayúscula y un número natural n, el siguiente programa genera y muestra  n caracteres 
de forma aleatoria e indica si la letra dada aparece o no en la secuencia generada.}

Program Adivinar;              {hecho por Gaston Martin}

var
n: char;
x: integer;
r: char;

	procedure secuencia(n:char;x:integer);
		var
		i: integer;
		b:boolean;		
		begin
    b:=false;
		for i := 1 to x do                     {ciclo para generar una secuencia de caracteres}
		begin
				r:= chr(random((90-65)+1)+65);				{traduce segun valores de la tabla de ascci}
		    writeln(r);
				if(n=r)
					then
						b:=true;
		end;
  	if(b)
			then
			writeln('Aparece')										{si el caracter es igual a uno de los carateres de a secuencia muentra APARECE}
    else
			writeln('No aparece')									{si no es igual a ninguno de los caracteres aparece NO APARECE}
	
     end;

begin
	repeat                                         	{es el ciclo encargado para que el usuario solamente ingrese letras mayusculas}
	begin
		writeln('Ingrese una letra MAYUSCULA');
		readln(n);
	end;
	until (n>= 'A') and (n<='Z');													{el rango a las que pertenece los caracteres para cada letra mayuscula}
writeln('Ingrese un numero natural');
readln(x);
secuencia(n,x)                                      {invocacion de la funcio}

end.


