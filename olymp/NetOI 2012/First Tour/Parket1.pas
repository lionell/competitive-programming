program Parket1;{F}
var n1, n2, n3, n4, n5, z1, z2, s: int64;
begin
 read(n1, n2, n3, n4, n5);
 s:=n5 + n4 + n3;
 z1:=n4;
 z2:=n3;
 if (n2 < z2) then
  begin
   z2:=z2 - n2;
   z1:=z1 + z2*2;
  end
 else
  begin
   n2:=n2 - z2;
   s:=s + n2 div 2;
   z1:=z1 + n2 div 2;
   if (n2 mod 2 = 1) then
    begin
     inc(s);
     z1:=z1 + 3;
    end;
  end;
 if (n1 > z1) then
  begin
   n1:=n1 - z1;
   s:=s + n1 div 5;
   if (n1 mod 5 > 0) then inc(s);
  end;
 write(s);
end.