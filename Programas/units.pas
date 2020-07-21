unit units;

interface

type
	elem= record  
				info:integer; 
				next:^elem
       end;
       
	puntq=^elem;	
	
	procedure ini(var q:puntq);
	procedure Carga(q:puntq;var x:puntq);
	procedure Mostrar(Var q:puntq);
	
implementation
	
	procedure ini(var q:puntq);
		begin
			new(q);
			q^.next:=nil;
			
		end;	
	

	procedure Carga(q:puntq;var x:puntq);
		var 
			p:puntq;		
			resp:char;

		begin 
				writeln('Quiere ingresar un elemento? s/n');
				read(resp);
				if resp='s' then
				begin
					while (resp='s') do
						begin
							new(p);
							writeln('Ingrese el elemento');
							readln(p^.info); 
							p^.next:=x^.next;
							x^.next:=p;
							x:=p;
					end;
					x:=q;
			end;
		end;	
		
	procedure Mostrar(var q:puntq);
		var
			aux:puntq;
		begin
			aux:=q;
			while (aux^.next<>nil) do begin 
				aux:=aux^.next;
				write(aux^.info)
			end
		end;
end.
