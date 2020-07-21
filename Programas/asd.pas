program asd;

Type
	
	//registro con info de la persona
	Telem=record
					nom: string;
					ape: string;
					sexo: string;
				end;
	//tipo para utilizar punteros
	Tnodo=record
					info:Telem;
					next:^Tnodo;
					back:^Tnodo;
				end;
var
 	q:^Tnodo;
 	a: Telem;
 	
 begin
 new(q);
 writeln('Ingrese el nombre');
 readln(a.nom);
 writeln('Ingrese el apellido');
 readln(a.ape);
 writeln('Ingrese el sexo');
 readln(a.sexo);
 (q^).info.nom:=a.nom;
 (q^).info.ape:=a.ape;
 (q^).info.sexo:=a.sexo;
 writeln((q^).info.nom);
 writeln((q^).info.ape);
 writeln((q^).info.sexo);
end.
