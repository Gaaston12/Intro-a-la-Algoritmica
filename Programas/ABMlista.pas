Program Gestionar;
Uses unilista; {Unidades que utilizara el programa}
var
L:TData;
Reg:Telem;
opcion:1..5;

procedure Menu;
Begin
  Repeat
    writeln('Elija una opcion del menu');
    writeln(' ');
    writeln ('1- Agregar una apellido, nombre y edad');
    writeln ('2- Borrar un registro');
    writeln ('3- Modificar un registro (buscar por apellido)');
    writeln ('4-Listado completo de registros');
    writeln('5-salir');
    readln(opcion);
    case opcion of
       1: begin
            if not (llena(L)) then begin
               LeerName(reg); {lee los datos a insertar en la lista}
	       insertar(L,reg)
               end
	    else
	       writeln('Arreglo completo, no hay lugar')
          end;
       2:begin
            if not (vacia(L)) then
	       suprimir(L)
	    else
	       writeln('Lista vacia, nada que suprimir')
          end;
       3: modificar(L);
       4: mostrar(L);
     end;
  until opcion= 5;
end;

Begin { COMIENZO PROGRAMA PRINCIPAL}
Crear(L); {Crea la lista vacia}
Menu; {llama al menu}
End.
