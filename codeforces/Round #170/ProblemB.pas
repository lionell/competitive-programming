program ProblemB;
var A: array[1..100] of string;
    n, i: longint;
    s: string;
    b: boolean;
function Next(d: string): string;
var i, l: longint;
    s: string;
    A: array[1..100] of byte;
begin
 fillchar(A, sizeof(A), 96);
 s:=d;
 if s = '' then s:='a'
 else
  begin
   for i:=1 to length(s) do A[length(s) - i + 1]:=ord(s[i]);
   l:=length(s);
   inc(A[1]);
   i:=1;
   while A[i] > 122 do
    begin
     A[i]:=97;
     inc(i);
     inc(A[i]);
    end;
   if i > l then l:=i;
   s:='';
   for i:=l downto 1 do s:=s + chr(A[i]);
  end;
 Next:=s;
end;
begin
 {assign(input, 'in.txt');
 reset(input);
 assign(output, 'out.txt');
 rewrite(output);}
 readln(n);
 for i:=1 to n do readln(A[i]);
 s:='';
 b:=true;
 i:=0;
 while (b) do
  begin
   inc(i);
   s:=Next(s);
   b:=false;
   for i:=1 to n do if pos(s, A[i]) <> 0 then b:=true;
  end;
 write(s);
end.
