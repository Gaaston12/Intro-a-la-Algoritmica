Program Menu;

uses lista2;

var 
n:Integer;
p,q:puntero;
pers:Data;


Procedure Cargar (Var x:Data);
Begin 
	Writeln('Ingrese los datos de la persona');
	Writeln(' ');
	Writeln('Ingrese el nombre');
	readln(x.nomb);
	Writeln('Ingrese el apellido');
	readln(x.apll);
	Writeln('Ingrese el dni');
	readln(x.dni);
end;	

	

Begin 
	
Writeln('Ingrese un numero entre el 1 y el 5 para ingresar a las opciones del menu');
readln(n);	

Case n of 
	1: Begin Inicializar(p,q) End;
	2: Begin Cargar(pers);IncertarF (p,q,pers)End;
	3: Begin SuprimirC(p,q) End;
	4: begin Mostrar (p,q) End;
	5: Begin Salir (p,q) End; 
	else 
		Writeln('Erro ingreso otro caracter')
	end; // fin del case



end. 
