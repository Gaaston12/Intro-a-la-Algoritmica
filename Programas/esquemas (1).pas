unit esquemas;

interface

uses utils;

procedure trat_sec_vacia(y:TData);
procedure inic_trat(y:TData; var x:integer);
procedure tratar(y:TData; var x:integer);
procedure trat_final(y:TData; x:integer; var z:integer);

implementation

procedure trat_sec_vacia(y:TData);
var
  i:integer;
begin
    i:=1;
    if (i = y.mark) then
    begin
      writeln('Secuencia vacia'); 
    end;
end;

procedure inic_trat(y:TData; var x:integer);
var
  i:integer;
begin
  i:=1;
  x:= y.seq[i];
end;

procedure tratar(y:TData; var x:integer );
var
  i:integer;
begin
  for i:=1 to y.mark-1 do begin
    if y.seq[i]>x 
    then begin
      x:=y.seq[i]
    end;
  end;
end;


procedure trat_final(y:TData; x:integer; var z:integer);
var
  i:integer;
begin
  i:=1;
  z:=-1;
  while i<y.mark do begin
    if y.seq[i]=x 
    then begin
      z:=z+1;
    end;
  i:=i+1;
  end;
  writeln('El mayor número es: ',x, ' y se repite: ' ,z, ' veces ');
end;

end.
