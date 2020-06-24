unit Logic;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils,Dialogs,Math;

type
  Ftype = file of Real;

procedure result;
procedure Save_Report;
procedure Save_TFile(Var f:Ftype);
procedure Open(Var f:Ftype);

implementation

uses unit1;

procedure Result;
var n,i:integer;
  r,s:real;
begin
 n:=strtoint(Main.angle_input.Text);
 r:=strtofloat(Main.rad_input.Text);
 s:=2*n*tan(Pi/n)*r/2;
 Main.result_memo.Lines.add('Кол-во углов: '+Main.angle_input.Text+#13+#10+
                       'Радиус вписанной окружности: '+Main.rad_input.Text+#13+#10+
                       'Площадь многоугольника: '+floattostr(s)+#13+#10);
end;

procedure Save_Report;
var Name:string;
begin
  Main.SaveDialog1.Filter:= 'Текстовый файл|*.txt|Word Файл|*.doc|Все файлы|*.*';
  if not Main.SaveDialog1.Execute then exit;
  Name:= Main.SaveDialog1.FileName;
  Main.Result_Memo.Lines.SaveToFile(Name);
end;

procedure Save_TFile(Var f:Ftype);
var Name:string;
begin
      Main.OpenDialog1.Filter:= 'Типизированные файлы|*.dat|Все файлы|*.*';
      if not Main.OpenDialog1.Execute then exit;
      Name := Main.OpenDialog1.FileName;
      AssignFile(f,Name);
      Rewrite(f);
      Write(f,StrToFloat(Main.angle_input.Text));
      Write(f,StrToFloat(Main.rad_input.Text));
      CloseFile(f);
end;

procedure Open(Var f:Ftype);
var Name:string;
  s:Real;
begin
  Main.OpenDialog1.Filter:= 'Типизированные файлы|*.dat|Все файлы|*.*';
  if not Main.OpenDialog1.Execute then exit;
  Name:= Main.OpenDialog1.FileName;
  AssignFile(f,Name);
  Reset(f);
  Read(f,s);
  Main.angle_input.Text:=FloatToStr(s);
  Read(f,s);
  Main.rad_input.Text:=FloatToStr(s);
end;


end.

