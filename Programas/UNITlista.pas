Unit Unilista;
Interface
Const
N= 256;
Type
Telem=record
           Ape:string;
           Nom:string;
           Edad:0..100;
        end;
Tnuevo=record
						Nomn:string;
						Edadn:0..100;
				end;
Tarre=array[1..N] of Telem;
TData=record
          a:Tarre;
          cant:0..N;
       end;
Trango=0..N;

Function vacia(lista:TData): boolean;
Function llena(lista:TData):boolean;
procedure crear (var lista:TData);
procedure insertar (var lista: TData; x:Telem);
procedure suprimir (var lista:TData);
procedure buscar(lista:TData; name:string; var pos:Trango);
procedure modificar(var lista: TData);
procedure mostrar (lista:TData);
procedure LeerName(var x : Telem);

Implementation
Function vacia(lista:TData): boolean;
Begin
   lista.cant :=0;
end;

Function llena(lista:TData):boolean;
Begin
   lista.cant:= N;
end;

procedure crear (var lista:TData);
Begin
  lista.cant:=0;
end;

procedure insertar (var lista:TData; x:Telem);
Begin
       lista.cant:=lista.cant + 1;
       lista.a[lista.cant]:=x;
end;

procedure suprimir (var lista:TData);
Begin
      lista.cant:=lista.cant-1;
end;

procedure buscar(lista:TData; name:string; var pos:Trango);
Var	
	i:integer;
Begin
	Writeln('Ingrese el Apellido de la persona');
	Read(name);
	i:=1;
	while (i<=lista.canta) and (name <> lista.a[i].Ape) do begin
		i:= i+1;
	end;
	if i<= lista.cant then
		pos:= i;
	else begin
		pos:=0;
	end;	
					
end;

procedure modificar(var lista:TData);
var
  op:1..2;
  name:string;
  ed:0..100;
  pos:Trango;
  n: Tnuevo;
Begin
	buscar(lista,name,pos);
	Writeln('¿Que quiere modificar? 1=Nombre/2=Edad');
	read(op);
	if op=1 then begin
		Writeln('Ingrese el nuevo Nombre');
		read(n.Nomn);
		lista.a[i].Nom :=n.Nomn;
		else begin
		if op=2 then begin
			Writeln('Ingrese la nueva Edad');
			read(n.Edadn);
			lista.a[i].Edad:=n.Edadn;		
		end;
	end;   
		

end;

procedure mostrar (lista:TData);
var
   i:0..N;
Begin
   for i:=1 to lista.cant do
     begin
     writeln('Apellido: ',lista.a[i].Ape,'  Nombre: ',lista.a[i].Nom,'  Edad: ',lista.a[i].Edad)
   end;
end;

procedure LeerName(var x:Telem);
Begin
  writeln('Ingres el apellido');
  readln(x.Ape);
  writeln('Ingrese el nombre');
  readln(x.Nom);
  writeln('Ingrese la edad');
  readln(x.Edad);
end;
End.
