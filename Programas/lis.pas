unit lis;

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
			i,n:integer;
			resp:char;
			band:boolean;
		begin 
			band:=true;
			while (band=true) do 
			begin
				writeln('Quiere ingresar un elemento? s/n');
				read(resp);
				if resp='s' then
				begin
					writeln('Ingrese el elemento');
					readln(n); 
					new(p);
					p^.info:=n;
					p^.next:=x^.next;
					x^.next:=p;
					x:=p;
					x:=q
				else
					if resp='n' then
						begin
							band:=false;
							writeln('salio');
						end
					else
						writeln('Respuesta invalida');
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
