program ejer11;
const
	max=10;
type Tarre = array [1..max] of integer;
type Tregistro = record
									a: Tarre;
									cant: 0..max+1;
									end;
var
	A,B: Tregistro;
	
	function existe(c: Tregistro; n: integer): boolean;
	var
		j: integer;
		r: boolean;
	begin
		r:=false;
		for j:=1 to max do begin
			if (c.a[j]=n) then
				r:=true;
			end;
		existe:=r;
	end;
	
	procedure cargar(var p: Tregistro);
	var
		i: integer;
		m: integer;
	begin
		writeln('Ingrese el numero maximo del intevalo');
		readln(m);	
		writeln('---------------------------------------');
		Randomize;
		for i:=1 to max do begin
			p.a[i]:= Random(m);
		end;
	end;
	
	procedure copiar(arre1: Tregistro; var arre2: Tregistro);
	var
	i,j: integer;
	begin
	i:=1;
	j:=1;
	arre2.a[j]:=arre1.a[i];
		for i:=2 to max do begin
			if (existe(arre2,arre1.a[i])=false) then
				j:=j+1;
				arre2.a[j]:=arre1.a[i];
			end;
		arre2.cant:=j;
	end;
	
	procedure mostrar(r1: Tregistro; r2: Tregistro);
	var
		i:integer;
	begin
		for i:=1 to max do begin
			writeln(r1.a[i]);
		end;
		writeln('========================================');
		for i:=1 to r2.cant do begin
			writeln(r2.a[i]);
		end;
	end;
	
begin
	cargar(A);
	copiar(A,B);
	mostrar(A,B);
end.
