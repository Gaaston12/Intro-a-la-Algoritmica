program test;

uses utils, esquemas;

var
	a : TData;
	i : Integer;
  mayor:integer;
  cant:integer;
begin
	fullAleatory(a);
	show(a);	
  i:=0;
  if a.mark=1
  then begin
    trat_sec_vacia(a);
  end
  else begin
		inic_trat(a,mayor);
		while (i<a.mark) do begin      			
      tratar(a,mayor);
      i:=i+1;
		end;
			trat_final(a,mayor,cant);     
  end
end.


