Program Mayor_Menor100;
var 
num: integer;

Begin
 writeln('Ejercicio 1, mayor, menor o igual a 100');
 writeln('Ingrese un numero');
 readln(num);
 if(num>100) 
then begin
  writeln('El numero ', num,' es mayor a 100');
 end
 else begin
  if(num<100)
then begin
    writeln('El numero ', num,' es menor a 100');
 end
 else begin
   writeln('El numero ', num,' es 100');
 end
 end;
End.


