//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Graphics.hpp>
#include <jpeg.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TBevel *Bevel1;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TImage *Image13;
        TImage *Image14;
        TImage *Image15;
        TImage *Image16;
        TImage *Image17;
        TImage *Image18;
        TImage *Image19;
        TImage *Image20;
        TImage *Image21;
        TImage *Image22;
        TImage *Image23;
        TImage *Image24;
        TImage *Image25;
        TImage *Image26;
        TImage *Image27;
        TImage *Image28;
        TBevel *Bevel2;
        TMemo *Memo1;
        TMainMenu *MainMenu1;
        TMenuItem *Archivo1;
        TMenuItem *Nota1;
        TMenuItem *Cumple1;
        TMenuItem *Salir1;
        TMenuItem *Ver1;
        TMenuItem *Hoy1;
        TMenuItem *Buscar1;
        TMenuItem *Ayuda1;
        TMenuItem *About1;
        TMenuItem *Mes1;
        TMenuItem *Contenido1;
        TBevel *Bevel4;
        TImage *Image29;
        TImage *Image30;
        TImage *Image31;
        TLabel *Label3;
        TImage *Image32;
        TImage *Image34;
        TImage *Image33;
        TImage *Image35;
        TImage *Image36;
        TImage *Image37;
        TImage *Image38;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label14;
        TLabel *Label11;
        TLabel *Label12;
        TLabel *Label13;
        TLabel *Label1;
        TLabel *Label15;
        TImage *Image39;
        TImage *Image41;
        TGroupBox *GroupBox1;
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
        TGroupBox *GroupBox2;
        TLabel *Label20;
        TGroupBox *GroupBox3;
        TLabel *Label19;
        TLabel *Label2;
        TDateTimePicker *DateTimePicker1;
        TGroupBox *GroupBox4;
        TLabel *Label21;
        TImage *Image42;
        TImage *Image43;
        TComboBox *ComboBox2;
        TMenuItem *CuerpoHumano1;
        TComboBox *ComboBox1;
        TComboBox *ComboBox5;
        TMenuItem *Configurar1;
        TImage *Image57;
        TImage *Image40;
        TGroupBox *GroupBox5;
        TImage *Image44;
        TImage *Image45;
        TImage *Image46;
        TImage *Image47;
        TImage *Image48;
        TImage *Image49;
        TImage *Image50;
        TImage *Image51;
        TImage *Image52;
        TImage *Image53;
        TImage *Image54;
        TImage *Image55;
        TImage *Image56;
        TPopupMenu *PopupMenu1;
        TMenuItem *Hoy2;
        TMenuItem *Salir2;
        TMenuItem *Configuracin1;
        TMenuItem *Aadir1;
        TMenuItem *CumpleKin1;
        TMenuItem *CumpleAos1;
        TMenuItem *Nota2;
        TStatusBar *StatusBar1;
        void __fastcall Salir1Click(TObject *Sender);
        void __fastcall About1Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall Mes1Click(TObject *Sender);
        void __fastcall Image2Click(TObject *Sender);
        void __fastcall Image3Click(TObject *Sender);
        void __fastcall Image4Click(TObject *Sender);
        void __fastcall Image5Click(TObject *Sender);
        void __fastcall Image6Click(TObject *Sender);
        void __fastcall Image7Click(TObject *Sender);
        void __fastcall Image8Click(TObject *Sender);
        void __fastcall Image9Click(TObject *Sender);
        void __fastcall Image10Click(TObject *Sender);
        void __fastcall Image11Click(TObject *Sender);
        void __fastcall Image12Click(TObject *Sender);
        void __fastcall Image13Click(TObject *Sender);
        void __fastcall Image14Click(TObject *Sender);
        void __fastcall Image15Click(TObject *Sender);
        void __fastcall Image16Click(TObject *Sender);
        void __fastcall Image17Click(TObject *Sender);
        void __fastcall Image18Click(TObject *Sender);
        void __fastcall Image19Click(TObject *Sender);
        void __fastcall Image20Click(TObject *Sender);
        void __fastcall Image21Click(TObject *Sender);
        void __fastcall Image22Click(TObject *Sender);
        void __fastcall Image23Click(TObject *Sender);
        void __fastcall Image24Click(TObject *Sender);
        void __fastcall Image25Click(TObject *Sender);
        void __fastcall Image26Click(TObject *Sender);
        void __fastcall Image27Click(TObject *Sender);
        void __fastcall Image28Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Hoy1Click(TObject *Sender);
        void __fastcall CuerpoHumano1Click(TObject *Sender);
        void __fastcall DateTimePicker1Change(TObject *Sender);
        void __fastcall Nota1Click(TObject *Sender);
        void __fastcall Configurar1Click(TObject *Sender);
        void __fastcall ComboBox5Change(TObject *Sender);
        void __fastcall FormMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall GroupBox5MouseUp(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall GroupBox1MouseUp(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall CumpleKin1Click(TObject *Sender);
        void __fastcall Cumple1Click(TObject *Sender);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image29MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image30MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Label3MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image41MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image31MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Label1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Label15MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image57MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Memo1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall GroupBox5MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image43MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image39MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall GroupBox1MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        unsigned int Kines, Onda,KinD,Ano,Kin, Luna, Semana, Vinal, n, nn, **M;
        float K;
        AnsiString S[40];
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
