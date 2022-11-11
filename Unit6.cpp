//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit6.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGRID"
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{

}

//---------------------------------------------------------------------------
void __fastcall TForm6::CheckBox4Click(TObject *Sender)
{
if (CheckBox4 ->Checked == true)
        {Edit3->Enabled=true;
         Button3->Enabled=true;}
     else
         {Edit3->Enabled=false;
         Button3->Enabled=false;}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button3Click(TObject *Sender)
{
OpenDialog1->Execute();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::OpenDialog1SelectionChange(TObject *Sender)
{
Edit3->Text= OpenDialog1->FileName;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action)
{
Form6->Enabled=false;
Form6->Visible=false;
Form1->Enabled=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm6::CColorGrid1Click(TObject *Sender)
{
Form1->Color=CColorGrid1->ForegroundColor;
Form1->DateTimePicker1->Color= CColorGrid1->BackgroundColor;
Form6->Color=Form1->Color;
Form5->Color=Form1->Color;
}
//---------------------------------------------------------------------------




void __fastcall TForm6::CheckBox5Click(TObject *Sender)
{
if (CheckBox5->Checked==false && CheckBox6->Checked==false && CheckBox8->Checked==false && CheckBox10->Checked==false)
Form1->Height=415;
else Form1->Height=671 + Form1->StatusBar1->Height;
if (CheckBox5->Checked==true) Form1->Image57->Visible=true;
                         else  Form1->Image57->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CheckBox6Click(TObject *Sender)
{
if (CheckBox5->Checked==false && CheckBox6->Checked==false && CheckBox8->Checked==false && CheckBox10->Checked==false)
Form1->Height=415;
else Form1->Height=671 + Form1->StatusBar1->Height;
if (CheckBox6->Checked==true) Form1->GroupBox5->Visible=true;
                         else  Form1->GroupBox5->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CheckBox7Click(TObject *Sender)
{
if (CheckBox5->Checked==false && CheckBox6->Checked==false && CheckBox8->Checked==false && CheckBox10->Checked==false)
Form1->Height=415;
else Form1->Height=671  + Form1->StatusBar1->Height;
if (CheckBox7->Checked==true) {Form1->Image41->Visible=true;
                               Form1->Label17->Visible=true;}
                         else  {Form1->Image41->Visible=false;
                                Form1->Label17->Visible=false;}
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CheckBox8Click(TObject *Sender)
{
if (CheckBox5->Checked==false && CheckBox6->Checked==false && CheckBox8->Checked==false && CheckBox10->Checked==false)
Form1->Height=415;
else Form1->Height=671  + Form1->StatusBar1->Height;
if (CheckBox8->Checked==true) { Form1->GroupBox1->Visible=true;
                                Form1->Memo1->Height=265;
                                 Form1->Image57->Top=408;
                                 Form1->Image57->Left=224;
                                 Form1->Image57->Height=209;
                                 Form1->Image57->Width=169;
                                  }
                         else  {Form1->GroupBox1->Visible=false;
                                if (CheckBox10->Checked==true)
                                  Form1->Memo1->Height=329;
                                    else
                                      {Form1->Image57->Top=280;
                                       Form1->Image57->Left=568;
                                       Form1->Image57->Height=289;
                                       Form1->Image57->Width=265;}}

}
//---------------------------------------------------------------------------

void __fastcall TForm6::CheckBox9Click(TObject *Sender)
{
if (CheckBox5->Checked==false && CheckBox6->Checked==false && CheckBox8->Checked==false && CheckBox10->Checked==false)
Form1->Height=415;
else Form1->Height=671  + Form1->StatusBar1->Height;
if (CheckBox9->Checked==true) Form1->Label16->Visible=true;
                         else  Form1->Label16->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CheckBox10Click(TObject *Sender)
{
if (CheckBox5->Checked==false && CheckBox6->Checked==false && CheckBox8->Checked==false && CheckBox10->Checked==false)
Form1->Height=415;
else Form1->Height=671 + Form1->StatusBar1->Height;

if (CheckBox10->Checked==true) {Form1->Memo1->Visible=true;
                                Form1->GroupBox1->Top=554;
                                Form1->Image57->Top=408;
                                Form1->Image57->Left=224;
                                Form1->Image57->Height=209;
                                Form1->Image57->Width=169;}

                         else  {Form1->Memo1->Visible=false;
                                if (CheckBox8->Checked==true)
                                   Form1->GroupBox1->Top=280;

                                    else
                                      {Form1->Image57->Top=280;
                                       Form1->Image57->Left=568;
                                       Form1->Image57->Height=289;
                                       Form1->Image57->Width=265;}}
}
//---------------------------------------------------------------------------

void __fastcall TForm6::CheckBox11Click(TObject *Sender)
{
if (CheckBox11->Checked==true) Form1->FormStyle=fsStayOnTop;
                         else  Form1->FormStyle=fsNormal;


}
//---------------------------------------------------------------------------



void __fastcall TForm6::BitBtn1Click(TObject *Sender)
{
// FontDialog1->Options << fdApplyButton;
  FontDialog1->Execute();

}
//---------------------------------------------------------------------------

