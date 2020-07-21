PROGRAM Espejo;
CONST
	max=15;
TYPE
	TArreglo = ARRAY [1..max] OF Char;
	TData = RECORD
					a: TArreglo;
					cant: 0..max+1;
				END;
VAR
	A: TData;
  pro : char;
PROCEDURE cargar (var arr: TData);
VAR
	i: Integer; 
BEGIN
	WRITELN('Ingrese la cantidad de letras a ingresar');
	READLN(arr.cant);
	WRITELN('Ingrese la palabra');
	FOR i:= 1 TO arr.cant DO BEGIN
		READLN(arr.a[i]);
	END;
		arr.cant:=i;
END;

FUNCTION espejo (d: TData):Char;
VAR
	i: Integer;
	c: Char;
BEGIN
	FOR i:=d.cant downto 0 do begin
		c:= d.a[i];
		WRITELN(c);
	END;
	espejo:=c
END;

BEGIN
	cargar(A);
  pro:= espejo(A);
END.







