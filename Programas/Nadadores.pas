PROGRAM COMPARA; 

VAR 
Nadador_1, Nadador_2, Nadador_3:    integer;
mayor:      integer;
menor:     integer;
intermedio: integer;

BEGIN

WRITE('INGRESA Nadador_1 '); 
READLN(Nadador_1); 
WRITE('INGRESA Nadador_2 ');
READLN(Nadador_2); 
WRITE('INGRESA Nadador_3 '); 
READLN(Nadador_3);

 if(Nadador_1<Nadador_2)and(Nadador_1<Nadador_3)
 then begin
 writeln('El Nadador_1 está en el primer puesto');
 end;

if(Nadador_2<Nadador_1)and(Nadador_2<Nadador_3)
 then begin
 writeln('El Nadador_2 está en el primer puesto');
 end;

 if(Nadador_3<Nadador_1)and(Nadador_3<Nadador_2)
 then begin
 writeln('El Nadador_3 está en el primer puesto');
 end;

 if(Nadador_1>Nadador_2)and(Nadador_1<Nadador_3)
 then begin
 writeln('El Nadador_1 está en el segundo puesto');
 end;

 if(Nadador_2>Nadador_1)and(Nadador_2<Nadador_3)
 then begin
 writeln('El Nadador_2 está en el segundo puesto');
 end;

 if(Nadador_3>Nadador_1)and(Nadador_3<Nadador_2)
 then begin
 writeln('EL Nadador_2 está en el segundo puesto');
 end;

if(Nadador_1>Nadador_2)and(Nadador_1>Nadador_3)
 then begin 
 writeln('EL Nadador_1 está en el tercer puesto');
 end;

 if(Nadador_2>Nadador_1)and(Nadador_2>Nadador_1)
 then begin
 writeln('El Nadador_2 está en el tercer puesto');
 end;

 if(Nadador_3>Nadador_1)and(Nadador_3>Nadador_2)
 then begin
 writeln('El Nadador_3 está en el tercer puesto');
 end;

 if(Nadador_1=Nadador_3)and(Nadador_3=Nadador_2)and(Nadador_2=Nadador_3)
 then begin
 writeln ('Los Nadadores han empatado');
 end;
writeln('¡MUCHAS GRACIAS MUNDO!');
end.
