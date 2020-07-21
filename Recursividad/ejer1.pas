program ejer1;

type 
		tlista=record	//tipo para la lista
							info:char;	//tipo del campo info
							next:^tlista;	//puntero a tlista
						end;
						
var
num,fact,fib: integer;
q: ^tlista;

//definicion de la accion para inicializar una lista
procedure ini(var l:^tlista);
var
	aux: ^tlista;	//puntero a lista
begin
	new(aux);	//pido memoria para usar
	(^aux).next:=nil;
	l:=aux;	
	dispose(aux);	//libero la memoria pedida anterior mente
end;	//fin de la accion para inicializar la lista

//definicion para cargar la lista
procedure cargar(var l:^tlista);
var
	aux,aux2: ^tlista;
	resp,i: integer;
	car:char;
begin
	writeln('Ingrese la cantidad de elementos que quiere cargar');
	readln(resp);
	if resp=0 then
		writeln('No ingreso elementos')
	else
	begin
		for i:=0 to resp do
		begin
			aux:=l;
			new(aux2);
			writeln('Igrese lo que quiere cargar');
			readln(car);
			(^aux2).info:=car;
			l:=aux2;
			(^aux2).next:=(^l).next;
		end;	//fin del para
end;	//fin de la accion para cargar la lista
//definicion de la accion
procedure print(l:tlista);
begin
	ini(l);
	cargar(l);
	if (l=nil) then
		writeln('NO HAY NADA');
	else
		if (l<>nil) then
		begin
			writeln((^l).info);
			print((^l).next);
	end;
end;	//fin de la accion
//definicion de la primer funcion
function factorial(n:integer):integer;
begin
	if (n=0) then
		factorial:=1
	else
		if (n>0) then 
		begin
			factorial:=(n*factorial(n-1));	//utilizo recursividad
	end;	//fin del if
end;	//fin de la funcion

//definicion de la segunda funcion
function fibonacci(n:integer):integer;
begin
	if (n=0) then
		fibonacci:=0
	else 
		if (n=1) then
			fibonacci:=1
		else
			if (n>=1) then
				fibonacci:=fibonacci(n-1)+fibonacci(n-2);
end;	//fin de la funcion fibonacci

begin	//inicio del programa			
	writeln('Ingrese el numero a factorear');
	readln(num);
	fact:=factorial(num);	//funcion para calcular el factor
	writeln('El resultado es: ',fact);
	writeln('Ingrese el numero a fibonacciar');
	readln(num);
	fib:=fibonacci(num);	//funcion para calcular el termino de la serie fibonacci
	writeln('El resultado es: ',fib)
end.	//fin del programa
	
