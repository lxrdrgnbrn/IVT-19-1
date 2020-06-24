unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus,Logic,LCLtype;

type

  { TMain }

  TMain = class(TForm)
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
    result_memo: TMemo;
		SaveDialog1: TSaveDialog;
    procedure Label1Click(Sender: TObject);
    procedure Label2Click(Sender: TObject);
		procedure MenuItem2Click(Sender: TObject);
		procedure MenuItem3Click(Sender: TObject);
		procedure MenuItem4Click(Sender: TObject);
		procedure MenuItem5Click(Sender: TObject);
		procedure MenuItem6Click(Sender: TObject);
    procedure result_buttonClick(Sender: TObject);
    procedure result_memoChange(Sender: TObject);
  private

  public

  end;

var
  Main: TMain;
  Ft:Ftype;


implementation

{$R *.lfm}

{ TMain }

procedure TMain.Label1Click(Sender: TObject);
begin

end;

procedure TMain.Label2Click(Sender: TObject);
begin

end;

procedure TMain.MenuItem2Click(Sender: TObject);
begin
Open(ft);
end;

procedure TMain.MenuItem3Click(Sender: TObject);
begin
Save_Tfile(ft);
end;

procedure TMain.MenuItem4Click(Sender: TObject);
begin
Save_Report;
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
ex:=Application.MessageBox('Вы хотите выйти?','Выход',MB_YESNO);
if ex=IDYES then
  application.Terminate;
end;


procedure TMain.result_buttonClick(Sender: TObject);
begin
Result;
end;

procedure TMain.result_memoChange(Sender: TObject);
begin

end;

end.

