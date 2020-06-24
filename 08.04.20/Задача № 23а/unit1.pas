unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus, Logic, LCLType;

type

  { TMain }

  TMain = class(TForm)//класс формы (главного окна)
    {Поля класса формы}
    a_side: TEdit;
		MainMenu1: TMainMenu;
		MenuItem1: TMenuItem;
		MenuItem2: TMenuItem;
		MenuItem3: TMenuItem;
		MenuItem4: TMenuItem;
		MenuItem5: TMenuItem;
		MenuItem6: TMenuItem;
		OpenDialog1: TOpenDialog;
    res_memo: TMemo;
    res_button: TButton;
    b_side: TEdit;
    c_side: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
		SaveDialog1: TSaveDialog;
		procedure MenuItem2Click(Sender: TObject);
		procedure MenuItem3Click(Sender: TObject);
		procedure MenuItem4Click(Sender: TObject);
		procedure MenuItem5Click(Sender: TObject);
		procedure MenuItem6Click(Sender: TObject);
    procedure res_buttonClick(Sender: TObject);
  private

  public

  end;

var
  Main: TMain;//объект (экземпляр) класса формы
  ft:Ftype;
  a:Real;

implementation

{$R *.lfm}

{ TMain }
{Методы класса формы}
{Методы класса определяются в программе точно так же, как и обычные процедуры и функции,
за исключением того, что имя процедуры или функции, являющейся методом,
состоит из двух частей: имени класса, к которому принадлежит метод, и имени метода.
Имя класса от имени метода отделяется точкой.}
procedure TMain.res_buttonClick(Sender: TObject);
begin
if (a_side.Text<>'') and (b_side.Text<>'') and (c_side.Text<>'') then
   begin
        if (trystrtofloat(a_side.Text,a)
           and trystrtofloat(b_side.Text,a)
           and trystrtoFloat(c_side.Text,a)) then
           result
        else
          begin
            ShowMessage('Данные введены неверно');
            a_side.Text:='';
            b_side.Text:='';
            c_side.Text:='';
          end;
   end
else
    showMessage('Сначала введите данные');
end;

procedure TMain.MenuItem2Click(Sender: TObject);
begin
open(Ft);
end;

procedure TMain.MenuItem3Click(Sender: TObject);
begin
if (a_side.Text<>'') and (b_side.Text<>'') and (c_side.Text<>'') then
   begin
        if (trystrtofloat(a_side.Text,a)
           and trystrtofloat(b_side.Text,a)
           and trystrtoFloat(c_side.Text,a)) then
           Save_TFile(ft)
        else
          begin
            ShowMessage('Данные введены неверно');
            a_side.Text:='';
            b_side.Text:='';
            c_side.Text:='';
          end;
   end
else
    showMessage('Сначала введите данные');
end;

procedure TMain.MenuItem4Click(Sender: TObject);
begin
Save_report;
end;

procedure TMain.MenuItem5Click(Sender: TObject);
begin
ShowMessage('Автор: Иванов Илья'+#13+#10+
                      'Задача №23а'+#13+#10+
                      'Треугольник задан длинами сторон. Найти длины высот;'+#13+#10+
                      'http://bgu-chita.ru/zadachnik/Glava01/index01.htm#z23');
end;

procedure TMain.MenuItem6Click(Sender: TObject);
var
ex:Word;
begin
ex:=Application.MessageBox('Вы действительно хотите выйти?','Выход',MB_YESNO);
if ex=IDYES then
  application.Terminate;
end;

end.

