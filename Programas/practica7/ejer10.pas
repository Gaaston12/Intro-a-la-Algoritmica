program Espejo;
const
	max=15;
type
	TArre = array [1..max] of Char;
	TRegistro = record
					a: TArre;
					cant: 0..max+1;
				end;
var
	A: TRegistro;
procedure cargar (var arr: TRegistro);
var
	i: Integer; 
begin
	writeln('Ingrese la cantidad de letras a ingresar');
	readln(arr.cant);
	writeln('Ingrese la palabra');
	for i:= 1 to arr.cant do begin
		read(arr.a[i]);
	end;
		arr.cant:=i;
end;

function espejo (d: TRegistro):Char;
var
	i: Integer;
	c: Char;
begin
	for i:=d.cant downto 1 do begin
		c:= d.a[i];
		writeln(c);
	end;
	espejo:=c
end;

begin
	cargar(A);
	writeln('---------------------');
  espejo(A);
end.
