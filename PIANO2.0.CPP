                                         //SHERIN MIRIAM CHERIAN 
                                            // November 2015
				       //VIRTUAL BEEP PIANO PROGRAM
                                   // Version 2 - In-Built Songs + Piano


#include<iostream.h>
#include<dos.h>
#include<ctype.h>
#include<conio.h>
#include<process.h>
#include<graphics.h>


//Drawing the piano

void draw_piano()                      
{ //background
  setbkcolor(BLACK);
  setcolor(YELLOW);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
  outtextxy(90,50,"THE VIRTUAL BEEP PIANO");
  settextstyle(SMALL_FONT,HORIZ_DIR,5);
  outtextxy(270,400,"PRESS X TO QUIT");
  //white keys
  setfillstyle(SOLID_FILL,WHITE);
  int left, right,i;
  for(i=1,left=20,right=55;i<17;++i,left+=38,right+=38)
  bar(left,250,right,360);
  setfillstyle(SOLID_FILL,WHITE);
  bar(7,150,right,250);
  //black keys
  setfillstyle(SOLID_FILL,BLACK);
  bar(42,150,70,250);
  bar(78,150,106,250);

  bar(156,150,184,250);
  bar(192,150,220,250);
  bar(228,150,256,250);

  bar(306,150,334,250);
  bar(342,150,370,250);

  bar(419,150,449,250);
  bar(458,150,488,250);
  bar(496,150,525,250);


  bar(570,150,596,250);
  //note names
  setcolor(YELLOW);
  settextstyle(SMALL_FONT,HORIZ_DIR,6);
  //octave 1
  outtextxy(35,363,"q"); outtextxy(56,129,"1");
  outtextxy(75,363,"w"); outtextxy(92,129,"2");
  outtextxy(112,363,"e");outtextxy(170,129,"3");
  outtextxy(150,363,"r");outtextxy(206,129,"4");
  outtextxy(189,363,"t");outtextxy(242,129,"5");
  outtextxy(227,363,"y");
  outtextxy(269,363,"u");
  //octave2
  outtextxy(302,363,"d");outtextxy(320,129,"6");
  outtextxy(340,363,"f");outtextxy(356,129,"7");
  outtextxy(378,363,"g");outtextxy(432,129,"8");
  outtextxy(416,363,"h");outtextxy(473,129,"9");
  outtextxy(454,363,"j");outtextxy(510,129,"0");
  outtextxy(492,363,"k");
  outtextxy(530,363,"l");
  outtextxy(568,363,";");
}


void flash_sound(int freq,int top_leftx,int bottom_rightx,int type,int pause=150)
{

  sound(freq);
  setfillstyle(SOLID_FILL,YELLOW);        //To flash color and produce
					  //sound when user hits key.

  if(type==1)//checks if black/white key
  bar(top_leftx,250,bottom_rightx,360);
  else if(type==0)
  bar(top_leftx,150,bottom_rightx,250);

  delay(pause);
  nosound();
  if(type==1)
  { setfillstyle(SOLID_FILL,WHITE);
    bar(top_leftx,250,bottom_rightx,360);
  }
  else if(type==0)
  { setfillstyle(SOLID_FILL,BLACK);
    bar(top_leftx,150,bottom_rightx,250);
  }
}

