unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus, Logic,
	LCLtype, Grids;

type

  { TMain }

  TMain = class(TForm)//класс формы (главного окна)
    {Поля класса формы}
				MainMenu1: TMainMenu;
				MenuItem1: TMenuItem;
				MenuItem2: TMenuItem;
				MenuItem3: TMenuItem;
				MenuItem4: TMenuItem;
				MenuItem5: TMenuItem;
				MenuItem6: TMenuItem;
				OpenDialog1: TOpenDialog;
    result_button: TButton;
    angle_input: TEdit;
    rad_input: TEdit;
    Label1: TLabel;
    Label2: TLabel;
		SaveDialog1: TSaveDialog;
		TSG: TStringGrid;
		procedure FormCreate(Sender: TObject);
  procedure MenuItem2Click(Sender: TObject);
		procedure MenuItem3Click(Sender: TObject);
		procedure MenuItem4Click(Sender: TObject);
		procedure MenuItem5Click(Sender: TObject);
		procedure MenuItem6Click(Sender: TObject);
    procedure result_buttonClick(Sender: TObject);
  private

  public

  end;

var
  Main: TMain;//объект (экземпляр) класса формы
  Ft:Ftype;
  a:real;
  ms:mass;
  last_index:integer;
  n:integer;
  r:real;
  p:real;

implementation

{$R *.lfm}

{ TMain }
{Методы класса формы}
{Методы класса определяются в программе точно так же, как и обычные процедуры и функции,
за исключением того, что имя процедуры или функции, являющейся методом,
состоит из двух частей: имени класса, к которому принадлежит метод, и имени метода.
Имя класса от имени метода отделяется точкой.}
procedure TMain.MenuItem2Click(Sender: TObject);
begin
Open(ft);
end;

procedure TMain.FormCreate(Sender: TObject);
begin

end;

procedure TMain.MenuItem3Click(Sender: TObject);
begin
if (angle_input.Text<>'') and (rad_input.Text<>'') then
   begin
        if trystrtoFloat(angle_input.Text,a) and trystrtoFloat(rad_input.Text,a) then
           Save_TFile(ft,n,p,r)
        else
          begin
            ShowMessage('Данные введены неверно');
            angle_input.Text:='';
            rad_input.Text:='';
          end;
   end
else
    showMessage('Сначала введите данные');
end;

procedure TMain.MenuItem4Click(Sender: TObject);
begin
end;

procedure TMain.MenuItem5Click(Sender: TObject);
begin
ShowMessage('Автор: Иванов Илья'+#13+#10+
            'Задача №8'+#13+#10+
            'Определить периметр правильного n-угольника,'+#13+#10+
            'описанного около окружности радиуса r.'+#13+#10+
            'http://bgu-chita.ru/zadachnik/Glava01/index01.htm#z8');
end;

procedure TMain.MenuItem6Click(Sender: TObject);
var
ex:Word;
begin
ex:=Application.MessageBox('Вы действительно хотите выйти?','Выход',MB_YESNO);
if ex=IDYES then
  application.Terminate;
end;


procedure TMain.result_buttonClick(Sender: TObject);
begin
if (angle_input.Text<>'') and (rad_input.Text<>'') then
   begin
        if trystrtoFloat(angle_input.Text,a) and trystrtoFloat(rad_input.Text,a) then
          begin
               inc(last_index);
               result;
					end
				else
          begin
            ShowMessage('Данные введены неверно');
            angle_input.Text:='';
            rad_input.Text:='';
          end;
   end
else
    showMessage('Сначала введите данные');
end;

end.

