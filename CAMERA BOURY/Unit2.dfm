object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 304
  ClientWidth = 531
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 160
    Top = 24
    Width = 65
    Height = 25
    Caption = 'ON'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 296
    Top = 24
    Width = 75
    Height = 25
    Caption = 'OFF'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 96
    Top = 112
    Width = 75
    Height = 41
    Caption = 'HAUT'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 96
    Top = 192
    Width = 75
    Height = 41
    Caption = 'BAS'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 160
    Top = 152
    Width = 75
    Height = 41
    Caption = 'DROITE'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 33
    Top = 152
    Width = 75
    Height = 41
    Caption = 'GAUCHE'
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 114
    Top = 161
    Width = 40
    Height = 25
    Caption = 'STOP'
    TabOrder = 6
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 400
    Top = 93
    Width = 75
    Height = 41
    Caption = 'ZOOM MAX'
    TabOrder = 7
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 400
    Top = 207
    Width = 75
    Height = 41
    Caption = 'ZOOM MIN'
    TabOrder = 8
    OnClick = Button9Click
  end
  object TrackBar1: TTrackBar
    Left = 360
    Top = 148
    Width = 150
    Height = 45
    TabOrder = 9
  end
  object Button10: TButton
    Left = 279
    Top = 152
    Width = 75
    Height = 41
    Caption = 'STOP ZOOM'
    TabOrder = 10
    OnClick = Button10Click
  end
end