void key_press()   //identifies what key is pressed and
		  //performs accordingly.
{
  char ch;
  while(1)
  { if(kbhit())
    {
      ch=getch();
      switch(ch)
      { //black keys
	case '1':{ flash_sound(138,42,70,0);} break;
	case '2':{ flash_sound(155,78,106,0);} break;
	case '3':{ flash_sound(185,156,184,0);} break;
	case '4':{ flash_sound(207,192,220,0);} break;
	case '5':{ flash_sound(233,228,256,0);} break;
	case '6':{ flash_sound(277,306,334,0);} break;
	case '7':{ flash_sound(311,342,370,0);} break;
	case '8':{ flash_sound(369,419,446,0);} break;
	case '9':{ flash_sound(415,458,488,0);} break;
	case '0':{ flash_sound(466,496,525,0);} break;
	//white keys
	case 'q':{ flash_sound(131,20,55,1);} break;
	case 'w':{ flash_sound(147,58,93,1);} break;
	case 'e':{ flash_sound(164,96,131,1);} break;
	case 'r':{ flash_sound(174,134,169,1);} break;
	case 't':{ flash_sound(195,172,207,1);} break;
	case 'y':{ flash_sound(220,210,245,1);} break;
	case 'u':{ flash_sound(246,248,283,1);} break;
	case 'd':{ flash_sound(261,286,321,1);} break;
	case 'f':{ flash_sound(293,324,359,1);} break;
	case 'g':{ flash_sound(329,362,397,1);} break;
	case 'h':{ flash_sound(349,400,435,1);} break;
	case 'j':{ flash_sound(391,438,473,1);} break;
	case 'k':{ flash_sound(440,476,511,1);} break;
	case 'l':{ flash_sound(493,514,549,1);} break;
	case ';':{ flash_sound(523,552,587,1);} break;
	case 'x':case'X':{ closegraph();exit(0);}  //exit program
      }

    }
  }
}
void SSONG()
{  delay(500);
   flash_sound(195,172,207,1,500); //lift
   flash_sound(174,134,169,1,500);
   flash_sound(164,96,131,1,500);
   flash_sound(174,134,164,1,500);
   flash_sound(195,172,207,1,500);
   flash_sound(220,210,245,1,500);
   flash_sound(195,172,207,1,1000);
   flash_sound(329,362,397,1,500); //In
   flash_sound(293,324,359,1,500); //search
   flash_sound(261,286,321,1,500);
   flash_sound(220,210,245,1,500);
   flash_sound(195,172,207,1,500);
   flash_sound(220,210,245,1,500);
   flash_sound(195,172,207,1,1000);
   flash_sound(261,286,321,1,500);  //On
   flash_sound(246,248,283,1,500);    //ward
   flash_sound(261,286,321,1,500);
   flash_sound(220,210,245,1,500);
   flash_sound(293,324,359,1,500);
   flash_sound(261,286,321,1,500);
   flash_sound(246,248,283,1,1000);   //gether
   flash_sound(220,210,245,1,500);  //let
   flash_sound(246,248,283,1,500);
   flash_sound(220,210,245,1,500);
   flash_sound(195,172,207,1,500);
   flash_sound(220,210,245,1,500);
   flash_sound(246,248,283,1,500);
   flash_sound(261,286,321,1,1000);   //bright
   flash_sound(293,324,359,1,500);     //come
   flash_sound(261,286,321,1,500);
   flash_sound(246,248,283,1,500);
   flash_sound(261,286,321,1,500);
   flash_sound(293,324,359,1,1400);  //praise
   flash_sound(293,324,359,1,500);  //In
   flash_sound(329,362,397,1,500);   //hope
   flash_sound(293,324,359,1,500);
   flash_sound(261,286,321,1,500);
   flash_sound(293,324,359,1,500);
   flash_sound(329,362,397,1,1400);   //raise
   flash_sound(195,172,207,1,500);
   flash_sound(174,134,169,1,500);
   flash_sound(164,96,131,1,500);
   flash_sound(174,134,169,1,500);
   flash_sound(195,172,207,1,1400);     //trace
   flash_sound(329,362,397,1,1200);
   flash_sound(293,324,359,1,600);
   flash_sound(261,286,321,1,600);
   flash_sound(220,210,245,1,800);
   flash_sound(220,210,245,1,800);
   flash_sound(293,324,359,1,1200);    //glo
   flash_sound(261,286,321,1,500);
   flash_sound(246,248,283,1,800);
   flash_sound(195,172,207,1,1000);    //fame
   flash_sound(261,286,321,1,800);     //come
   flash_sound(293,324,359,1,800);
   flash_sound(329,362,397,1,800);
   flash_sound(261,286,321,1,800);//for
   flash_sound(293,324,359,1,550);
   flash_sound(293,324,359,1,550);
   flash_sound(261,286,321,1,550);
   flash_sound(246,248,283,1,550);
   flash_sound(261,286,321,1,1000);

}
void KATTHI()
{ for(int i=1;i<=4;++i)
  { flash_sound(164,96,131,1,400);
    flash_sound(174,134,169,1,150);
    flash_sound(164,96,131,1,400);
    flash_sound(147,58,93,1,150);
    if((i==1)||(i==2))
    { flash_sound(164,96,131,1,400);
      flash_sound(174,134,169,1,150);
      flash_sound(195,172,207,1,550);
    }
  }
  for(i=1;i<=3;++i)
  { flash_sound(164,96,131,1,440);
    flash_sound(174,134,169,1,150);
  }
  flash_sound(90,20,55,1,500);

  for(i=1;i<=4;++i)
  { flash_sound(164,96,131,1,400);
    flash_sound(174,134,169,1,150);
    flash_sound(164,96,131,1,400);
    flash_sound(147,58,93,1,150);
    flash_sound(164,96,131,1,400);
    flash_sound(174,134,169,1,150);
    flash_sound(195,172,207,1,550);


    flash_sound(174,134,169,1,400);
    flash_sound(195,172,207,1,150);
    flash_sound(207,192,220,0,400);

    if((i==1)||(i==3))
    { flash_sound(195,172,207,1,150);
      flash_sound(174,134,169,1,400);
      flash_sound(164,96,131,1,150);
      flash_sound(147,58,93,1,550);
    }
    else if((i==2)||(i==4))
    { flash_sound(174,134,169,1,150);
      flash_sound(164,96,131,1,700);
      delay(500);
    }
  }
  for(int j=1;j<=2;++j)
  { flash_sound(164,96,131,1,400);
    delay(200);
    for(i=1;i<=5;++i)
    { flash_sound(164,96,131,1,180);
      flash_sound(174,134,169,1,180);
      flash_sound(195,172,207,1,180);
      if((i==1)||(i==2)||(i==4))
      { flash_sound(164,96,131,1,400);
	delay(200);
      }
      else if(i==3)
      { flash_sound(164,96,131,1,180);
	flash_sound(174,134,169,1,180);
	flash_sound(195,172,207,180);
	flash_sound(174,134,169,1,180);
	flash_sound(195,172,207,1,180);
	flash_sound(207,192,220,0,180);
	flash_sound(164,96,131,1,400);
	delay(200);
      }
      else if(i==5)
      { flash_sound(207,192,220,0,180);
	flash_sound(195,172,207,1,180);
	flash_sound(174,134,169,1,180);
	flash_sound(164,96,131,1,550);
	flash_sound(147,58,93,1,180);
	flash_sound(164,96,131,1,180);
	flash_sound(174,134,169,1,180);
	flash_sound(164,96,131,1,550);
      }
    }
  }
}
void HYBD()
{ delay(500);
  for(int i=1;i<=2;++i)
  { flash_sound(131,20,55,1,500);
    flash_sound(147,58,93,1,500);flash_sound(131,20,55,1,500);
    flash_sound(174,134,169,1,500);flash_sound(164,96,131,1,900);
    flash_sound(131,20,55,1,500);
    flash_sound(147,58,93,1,500);flash_sound(131,20,55,1,500);
    flash_sound(195,172,207,1,500);flash_sound(174,134,169,1,900);
    flash_sound(131,20,55,1,500);
    flash_sound(261,286,321,1,500);
    flash_sound(220,210,245,1,500);flash_sound(174,134,169,1,500);
    flash_sound(164,96,131,1,500);flash_sound(147,58,93,1,900);
    flash_sound(233,228,256,0,500);
    flash_sound(220,210,245,1,500);flash_sound(174,134,169,1,500);
    if(i==1)
    { flash_sound(220,210,245,1,500);
      flash_sound(195,172,207,1,900);
    }
    else
    { flash_sound(195,172,207,1,500);
      flash_sound(174,134,169,1,900);
    }
  }
}

void Entry_msg()
{ char entry;
  setbkcolor(BLACK);
  setcolor(YELLOW);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
  outtextxy(215,50,"WELCOME");
  outtextxy(260,100,"MENU");
  outtextxy(160,150,"1.Play Piano");              //entry screen
  outtextxy(160,190,"2.PreRecorded");
  cin>>entry;
  if(entry=='1')
  { cleardevice();
    draw_piano();
    key_press();
  }
  else if(entry=='2')
  { int entry2;
    cleardevice();
    outtextxy(150,150,"1.Happy Birthday");              //entry screen
    outtextxy(150,190,"2.School Song");
    outtextxy(150,230,"3.Kathhi Theme");
    cin>>entry2;
    cleardevice();
    draw_piano();
    if(entry2==1)
       HYBD();
    else if(entry2==2)
       SSONG();
    else if(entry2==3)
       KATTHI();

    else
    { closegraph(),exit(0);}
  }
  else
  { closegraph(),exit(0);}

}


int main()
{ 
  
  clrscr();
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "c://turboc3//bgi");
  Entry_msg();
  return(0);

}
