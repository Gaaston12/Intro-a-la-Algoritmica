program ejer9;
type Tarre= array[1..100] of char;
type Tregistro= record
	a: Tarre;
	cantidad: integer;
end;
var
	i,a: integer;
	cant: Tregistro;
	reves: char;
	
	function Capicua(x: Tregistro): boolean;
		var
			res: boolean;
		begin
			res:=true;
			for i:= 1 to x.cantidad do begin
				if (x.a[i])<>(x.a[x.cantidad-i+1]) then
					res:= false
				end;
		Capicua:=res;
		end;
		

begin

reves:=Capicua(cant);

writeln(Capicua);
end.
