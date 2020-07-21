{
Desarrolle un algoritmo con el siguiente menú de opciones:
a) Inicializar una lista (crea una lista vacia)
b) Insertar un elemento en la lista (debe insertar al final)
c) Suprimir un elemento de la lista (debe suprimir a la cabeza de la lista)
d) Mostrar (debe visualizar todos los elementos de la lista)
e) Salir
Debe desarrollar cada una de las acciones y parametrizar adecuadamente. El tipo de los
elementos debe ser un registro con no menos de dos campos. 
	Gaston Martin DNI: 41.522.639
}
program ejerprac13;
//librerias a utilizar
uses Martin.lista, crt;
var
	puntq, puntp: q;
	per: Telem;
	op: integer;
begin
	textcolor(15);
	clrscr; //limpia la pantalla
	repeat
	writeln('---------------------------------------------------');
	//Muestra las opciones que tiene el usuario
	writeln('Elija una de las opciones');
	textcolor(9);
	writeln('---------------------------------------------------');
	writeln('Opcion 1. CREAR UNA LISTA VACIA');
	writeln('Opcion 2. INSERTAR UN ELEMENTO AL FINAL DE LA LISTA');
	writeln('Opcion 3. SUPRIMIR EL PRIMER ELEMENTO');
	writeln('Opcion 4. VER LOS ELEMENTOS DE LA LISTA');
	writeln('Opcion 5. SALIR');
	writeln('---------------------------------------------------');
	textcolor(15);
	writeln('Seleccione una de las opciones ingresando el numero');
	writeln('---------------------------------------------------');
	read(op);	//respuesta para usar en el case
	
//case para actuar segun la opcion elejida
	case op of
		1:	begin 
					clrscr; //limpia la pantalla
					writeln('Usted eligio crear una lista');
					inicializar(puntq,puntp); //llamado a la funcion
				end;
		2:	begin 
					clrscr; //limpia pantalla
					if  ((puntq=nil) and (puntp=nil)) then   
						writeln('cree una lista para poder ingresar un dato')
					else begin
					writeln('Usted eligio insertar un elemento al final de la lista');
					insertarf(puntq,puntp,per);//llamado a la fuincion
					end;
				end;
		3:	begin 
					clrscr; //limpia pantalla
					writeln('Usted eligio eliminar el primer elemento');
					supPrim(puntq,puntp); //llamado a la funcion
				end;
		4:	begin 
					clrscr; //limpia pantalla
					writeln('Usted eligio ver la lista');
					mostrar(puntq,puntp);//llamado a la funcion
				end;
		5:	begin 
					clrscr;//limpia pantalla
					writeln('Usted eligio salir');
					Liberar(puntq,puntp);//llamado a la funcion
				end;
		else
			writeln('La opcion ingresada no es valida');
	end;//fin del case	
	until (op=5); 			 
end.//fin del progrma
