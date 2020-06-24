unit Logic;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils,Dialogs;

type
  Ftype = file of Real;

procedure result;
procedure Save_Report;
procedure Save_TFile(Var f:Ftype);
procedure Open(Var f:Ftype);

implementation

uses unit1;

procedure Result;
var a,b,c,h,p:real;
begin
a:=strtofloat(Main.a_side.text);
b:=strtofloat(Main.b_side.text);
c:=strtofloat(Main.c_side.text);
if (a + b > c) and (a + c > b) and (b + c > a) then
begin
p:=(a+b+c)/2;
h:=2/a*sqrt(p*(p-a)*(p-b)*(p-c));
Main.res_memo.lines.add('Сторона a: '+Main.a_side.text+#13+#10+
                            'Сторона b: '+Main.b_side.text+#13+#10+
                            'Сторона c: '+Main.c_side.text+#13+#10+
                            'Высота треугольника: '+floattostr(h)+#13+#10);
end
else
ShowMessage('Такой треугольник не существует');
end;

procedure Save_Report;
var Name:string;
begin
  Main.SaveDialog1.Filter:= 'Текстовый файл|*.txt|Word Файл|*.doc|Все файлы|*.*';
  if not Main.SaveDialog1.Execute then exit;
  Name:= Main.SaveDialog1.FileName;
  Main.Res_Memo.Lines.SaveToFile(Name);
end;

procedure Save_TFile(Var f:Ftype);
var Name:string;
begin
      Main.OpenDialog1.Filter:= 'Типизированные файлы|*.dat|Все файлы|*.*';
      if not Main.OpenDialog1.Execute then exit;
      Name := Main.OpenDialog1.FileName;
      AssignFile(f,Name);
      Rewrite(f);
      Write(f,StrToFloat(Main.A_side.Text));
      Write(f,StrToFloat(Main.B_side.Text));
      Write(f,StrToFloat(Main.C_side.Text));
      CloseFile(f);
end;

procedure Open(Var f:Ftype);
var Name:string;
  s:Real;
begin
  if not Main.OpenDialog1.Execute then exit;
  Name:= Main.OpenDialog1.FileName;
  AssignFile(f,Name);
  Reset(f);
  Read(f,s);
  Main.A_side.Text:=FloatToStr(s);
  Read(f,s);
  Main.B_Side.Text:=FloatToStr(s);
  Read(f,s);
  Main.C_side.Text:=FloatToStr(s);
end;


end.

