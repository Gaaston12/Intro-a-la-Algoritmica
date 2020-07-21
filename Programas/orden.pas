Program Orden;

var 
 tiemp_1:  real;
 tiemp_2:  real;
 tiemp_3:  real;

begin

WRITE('INGRESA tiemp_1 '); 
READLN(tiemp_1); 
WRITE('INGRESA tiemp_2 ');
READLN(tiemp_2); 
WRITE('INGRESA tiemp_3 '); 
READLN(tiemp_3);

if(tiemp_1<tiemp_2)and(tiemp_2<tiemp_3)
 then begin
 writeln('LOS NUMEROS ESTAN ORDENADOS DE MANERA ASCENDENTE');
end;

if(tiemp_1>tiemp_2)and(tiemp_2<tiemp_3)
 then begin
 writeln('LOS NUMEROS ESTAN DESORDENADOS');
end;
if(tiemp_2>tiemp_1)and(tiemp_2>tiemp_3)
 then begin
 writeln('LOS NUMEROS ESTAN DESORDENADOS');
end;

if(tiemp_1>tiemp_2)and(tiemp_2>tiemp_3)
 then begin
 writeln('LOS NUMEROS ESTAN ORDENADOS DE MANERA DESCENDENTES');
end;

end.
