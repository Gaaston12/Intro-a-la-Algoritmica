program Ejer12Practica7; 
uses crt;
const
fmax=10;
cmax=10;
type Tmatriz = record
							a: array [1..fmax,1..cmax] of integer;
							cantf: integer;
							cantc: integer;
						end;
var
c: Tmatriz;
opcion: char;
procedure Cargar(var m: Tmatriz);
	var
		i,j: integer;
	begin
		writeln('Ingrese la cantidad de las filas');
		readln(m.cantf);
		writeln('Ingrese la cantidad de las columnas');
		readln(m.cantc);
		for i:=1 to m.cantf do 
			for j:=1 to m.cantc do
				m.a[i,j]:= random(10)+1;
	end;
procedure Mostrar(x: Tmatriz);
	var
		i,j: integer;
	begin
	writeln('---------------');
	for i:=1 to x.cantf do
		for j:=1 to x.cantc do begin
			gotoxy(j,i);
			writeln(x.a[i,j]);
		end;
		writeln('----------------');
	end;

function SumaA(x: Tmatriz): integer;
	var
		i,j,result: integer;
	begin
		result:=0;
		
		for i:=1 to (x.cantf div 2) do
			for j:=1 to (x.cantc div 2)+1 do
				result:= result + x.a[i,j];
	sumaA:=result;
end; 

function SumaB(x: Tmatriz): integer;
	var
		i,j,result: integer;
	begin
		result:=0;
		for i:=1 to x.cantf do
			for j:=1 to i do
				result:= result + x.a[i,j];
	sumaB:=result;
	end;
	
procedure MostrarC(x: Tmatriz);
	var
		i,j: integer;
	begin
		for i:=1 to x.cantf do
			for j:=1 to x.cantc do begin
				gotoxy(j,i);
				if (i+j)=(x.cantc+1) then
					writeln(x.a[i,j]);
				end;
	end;

begin
	randomize;
	Cargar(c);
	ClrScr;
	Mostrar(c);
	repeat
		writeln('1. Sumar A 2. Suma B 3. Mostrar Flecha');
		readln(opcion);
		case opcion of
			'1': writeln(SumaA(c));
			'2': writeln(SumaB(c));
			'3': begin ClrScr; MostrarC(c); end
	  end;		
	until (opcion='1') or (opcion='2') or (opcion='3');
	writeln();
end.
