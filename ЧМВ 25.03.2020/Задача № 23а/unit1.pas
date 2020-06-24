unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus, Logic, LCLType;

type

  { TMain }

  TMain = class(TForm)
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
  Main: TMain;
  ft:Ftype;
  Txt:Text;
  a:integer;

implementation

{$R *.lfm}

{ TMain }

procedure TMain.res_buttonClick(Sender: TObject);
begin
result;
end;

procedure TMain.MenuItem2Click(Sender: TObject);
begin
open(Ft);
end;

procedure TMain.MenuItem3Click(Sender: TObject);
begin
Save_TFile(ft);
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

