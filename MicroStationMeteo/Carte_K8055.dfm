object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object connexion: TButton
    Left = 56
    Top = 24
    Width = 113
    Height = 49
    Caption = 'Connexion'
    TabOrder = 0
    OnClick = connexionClick
  end
  object Edit1: TEdit
    Left = 384
    Top = 112
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit1'
    OnChange = Edit1Change
  end
end
