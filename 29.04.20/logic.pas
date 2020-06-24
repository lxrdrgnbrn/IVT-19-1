unit Logic;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils,Dialogs,Math;

type perimeter=record
     n:integer;
     r:real;
     p:real;
end;
  mass=array[1..128] of perimeter;

  Ftype = file of Real;

procedure Result;
{procedure Save_Report;}
procedure Save_TFile(Var f:Ftype; n:integer; p,r:real);
procedure Open(Var f:Ftype);

implementation

uses unit1;

procedure Result;
var calc:perimeter;
begin
 calc.n:=strtoint(Main.angle_input.Text);
 calc.r:=strtofloat(Main.rad_input.Text);
 calc.p:=2*calc.n*tan(Pi/calc.n)*calc.r/2;
 ms[last_index].n:=calc.n;
 ms[last_index].r:=calc.r;
 ms[last_index].p:=calc.p;
 Main.TSG.RowCount:=Main.TSG.RowCount+1;
 Main.TSG.Cells[0, last_index] := inttostr(last_index);
 Main.TSG.Cells[1, last_index] := inttostr(calc.n);
 Main.TSG.Cells[2, last_index] := floattostr(calc.r);
 Main.TSG.Cells[3, last_index] := floattostr(calc.p);
end;

{procedure Save_Report;
var Name:string;
begin
  Main.SaveDialog1.Filter:= 'Текстовый файл|*.txt|Word Файл|*.doc|Все файлы|*.*';
  if not Main.SaveDialog1.Execute then exit;
  Name:= Main.SaveDialog1.FileName;
  Main.Result_Memo.Lines.SaveToFile(Name);
end;}

procedure Save_TFile(Var f:Ftype; n:integer; p,r:real);
var Name:string;
begin
      Main.OpenDialog1.Filter:= 'Типизированные файлы|*.dat|Все файлы|*.*';
      if not Main.OpenDialog1.Execute then exit;
      Name := Main.OpenDialog1.FileName;
      AssignFile(f,Name);
      Rewrite(f);
      Write(f,n);
      Write(f,r);
      Write(f,p);
      CloseFile(f);
end;

procedure Open(Var f:Ftype);
var Name:string;
  s:Real;
  i:integer;
begin
  Main.OpenDialog1.Filter:= 'Типизированные файлы|*.dat|Все файлы|*.*';
  if not Main.OpenDialog1.Execute then exit;
  Name:= Main.OpenDialog1.FileName;
  AssignFile(f,Name);
  Reset(f);
  while not (EOF) do
  begin
   read(f,s);
   main.tsg.cells[i,last_index]:=Floattostr(s);
   inc(i);
  end;
end;


end.

