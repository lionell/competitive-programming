program Fibo;
var n, m, i, a1, a2, b1, b2, c1, c2: longint;
    s: real;
procedure Fib(t: longint; var x, y: longint);
var i: longint;
begin
 i:=0;
 while (i < t - 1) do
  begin
   inc(i);
   if (i = 1) then x:=1;
   if (i = 2) then y:=1;
   y:=x + y;
   x:=y - x;
  end;
  if t = 1 then
   begin
    x:=1;
    y:=0;
   end;
   if t = 2 then
   begin
    x:=0;
    y:=1;
   end;
   if t = 3 then
   begin
    x:=1;
    y:=1;
   end;
end;
begin
 read(m, c1, n, c2);
 if m = 1 then write(c1)
 else
  begin
   if (m = n) and (c1 = c2) then write('Impossible')
   else
    begin
     fib(m, a1, b1);
     fib(n, a2, b2);
     s:=(c2-b2*c1)/(a2*b1-a1*b2);
     if (abs(round(s)-s)<0.001) then write(round(s))
     else write('Impossible');
    end;
 end;
write();

end.
