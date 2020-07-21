Program mas100;
var 
input:integer;

Begin
  writeln('ingrese numero entero');
  readln(input);
  if(input>100)
then begin
  writeln('El Numero ',input,' es mayor a 100');
  end
  else begin
   if(input<100)
then begin
   writeln('el numero ',input,' es menor a 100');
   end
  else begin
   writeln('el numero ' ,input,' es igual a 100')
  end
  end;
End.
