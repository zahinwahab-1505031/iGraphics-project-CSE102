# include "iGraphics.h"
FILE *fp;
int ball_x=150, ball_y=100;//level final
int ball_x1=210, ball_y1=150;//level 1
int ball_x2=150, ball_y2=230;//level 2
int ball_x3=170, ball_y3=160;//level 3
int ball_x4=150, ball_y4=170;//level 4
int ball_x5=200, ball_y5=120;//level 5
int ball_x6=260, ball_y6=120;//level 6
int dx, dy;
int levelscore;
int sum=0;
int c;
int f=120;
int f11=35;//level 1 score
int f12=35;//level 2 score
int f13=45;//level 3 score
int f14=55;//level 4 score
int f15=45;//level 5 score
int f16=45;
int z=0;
int flag=0;
int flag1=0;//level 1
int flag2=0;
int flag3=0;
int flag4=0;
int flag5=0;
int flag6=0;//level 5

int f1=0;
int f2=0;
int f3=0;

int d;
int d1;
int d2;
int d3;
int d4;
int d5;
int d6;
int h[100];
int y;
int t;
int t1;
int t2;
int t3;
int t4;
int t5;
int t6;

void saveToFile(int c[], int N) {
    int i = 0;
    fp = fopen("play.txt", "w");
    for (i = 0; i < N; i++) {
        fprintf(fp, "%d\n", c[i]);
    }
    fclose(fp);
}

int loadFromFile(int s[]) {
    int i = 0;

    fp = fopen("play.txt", "r");
    if (fp == NULL) return 0;
    while(!feof(fp)) {
        fscanf(fp,"%d\n", &s[i] );
        i++;
    }
    fclose(fp);
   // printf("%d",i);
    return i;
}
void play(int y)
{
   int scoreplay[100];
   int i = loadFromFile(scoreplay);
   int kp;
   scoreplay[i] = y;
   i++;
   saveToFile(scoreplay, i);

}
int score(int d)
{
    return d;

}

int score1(int d1)
{
    return d1;

}

int score2(int d2)
{
    return d2;

}

int score3(int d3)
{
    return d3;

}

int score4(int d4)
{
    return d4;

}

int score5(int d5)
{
    return d5;

}

int score6(int d6)
{
    return d6;

}
int totalscore(int levelscore){
    sum+=levelscore;
    return sum;
}



/*
	function iDraw() is called again and again by the system.
*/

void iDraw()
{
    int i=0;
    int a,b,c;
    int a7;
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
    int a6;
    char sc[100];
    char sc1[100];
    char sc2[100];
    char sc3[100];
    char sc4[100];
    char sc5[100];
    char sc6[100];
    char tc[100];
    int j;

    iClear();
    iSetColor(255, 255,255);
    iFilledRectangle(0,0,400,400);

    if(ball_x==270 && ball_y==290 &&flag==1 && f>=0)//270,290
    {
        z=7;
        flag=2;
        play(f);

    }
      if(flag==2){
        iSetColor(255,0,0);
        t=score(f);
        itoa(t,sc,10);
        iText(70,90,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(250,90,sc,GLUT_BITMAP_TIMES_ROMAN_24);
    iText(100,200,"press 'n' for new level",GLUT_BITMAP_TIMES_ROMAN_24);

        }
       if(ball_x!=270 && ball_y!=290 && flag==1 ){
                a7=score(f);
                if(a7<0)    {

                iSetColor(255,0,0);
        iText(20,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
        }
        }

        if((ball_x== 200)&& (ball_y==240 )&& (f2==1))
        {
            iSetColor(255,0,0);
            iText(200,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
            flag=5;

        }

          if((ball_x==130) && (ball_y== 280) &&(f1==1))
        {

                    iSetColor(255,0,0);
                    iText(200,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                    flag=5;

        }
        if((ball_x== 130&& ball_y==240 )&&(f3=1))
        {
            iSetColor(255,0,0);
                    iText(200,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                    flag=5;
        }

        if(ball_x1==200 && ball_y1==260 &&flag1==1)//200,260
    {
        z=1;
        flag1=2;
        play(f11);

    }

    if (flag1==2){
        iSetColor(255,0,0);
        t1=score1(f11);

        itoa(t1,sc1,10);
        iText(70,90,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(250,90,sc1,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,200,"press 'n' for new level",GLUT_BITMAP_TIMES_ROMAN_24);


    }


       if(ball_x1!=200 && ball_y1!=260 &&flag1==1){
                    a1=score1(f11);
                    if(a1<0)    {

                    iSetColor(255,0,0);
                    iText(250,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                    }
        }
     if(ball_x2==260 && ball_y2==250 && flag2==1)
        {
            z=2;
            flag2=2;
            play(f12);
        }
    if(flag2==2){

        iSetColor(255,0,0);
        t2=score2(f12);

        itoa(t2,sc2,10);
        iText(70,90,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(250,90,sc2,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,200,"press 'n' for new level",GLUT_BITMAP_TIMES_ROMAN_24);

 }

    if(ball_x2!=260 && ball_y2!=250 && flag2==1){
                a2=score1(f12);
                if(a2<0)    {
                iSetColor(255,0,0);
                iText(250,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                }

    }


  if(ball_x3==180 && ball_y3==160 && flag3==1){
        z=3;
    flag3=2;
      play(f13);
  }
 if (flag3==2){
        iSetColor(255,0,0);
        t3=score3(f13);

        itoa(t3,sc3,10);
        iText(70,90,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(250,90,sc3,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,200,"press 'n' for new level",GLUT_BITMAP_TIMES_ROMAN_24);



 }

  if(ball_x3!=180 && ball_y3!=160 && flag3==1){
                a3=score3(f13);
                if(a3<0)    {
                iSetColor(255,0,0);
                iText(250,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                }

    }



 if(ball_x4==200 && ball_y4==300 && flag4==1){
        z=4;
    flag4=2;
    play(f14);
 }
 if(flag4==2)
 {
        iSetColor(255,0,0);
        t4=score4(f14);
         play(t4);
        itoa(t4,sc4,10);
        iText(70,90,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(250,90,sc4,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,200,"press 'n' for new level",GLUT_BITMAP_TIMES_ROMAN_24);


 }

if(ball_x4!=200 && ball_y4!=300 && flag4==1){
                a4=score4(f14);
                if(a4<0)    {
                iSetColor(255,0,0);
                iText(250,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                }

    }





    if(ball_x5==200 && ball_y5==250 && flag5==1)
    {
        z=5;
        flag5=2;
        play(f15);
    }

    if (flag5==2){
        iSetColor(255,0,0);
        t5=score5(f15);
         play(t5);
        itoa(t5,sc5,10);
        iText(70,90,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(250,90,sc5,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,200,"press 'n' for new level",GLUT_BITMAP_TIMES_ROMAN_24);

    }
  if(ball_x5!=200 && ball_y5!=250 && flag5==1){
                a5=score5(f15);
                if(a5<0)    {
                iSetColor(255,0,0);
                iText(250,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                }

    }

  if(ball_x6==130 && ball_y6==230 && flag6==1)
    {
        z=6;
        flag6=2;
        play(f16);
    }

    if (flag6==2){
        iSetColor(255,0,0);
        t6=score6(f16);
         play(t6);
        itoa(t6,sc6,10);
        iText(70,90,"YOUR SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
        iText(250,90,sc5,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,200,"press 'n' for new level",GLUT_BITMAP_TIMES_ROMAN_24);

    }
 if(ball_x6!=130 && ball_y6!=230 && flag6==1){
                a6=score6(f16);
                if(a6<0)    {
                iSetColor(255,0,0);
                iText(250,70,"game over level not completed" ,GLUT_BITMAP_TIMES_ROMAN_24);
                }

    }


if(flag2==1&& f12>=0){
        iClear();
     iSetColor(255, 255,255);
    iFilledRectangle(0,0,400,400);
    //drawTexture(0,0,smurfTexture);
    iShowBMP(0,0,"background.bmp");
    iSetColor(255, 0, 0);
    iFilledCircle(ball_x2,ball_y2,4);
    iSetColor(0, 0,0);

    t2=score2(f12);
    a=t2%10;
    t2=t2/10;
    b=t2%10;
    t2=t2/10;
    c=t2%10;
    if(a==0||a==7||a==9||a==6||a==2||a==3||a==5||a==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9||a==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(a==6||a==8||a==4||a==2||a==3||a==5||a==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(a==8||a==4||a==5||a==6||a==9||a==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(a==0||a==2||a==6||a==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(a==9||a==2||a==3||a==5||a==6||a==0||a==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(a==1||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0)iLine(390+i,380,390+i,370);//1 3 4 5 7 6 8 0 9

    i-=13;

    if(b==0||b==7||b==9||b==6||b==2||b==3||b==5||b==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(b==6||b==8||b==4||b==2||b==3||b==5||b==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(b==8||b==4||b==5||b==6||b==9||b==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(b==0||b==2||b==6||b==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(b==9||b==2||b==3||b==5||b==6||b==0||b==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)iLine(390+i,380,390+i,370);

    i-=13;

    if(c==0||c==7||c==9||c==6||c==2||c==3||c==5||c==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(c==6||c==8||c==4||c==2||c==3||c==5||c==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(c==8||c==4||c==5||c==6||c==9||c==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(c==0||c==2||c==6||c==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(c==9||c==2||c==3||c==5||c==6||c==0||c==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)iLine(390+i,380,390+i,370);
//maze lines
//these are starting and finishing line

    iLine(155,165,155,225);//donerightkey
    iLine(155,235,155,265);
    iLine(165,185,165,255);
    iLine(175,175,175,195);
    iLine(175,205,175,245);
    iLine(185,195,185,215);
    iLine(185,225,185,235);
    iLine(185,245,185,265);
    iLine(195,215,195,225);
    iLine(205,205,205,225);
    iLine(205,255,205,265);
    iLine(215,195,215,215);
    iLine(225,185,225,225);
    iLine(225,245,225,255);
    iLine(235,175,235,245);
    iLine(245,195,245,255);
    iLine(255,165,255,245);
    iLine(255,255,255,265);
    //horizontal
    iLine(155,165,255,165);
    iLine(155,175,245,175);
    iLine(185,185,225,185);
    iLine(235,185,245,185);
    iLine(175,195,215,195);
    iLine(195,205,205,205);
    iLine(185,215,195,215);
    iLine(155,225,165,225);
    iLine(195,225,225,225);
    iLine(185,235,235,235);
    iLine(175,245,225,245);
    iLine(235,245,245,245);
    iLine(165,255,175,255);
    iLine(195,255,205,255);
    iLine(215,255,235,255);
    iLine(155,265,255,265);



    iSetColor(255, 0, 0);

    iText(270,370, "SCORE:",
          GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(0, 0, 128);
    iText(270,245, "FINISH",
          GLUT_BITMAP_HELVETICA_10);

    iText( 105,225 , "START",
           GLUT_BITMAP_HELVETICA_10);
}
        if(flag1==1 &&  f11>=0){
       //level 1

       iClear();
       iSetColor(255,255,255);
       iFilledRectangle(0,0,400,400);
       iSetColor(255, 0, 0);
       iFilledCircle(ball_x1,ball_y1,4);
       iSetColor(0,0,0);
       t1=score1(f11);
    a=t1%10;
    t1=t1/10;
    b=t1%10;
    t1=t1/10;
    c=t1%10;
    if(a==0||a==7||a==9||a==6||a==2||a==3||a==5||a==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9||a==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(a==6||a==8||a==4||a==2||a==3||a==5||a==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(a==8||a==4||a==5||a==6||a==9||a==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(a==0||a==2||a==6||a==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(a==9||a==2||a==3||a==5||a==6||a==0||a==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(a==1||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0)iLine(390+i,380,390+i,370);//1 3 4 5 7 6 8 0 9

    i-=13;

    if(b==0||b==7||b==9||b==6||b==2||b==3||b==5||b==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(b==6||b==8||b==4||b==2||b==3||b==5||b==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(b==8||b==4||b==5||b==6||b==9||b==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(b==0||b==2||b==6||b==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(b==9||b==2||b==3||b==5||b==6||b==0||b==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)iLine(390+i,380,390+i,370);

    i-=13;

    if(c==0||c==7||c==9||c==6||c==2||c==3||c==5||c==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(c==6||c==8||c==4||c==2||c==3||c==5||c==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(c==8||c==4||c==5||c==6||c==9||c==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(c==0||c==2||c==6||c==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(c==9||c==2||c==3||c==5||c==6||c==0||c==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)iLine(390+i,380,390+i,370);
       //horizontal line y-co-ordinate is constant
       iLine(155,155,205,155);
       iLine(215,155,255,155);

       iLine(165,165,175,165);
       iLine(185,165,195,165);
       iLine(235,165,245,165);

       iLine(155,175,165,175);
       iLine(185,175,215,175);
       iLine(225,175,245,175);

       iLine(165,185,195,185);
       iLine(205,185,225,185);
       iLine(235,185,255,185);

       iLine(175,195,185,195);
       iLine(195,195,205,195);
       iLine(225,195,235,195);

       iLine(155,205,175,205);
       iLine(185,205,195,205);
       iLine(205,205,225,205);
       iLine(235,205,245,205);

       iLine(175,215,185,215);
       iLine(195,215,235,215);

       iLine(155,225,175,225);
       iLine(215,225,235,225);
       iLine(245,225,255,225);

       iLine(165,235,195,235);
       iLine(205,235,225,235);
       iLine(235,235,245,235);

       iLine(165,245,175,245);
       iLine(195,245,205,245);
       iLine(215,245,225,245);

       iLine(155,255,195,255);
       iLine(205,255,255,255);

       //vertical line x is constant
       iLine(155,155,155,255);

       iLine(165,185,165,195);
       iLine(165,215,165,225);
       iLine(165,235,165,245);

       iLine(175,165,175,185);
       iLine(175,195,175,215);

       iLine(185,215,185,225);
       iLine(185,235,185,255);

       iLine(195,165,195,175);
       iLine(195,185,195,205);
       iLine(195,215,195,225);
       iLine(195,245,195,255);


       iLine(205,155,205,165);
       iLine(205,175,205,195);
       iLine(205,215,205,225);
       iLine(205,205,205,245);

       iLine(215,165,215,175);
       iLine(215,195,215,205);
       iLine(215,245,215,255);

       iLine(225,155,225,165);
       iLine(225,175,225,195);

       iLine(235,195,235,215);
       iLine(235,225,235,255);

       iLine(245,165,245,175);
       iLine(245,195,245,205);
       iLine(245,215,245,225);
       iLine(245,235,245,245);

       iLine(255,155,255,255);

 }

if(flag3==1  && f13>=0){
    iClear();
    iSetColor(255, 255,255);
    iFilledRectangle(0,0,400,400);

    iSetColor(255, 0, 0);
    iFilledCircle(ball_x3,ball_y3,4);
    iSetColor(0, 0,0);

    t3=score3(f13);
    a=t3%10;
    t3=t3/10;
    b=t3%10;
    t3=t3/10;
    c=t3%10;
    if(a==0||a==7||a==9||a==6||a==2||a==3||a==5||a==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9||a==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(a==6||a==8||a==4||a==2||a==3||a==5||a==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(a==8||a==4||a==5||a==6||a==9||a==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(a==0||a==2||a==6||a==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(a==9||a==2||a==3||a==5||a==6||a==0||a==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(a==1||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0)iLine(390+i,380,390+i,370);//1 3 4 5 7 6 8 0 9

    i-=13;

    if(b==0||b==7||b==9||b==6||b==2||b==3||b==5||b==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(b==6||b==8||b==4||b==2||b==3||b==5||b==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(b==8||b==4||b==5||b==6||b==9||b==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(b==0||b==2||b==6||b==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(b==9||b==2||b==3||b==5||b==6||b==0||b==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)iLine(390+i,380,390+i,370);

    i-=13;

    if(c==0||c==7||c==9||c==6||c==2||c==3||c==5||c==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(c==6||c==8||c==4||c==2||c==3||c==5||c==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(c==8||c==4||c==5||c==6||c==9||c==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(c==0||c==2||c==6||c==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(c==9||c==2||c==3||c==5||c==6||c==0||c==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)iLine(390+i,380,390+i,370);
 iLine(155,165,155,275);//donerightkey
    iLine(165,175,165,185);
    iLine(165,195,165,215);
    iLine(165,255,165,265);
    iLine(175,165,175,175);
    iLine(175,185,175,195);
    iLine(175,215,175,235);
    iLine(185,175,185,255);
    iLine(195,175,195,185);
    iLine(195,195,195,205);
    iLine(195,225,195,265);
    iLine(205,165,205,195);
    iLine(215,185,215,195);
    iLine(215,205,215,235);
    iLine(215,255,215,265);
    iLine(225,175,225,225);
    iLine(225,235,225,255);
    iLine(235,225,235,235);
    iLine(235,255,235,265);
    iLine(245,165,245,275);

    //horizontal
    iLine(155,165,165,165);
    iLine(185,165,245,165);
    iLine(165,175,185,175);
    iLine(215,175,235,175);
    iLine(195,185,205,185);
    iLine(215,185,225,185);
    iLine(235,185,245,185);
    iLine(155,195,175,195);
    iLine(205,195,215,195);
    iLine(235,195,245,195);
    iLine(175,205,185,205);
    iLine(195,205,235,205);
    iLine(165,215,175,215);
    iLine(185,215,205,215);
    iLine(235,215,245,215);
    iLine(155,225,165,225);
    iLine(195,225,215,225);
    iLine(205,235,235,235);
    iLine(165,245,185,245);
    iLine(195,245,215,245);
    iLine(225,245,235,245);
    iLine(165,255,185,255);
    iLine(205,255,215,255);
    iLine(235,255,245,255);
    iLine(175,265,205,265);
    iLine(215,265,235,265);
    iLine(155,275,245,275);


    iSetColor(255, 0, 0);

    iText(270,370, "SCORE:",
          GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(0, 0, 128);
    iText(180,140, "FINISH",
          GLUT_BITMAP_HELVETICA_10);

    iText( 135,140 , "START",
           GLUT_BITMAP_HELVETICA_10);
}

if(flag4==1&& f14>=0){
    iClear();
    iSetColor(255, 255,255);
    iFilledRectangle(0,0,400,400);
    iSetColor(255, 0, 0);
    iFilledCircle(ball_x4,ball_y4,4);
    iSetColor(0, 0,0);
    t4=score4(f14);
    a=t4%10;
    t4=t4/10;
    b=t4%10;
    t4=t4/10;
    c=t4%10;
    if(a==0||a==7||a==9||a==6||a==2||a==3||a==5||a==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9||a==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(a==6||a==8||a==4||a==2||a==3||a==5||a==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(a==8||a==4||a==5||a==6||a==9||a==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(a==0||a==2||a==6||a==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(a==9||a==2||a==3||a==5||a==6||a==0||a==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(a==1||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0)iLine(390+i,380,390+i,370);//1 3 4 5 7 6 8 0 9

    i-=13;

    if(b==0||b==7||b==9||b==6||b==2||b==3||b==5||b==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(b==6||b==8||b==4||b==2||b==3||b==5||b==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(b==8||b==4||b==5||b==6||b==9||b==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(b==0||b==2||b==6||b==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(b==9||b==2||b==3||b==5||b==6||b==0||b==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)iLine(390+i,380,390+i,370);

    i-=13;

    if(c==0||c==7||c==9||c==6||c==2||c==3||c==5||c==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(c==6||c==8||c==4||c==2||c==3||c==5||c==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(c==8||c==4||c==5||c==6||c==9||c==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(c==0||c==2||c==6||c==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(c==9||c==2||c==3||c==5||c==6||c==0||c==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)iLine(390+i,380,390+i,370);


   iLine(155,175,155,295);//donerightkey
    iLine(165,185,165,195);
    iLine(165,205,165,225);
    iLine(165,235,165,255);
    iLine(165,275,165,285);
    iLine(175,175,175,185);
    iLine(175,195,175,205);
    iLine(175,225,175,235);
    iLine(175,265,175,295);
    iLine(185,205,185,235);
    iLine(185,255,185,265);
    iLine(185,275,185,285);
    iLine(195,175,195,195);
    iLine(195,215,195,255);
    iLine(195,275,195,295);
    iLine(205,175,205,215);
    iLine(205,245,205,255);
    iLine(205,265,205,275);
    iLine(205,285,205,295);
    iLine(215,175,215,185);
    iLine(215,205,215,215);
    iLine(215,235,215,245);
    iLine(215,255,215,265);
    iLine(215,275,215,285);
    iLine(225,185,225,205);
    iLine(225,215,225,225);
    iLine(225,245,225,255);
    iLine(235,165,235,185);
    iLine(235,205,235,215);
    iLine(235,245,235,275);
    iLine(245,165,245,295);


    //horizontal
    iLine(155,165,245,165);
    iLine(165,175,195,175);
    iLine(205,175,225,175);
    iLine(175,185,185,185);
    iLine(155,195,165,195);
    iLine(175,195,195,195);
    iLine(205,195,215,195);
    iLine(225,195,235,195);
    iLine(165,205,175,205);
    iLine(185,205,205,205);
    iLine(215,205,245,205);
    iLine(175,215,185,215);
    iLine(205,215,215,215);
    iLine(165,225,175,225);
    iLine(195,225,225,225);
    iLine(235,225,245,225);
    iLine(155,235,165,235);
    iLine(175,235,185,235);
    iLine(205,235,245,235);
    iLine(165,245,195,245);
    iLine(215,245,225,245);
    iLine(165,255,175,255);
    iLine(195,255,215,255);
    iLine(225,255,235,255);
    iLine(165,265,175,265);
    iLine(185,265,205,265);
    iLine(215,265,225,265);
    iLine(155,275,165,275);
    iLine(185,275,215,275);
    iLine(225,275,235,275);
    iLine(215,285,235,285);
    iLine(155,295,195,295);
    iLine(205,295,245,295);


    iSetColor(255, 0, 0);

    iText(270,370, "SCORE:",
          GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(0, 0, 128);
    iText(190,310, "FINISH",
          GLUT_BITMAP_HELVETICA_10);

    iText( 110,165 , "START",
           GLUT_BITMAP_HELVETICA_10);
}




 if(flag5==1&& f15>=0){

    iClear();
       iSetColor(255,255,255);
       iFilledRectangle(0,0,400,400);
       iSetColor(255, 0, 0);
       iFilledCircle(ball_x5,ball_y5,4);
       iSetColor(0,0,0);
       t5=score5(f15);
    a=t5%10;
    t5=t5/10;
    b=t5%10;
    t5=t5/10;
    c=t5%10;
    if(a==0||a==7||a==9||a==6||a==2||a==3||a==5||a==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9||a==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(a==6||a==8||a==4||a==2||a==3||a==5||a==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(a==8||a==4||a==5||a==6||a==9||a==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(a==0||a==2||a==6||a==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(a==9||a==2||a==3||a==5||a==6||a==0||a==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(a==1||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0)iLine(390+i,380,390+i,370);//1 3 4 5 7 6 8 0 9

    i-=13;

    if(b==0||b==7||b==9||b==6||b==2||b==3||b==5||b==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(b==6||b==8||b==4||b==2||b==3||b==5||b==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(b==8||b==4||b==5||b==6||b==9||b==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(b==0||b==2||b==6||b==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(b==9||b==2||b==3||b==5||b==6||b==0||b==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)iLine(390+i,380,390+i,370);

    i-=13;

    if(c==0||c==7||c==9||c==6||c==2||c==3||c==5||c==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(c==6||c==8||c==4||c==2||c==3||c==5||c==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(c==8||c==4||c==5||c==6||c==9||c==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(c==0||c==2||c==6||c==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(c==9||c==2||c==3||c==5||c==6||c==0||c==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)iLine(390+i,380,390+i,370);
       //horizontal line y-co-ordinate is fixed
    iLine(125,125,195,125);
    iLine(205,125,275,125);

    iLine(155,135,175,135);
    iLine(195,135,205,135);
    iLine(235,135,245,135);
    iLine(255,135,265,135);

    iLine(125,145,165,145);
    iLine(225,145,235,145);
    iLine(265,145,275,145);

    iLine(135,155,145,155);
    iLine(155,155,165,155);
    iLine(195,155,205,155);
    iLine(245,155,255,155);

    iLine(135,165,165,165);
    iLine(185,165,215,165);
    iLine(225,165,245,165);
    iLine(255,165,265,165);

    iLine(135,175,155,175);
    iLine(185,175,195,175);
    iLine(215,175,225,175);
    iLine(235,175,245,175);

    iLine(135,185,145,185);
    iLine(155,185,185,185);
    iLine(195,185,205,185);
    iLine(215,185,225,185);

    iLine(135,195,155,195);
    iLine(195,195,205,195);
    iLine(225,195,235,195);
    iLine(265,195,275,195);

    iLine(175,205,185,205);
    iLine(205,205,215,205);
    iLine(235,205,245,205);
    iLine(255,205,275,205);

    iLine(125,215,145,215);
    iLine(155,215,175,215);
    iLine(185,215,195,215);
    iLine(215,215,235,215);
    iLine(245,215,275,215);

    iLine(185,225,195,225);
    iLine(225,225,235,225);
    iLine(255,225,265,225);

    iLine(125,235,135,235);
    iLine(155,235,165,235);
    iLine(215,235,235,235);
    iLine(255,235,265,235);

    iLine(125,245,195,245);
    iLine(205,245,275,245);

    //vertical line x is constant
    iLine(125,125,125,245);

    iLine(135,135,135,145);
    iLine(135,175,135,215);
    iLine(135,225,135,235);

    iLine(145,125,145,135);
    iLine(145,145,145,165);
    iLine(145,195,145,205);
    iLine(145,215,145,225);
    iLine(145,235,145,245);

    iLine(155,135,155,145);
    iLine(155,175,155,185);
    iLine(155,205,155,215);
    iLine(155,225,155,235);

    iLine(165,145,165,155);
    iLine(165,165,165,175);
    iLine(165,185,165,195);
    iLine(165,205,165,245);

    iLine(175,135,175,175);
    iLine(175,195,175,225);
    iLine(175,235,175,245);

    iLine(185,125,185,165);
    iLine(185,175,185,185);
    iLine(185,195,185,225);
    iLine(185,235,185,245);

    iLine(195,135,195,155);
    iLine(195,185,195,205);
    iLine(195,225,195,235);


    iLine(205,125,205,135);
    iLine(205,145,205,155);
    iLine(205,165,205,185);
    iLine(205,195,205,205);
    iLine(205,215,205,245);

    iLine(215,135,215,195);
    iLine(215,225,215,235);

    iLine(225,125,225,135);
    iLine(225,155,225,175);
    iLine(225,195,225,215);
    iLine(225,225,225,235);

    iLine(235,125,235,145);
    iLine(235,155,235,165);
    iLine(235,175,235,195);
    iLine(235,235,235,245);

    iLine(245,145,245,175);
    iLine(245,185,245,225);
    iLine(245,235,245,245);

    iLine(255,145,255,155);
    iLine(255,165,255,195);

    iLine(265,135,265,165);
    iLine(265,175,265,195);
    iLine(265,225,265,245);

    iLine(275,125,275,245);

}

    if(flag6==1 && f16>=0){


         iClear();
       iSetColor(255,255,255);
       iFilledRectangle(0,0,400,400);
       iSetColor(255, 0, 0);
       iFilledCircle(ball_x6,ball_y6,4);
       iSetColor(0,0,0);
       t6=score5(f16);
    a=t6%10;
    t6=t6/10;
    b=t6%10;
    t6=t6/10;
    c=t6%10;
    if(a==0||a==7||a==9||a==6||a==2||a==3||a==5||a==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9||a==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(a==6||a==8||a==4||a==2||a==3||a==5||a==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(a==8||a==4||a==5||a==6||a==9||a==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(a==0||a==2||a==6||a==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(a==9||a==2||a==3||a==5||a==6||a==0||a==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(a==1||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0)iLine(390+i,380,390+i,370);//1 3 4 5 7 6 8 0 9

    i-=13;

    if(b==0||b==7||b==9||b==6||b==2||b==3||b==5||b==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(b==6||b==8||b==4||b==2||b==3||b==5||b==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(b==8||b==4||b==5||b==6||b==9||b==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(b==0||b==2||b==6||b==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(b==9||b==2||b==3||b==5||b==6||b==0||b==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)iLine(390+i,380,390+i,370);

    i-=13;

    if(c==0||c==7||c==9||c==6||c==2||c==3||c==5||c==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(c==6||c==8||c==4||c==2||c==3||c==5||c==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(c==8||c==4||c==5||c==6||c==9||c==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(c==0||c==2||c==6||c==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(c==9||c==2||c==3||c==5||c==6||c==0||c==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)iLine(390+i,380,390+i,370);
       //horizontal line y-co-ordinate is fixed

    iLine(125,125,255,125);

    iLine(135,135,145,135);
    iLine(185,135,195,135);
    iLine(205,135,215,135);
    iLine(225,135,255,135);

    iLine(145,145,155,145);
    iLine(175,145,185,145);
    iLine(195,145,225,145);

    iLine(135,155,165,155);
    iLine(185,155,195,155);
    iLine(205,155,235,155);
    iLine(245,155,265,155);

    iLine(125,165,135,165);
    iLine(155,165,185,165);
    iLine(215,165,225,165);
    iLine(245,165,255,165);

    iLine(155,175,175,175);
    iLine(205,175,225,175);
    iLine(235,175,245,175);

    iLine(195,185,255,185);

    iLine(145,195,175,195);
    iLine(185,195,215,195);
    iLine(245,195,265,195);

    iLine(125,205,135,205);
    iLine(145,205,175,205);
    iLine(195,205,225,205);

    iLine(135,215,165,215);
    iLine(185,215,255,215);

    iLine(135,225,265,225);

    //vertical x-co-ordinate is fixed
     iLine(125,125,125,225);

     iLine(135,135,135,165);
     iLine(135,175,135,215);

     iLine(145,165,145,205);

     iLine(155,125,155,145);
     iLine(155,165,155,185);

     iLine(165,135,165,165);
     iLine(165,185,165,195);

     iLine(175,125,175,155);
     iLine(175,175,175,185);
     iLine(175,205,175,225);

     iLine(185,135,185,145);
     iLine(185,155,185,215);

     iLine(195,145,195,155);
     iLine(195,165,195,185);
     iLine(195,205,195,215);

     iLine(205,155,205,175);

     iLine(215,135,215,145);

     iLine(225,165,225,205);

     iLine(235,135,235,175);
     iLine(235,195,235,215);

     iLine(245,145,245,155);
     iLine(245,195,245,205);

     iLine(255,135,255,145);
     iLine(255,165,255,185);
     iLine(255,205,255,215);

     iLine(265,125,265,225);

 }

    if(flag==1 && f>=0)//final level
    {
        iClear();
        iSetColor(255, 255,255);
        iFilledRectangle(0,0,400,400);
        iSetColor(255, 0, 0);
        iFilledCircle(ball_x,ball_y,4);
        iSetColor(0, 0,0);
        if((ball_x==130 && ball_y== 270)&&((f2==1&&f3==0)||(f3==1&&f2==0)||(f3==0&&f2==0)))
        {
            iFilledCircle(130,280,5);
            f1=1;
        }


        if((ball_x== 130&& ball_y==230 )&&((f1==1&&f3==0)||(f3==1&&f1==0)||(f3==0&&f1==0)))
        {
            iFilledCircle(130,240,5);
            f2=1;
        }
        if((ball_x== 200&& ball_y==240 )&&((f1==1&&f2==0)||(f2==1&&f1==0)||(f1==0&&f2==0)))
        {
            iFilledCircle(200,230,5);
             f3=1;
        }


    t=score(f);

    a=t%10;
    t=t/10;
    b=t%10;
    t=t/10;
    c=t%10;
    if(a==0||a==7||a==9||a==6||a==2||a==3||a==5||a==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9||a==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(a==6||a==8||a==4||a==2||a==3||a==5||a==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(a==8||a==4||a==5||a==6||a==9||a==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(a==0||a==2||a==6||a==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(a==9||a==2||a==3||a==5||a==6||a==0||a==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(a==1||a==3||a==4||a==5||a==6||a==7||a==8||a==9||a==0)iLine(390+i,380,390+i,370);//1 3 4 5 7 6 8 0 9

    i-=13;

    if(b==0||b==7||b==9||b==6||b==2||b==3||b==5||b==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(b==6||b==8||b==4||b==2||b==3||b==5||b==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(b==8||b==4||b==5||b==6||b==9||b==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(b==0||b==2||b==6||b==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(b==9||b==2||b==3||b==5||b==6||b==0||b==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)iLine(390+i,380,390+i,370);

    i-=13;

    if(c==0||c==7||c==9||c==6||c==2||c==3||c==5||c==8) iLine(380+i,390,390+i,390);//0 7 9 6 2 3 5 8
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)iLine(390+i,390,390+i,380);//1 2 3 4 7 8 9 0
    if(c==6||c==8||c==4||c==2||c==3||c==5||c==9)iLine(380+i,380,390+i,380);//6 8 4 2 3 5 9
    if(c==8||c==4||c==5||c==6||c==9||c==0)iLine(380+i,390,380+i,380);//8 4 5  0 6 9
    if(c==0||c==2||c==6||c==8)iLine(380+i,380,380+i,370);//0 2 6 8
    if(c==9||c==2||c==3||c==5||c==6||c==0||c==8)iLine(380+i,370,390+i,370);// 9 2 3 5 6 7 8 0
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)iLine(390+i,380,390+i,370);
//maze lines
//these are starting and finishing line
  /*  iLine(145,95,145,105);//check condition//verti
    iLine(155,95,155,105);//check condition//verti
    iLine(145,95,155,95);//check condition//hori
    iLine(265,285,265,295);//verti
    iLine(275,285,275,295);//verti
    iLine(275,295,265,295);//hori*/

    iLine(95,105,95,285);//donerightkey
    iLine(105,105,105,115);
    iLine(105,165,105,195);
    iLine(105,215,105,235);
    iLine(105,255,105,275);
    iLine(115,125,115,135);
    iLine(115,145,115,175);
    iLine(115,195,115,215);
    iLine(115,245,115,255);
    iLine(115,265,115,275);
    iLine(125,125,125,165);
    iLine(125,185,125,195);
    iLine(125,215,125,265);
    iLine(125,275,125,285);
    iLine(135,125,135,145);
    iLine(135,155,135,175);
    iLine(135,225,135,255);
    iLine(135,265,135,275);
    iLine(145,115,145,145);
    iLine(145,165,145,205);
    iLine(145,235,145,245);
    iLine(145,255,145,265);
    iLine(155,115,155,135);
    iLine(155,165,155,185);
    iLine(155,205,155,215);
    iLine(155,225,155,245);
    iLine(165,115,165,175);
    iLine(165,195,165,205);
    iLine(165,215,165,235);
    iLine(165,275,165,285);
    iLine(175,105,175,125);
    iLine(175,145,175,185);
    iLine(175,215,175,225);
    iLine(175,235,175,245);
    iLine(175,265,175,275);
    iLine(185,105,185,115);
    iLine(185,125,185,145);
    iLine(185,155,185,185);
    iLine(185,205,185,215);
    iLine(185,225,185,235);
    iLine(185,245,185,265);
    iLine(185,275,185,285);
    iLine(195,135,195,165);
    iLine(195,195,195,205);
    iLine(195,235,195,255);
    iLine(195,265,195,275);
    iLine(205,145,205,175);
    iLine(205,185,205,215);
    iLine(205,225,205,235);
    iLine(205,255,205,265);
    iLine(215,115,215,125);
    iLine(215,135,215,185);
    iLine(215,195,215,225);
    iLine(215,235,215,245);
    iLine(215,265,215,285);
    iLine(225,105,225,115);
    iLine(225,135,225,195);
    iLine(225,235,225,245);
    iLine(225,255,225,275);
    iLine(235,115,235,125);
    iLine(235,135,235,155);
    iLine(235,165,235,205);
    iLine(235,215,235,235);
    iLine(235,245,235,255);
    iLine(245,105,245,125);
    iLine(245,145,245,215);
    iLine(245,225,245,245);
    iLine(245,265,245,285);
    iLine(255,115,255,135);
    iLine(255,195,255,225);
    iLine(255,255,255,265);
    iLine(265,115,265,145);
    iLine(265,165,265,175);
    iLine(265,185,265,205);
    iLine(265,225,265,235);
    iLine(265,245,265,255);
    iLine(265,265,265,275);
    iLine(275,105,275,285);
    //horizontal
    iLine(95,105,145,105);
    iLine(155,105,275,105);
    iLine(115,115,155,115);
    iLine(195,115,215,115);
    iLine(105,125,125,125);
    iLine(175,125,235,125);
    iLine(95,135,115,135);
    iLine(165,135,175,135);
    iLine(195,135,215,135);
    iLine(225,135,255,135);
    iLine(105,145,135,145);
    iLine(145,145,165,145);
    iLine(175,145,185,145);
    iLine(245,145,265,145);
    iLine(95,155,105,155);
    iLine(135,155,165,155);
    iLine(185,155,195,155);
    iLine(255,155,275,155);
    iLine(245,165,265,165);
    iLine(115,175,135,175);
    iLine(185,175,205,175);
    iLine(255,175,265,175);
    iLine(105,185,145,185);
    iLine(155,185,175,185);
    iLine(195,185,215,185);
    iLine(245,185,265,185);
    iLine(125,195,135,195);
    iLine(145,195,195,195);
    iLine(215,195,225,195);
    iLine(95,205,145,205);
    iLine(175,205,185,205);
    iLine(215,205,235,205);
    iLine(265,205,275,205);
    iLine(125,215,165,215);
    iLine(175,215,205,215);
    iLine(225,215,245,215);
    iLine(255,215,265,215);
    iLine(135,225,155,225);
    iLine(165,225,175,225);
    iLine(185,225,225,225);
    iLine(245,225,255,225);
    iLine(265,225,275,225);
    iLine(105,235,125,235);
    iLine(175,235,185,235);
    iLine(225,235,235,235);
    iLine(255,235,265,235);
    iLine(95,245,115,245);
    iLine(145,245,175,245);
    iLine(195,245,225,245);
    iLine(245,245,265,245);
    iLine(135,255,145,255);
    iLine(155,255,195,255);
    iLine(205,255,245,255);
    iLine(255,255,265,255);
    iLine(115,265,135,265);
    iLine(145,265,175,265);
    iLine(195,265,205,265);
    iLine(235,265,255,265);
    iLine(265,265,275,265);
    iLine(105,275,115,275);
    iLine(135,275,155,275);
    iLine(185,275,195,275);
    iLine(205,275,215,275);
    iLine(225,275,235,275);
    iLine(255,275,265,275);
    iLine(95,285,265,285);
    }
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
    //place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
    }
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/


/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
    if(key == 'p')
    {
        //do something with 'q'
        iPauseTimer(0);
    }
    if(key == 'r')
    {
        iResumeTimer(0);
    }

    if(key == 'h' && z==0 )
    {

        flag1=1;
    }
    if(key == 'o' &&z==1 )
    {
        flag2=1;
        flag1=3;
    }
    if(key == 'r'&&z==2 )
    {
        flag3=1;
        flag2=3;
        flag1=3;
    }
    if(key == 'c'&&z==3 )
    {
        flag4=1;
        flag3=3;
        flag2=3;
        flag1=3;
    }
    if(key == 'R'&&z==4 )
    {
        flag4=3;
        flag3=3;
        flag2=3;
        flag1=3;
        flag5=1;
    }
    if(key == 'u'&&z==5 )
    {
        flag4=3;
        flag3=3;
        flag2=3;
        flag1=3;
        flag5=3;
        flag6=1;
    }
    if(key == 'x' &&z==6 )
    {
        flag4=3;
        flag3=3;
        flag2=3;
        flag1=3;
        flag5=3;
        flag6=3;
        flag=1;
    }

    //place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)

{
    if(key == GLUT_KEY_LEFT)
    {
        if((((ball_x-10) <90 )||((ball_x-10) >90 )||(ball_y<105)||(ball_y>285))&&
                (((ball_x-10) <100 )||((ball_x-10) >100 )||(ball_y<105)||(ball_y>115))&&
                (((ball_x-10) <100 )||((ball_x-10) >100 )||(ball_y<165)||(ball_y>195))&&
                (((ball_x-10) <100 )||((ball_x-10) >100 )||(ball_y<215)||(ball_y>235))&&
                (((ball_x-10) <100 )||((ball_x-10) >100 )||(ball_y<255)||(ball_y>275))&&
                (((ball_x-10) <110 )||((ball_x-10) >110 )||(ball_y<125)||(ball_y>135))&&
                (((ball_x-10) <110 )||((ball_x-10) >110 )||(ball_y<145)||(ball_y>175))&&
                (((ball_x-10) <110 )||((ball_x-10) >110 )||(ball_y<195)||(ball_y>215))&&
                (((ball_x-10) <110 )||((ball_x-10) >110 )||(ball_y<245)||(ball_y>255))&&
                (((ball_x-10) <110 )||((ball_x-10) >110 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x-10) <120 )||((ball_x-10) >120 )||(ball_y<125)||(ball_y>165))&&
                (((ball_x-10) <120 )||((ball_x-10) >120 )||(ball_y<185)||(ball_y>195))&&
                (((ball_x-10) <120 )||((ball_x-10) >120 )||(ball_y<215)||(ball_y>265))&&
                (((ball_x-10) <120 )||((ball_x-10) >120 )||(ball_y<275)||(ball_y>285))&&
                (((ball_x-10) <130 )||((ball_x-10) >130 )||(ball_y<125)||(ball_y>145))&&
                (((ball_x-10) <130 )||((ball_x-10) >130 )||(ball_y<155)||(ball_y>175))&&
                (((ball_x-10) <130 )||((ball_x-10) >130 )||(ball_y<225)||(ball_y>255))&&
                (((ball_x-10) <130 )||((ball_x-10) >130 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x-10) <140 )||((ball_x-10) >140 )||(ball_y<115)||(ball_y>145))&&
                (((ball_x-10) <140 )||((ball_x-10) >140 )||(ball_y<165)||(ball_y>205))&&
                (((ball_x-10) <140 )||((ball_x-10) >140 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x-10) <140 )||((ball_x-10) >140 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x-10) <150 )||((ball_x-10) >150 )||(ball_y<115)||(ball_y>135))&&
                (((ball_x-10) <150 )||((ball_x-10) >150 )||(ball_y<165)||(ball_y>185))&&
                (((ball_x-10) <150 )||((ball_x-10) >150 )||(ball_y<205)||(ball_y>215))&&
                (((ball_x-10) <150 )||((ball_x-10) >150 )||(ball_y<225)||(ball_y>245))&&
                (((ball_x-10) <160 )||((ball_x-10) >160 )||(ball_y<115)||(ball_y>175))&&
                (((ball_x-10) <160 )||((ball_x-10) >160 )||(ball_y<195)||(ball_y>205))&&
                (((ball_x-10) <160 )||((ball_x-10) >160 )||(ball_y<215)||(ball_y>235))&&
                (((ball_x-10) <160 )||((ball_x-10) >160 )||(ball_y<275)||(ball_y>285))&&
                (((ball_x-10) <170 )||((ball_x-10) >170 )||(ball_y<105)||(ball_y>125))&&
                (((ball_x-10) <170 )||((ball_x-10) >170 )||(ball_y<145)||(ball_y>185))&&
                (((ball_x-10) <170 )||((ball_x-10) >170 )||(ball_y<215)||(ball_y>225))&&
                (((ball_x-10) <170 )||((ball_x-10) >170 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x-10) <170 )||((ball_x-10) >170 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x-10) <180 )||((ball_x-10) >180 )||(ball_y<105)||(ball_y>115))&&
                (((ball_x-10) <180 )||((ball_x-10) >180 )||(ball_y<125)||(ball_y>145))&&
                (((ball_x-10) <180 )||((ball_x-10) >180 )||(ball_y<155)||(ball_y>185))&&
                (((ball_x-10) <180 )||((ball_x-10) >180 )||(ball_y<205)||(ball_y>215))&&
                (((ball_x-10) <180 )||((ball_x-10) >180 )||(ball_y<225)||(ball_y>235))&&
                (((ball_x-10) <180 )||((ball_x-10) >180 )||(ball_y<245)||(ball_y>265))&&
                (((ball_x-10) <180 )||((ball_x-10) >180 )||(ball_y<275)||(ball_y>285))&&
                (((ball_x-10) <190 )||((ball_x-10) >190 )||(ball_y<135)||(ball_y>165))&&
                (((ball_x-10) <190 )||((ball_x-10) >190 )||(ball_y<195)||(ball_y>205))&&
                (((ball_x-10) <190 )||((ball_x-10) >190 )||(ball_y<235)||(ball_y>255))&&
                (((ball_x-10) <190 )||((ball_x-10) >190 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x-10) <200 )||((ball_x-10) >200 )||(ball_y<145)||(ball_y>175))&&
                (((ball_x-10) <200 )||((ball_x-10) >200 )||(ball_y<185)||(ball_y>215))&&
                (((ball_x-10) <200 )||((ball_x-10) >200 )||(ball_y<225)||(ball_y>235))&&
                (((ball_x-10) <200 )||((ball_x-10) >200 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x-10) <210 )||((ball_x-10) >210 )||(ball_y<115)||(ball_y>125))&&
                (((ball_x-10) <210 )||((ball_x-10) >210 )||(ball_y<135)||(ball_y>185))&&
                (((ball_x-10) <210 )||((ball_x-10) >210 )||(ball_y<195)||(ball_y>225))&&
                (((ball_x-10) <210 )||((ball_x-10) >210 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x-10) <210 )||((ball_x-10) >210 )||(ball_y<265)||(ball_y>285))&&
                (((ball_x-10) <220 )||((ball_x-10) >220 )||(ball_y<105)||(ball_y>115))&&
                (((ball_x-10) <220 )||((ball_x-10) >220 )||(ball_y<135)||(ball_y>195))&&
                (((ball_x-10) <220 )||((ball_x-10) >220 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x-10) <220 )||((ball_x-10) >220 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x-10) <230 )||((ball_x-10) >230 )||(ball_y<115)||(ball_y>125))&&
                (((ball_x-10) <230 )||((ball_x-10) >230 )||(ball_y<135)||(ball_y>155))&&
                (((ball_x-10) <230 )||((ball_x-10) >230 )||(ball_y<165)||(ball_y>205))&&
                (((ball_x-10) <230 )||((ball_x-10) >230 )||(ball_y<215)||(ball_y>235))&&
                (((ball_x-10) <230 )||((ball_x-10) >230 )||(ball_y<245)||(ball_y>255))&&
                (((ball_x-10) <240 )||((ball_x-10) >240 )||(ball_y<105)||(ball_y>125))&&
                (((ball_x-10) <240 )||((ball_x-10) >240 )||(ball_y<145)||(ball_y>215))&&
                (((ball_x-10) <240 )||((ball_x-10) >240 )||(ball_y<225)||(ball_y>245))&&
                (((ball_x-10) <240 )||((ball_x-10) >240 )||(ball_y<265)||(ball_y>285))&&
                (((ball_x-10) <250 )||((ball_x-10) >250 )||(ball_y<115)||(ball_y>135))&&
                (((ball_x-10) <250 )||((ball_x-10) >250 )||(ball_y<195)||(ball_y>225))&&
                (((ball_x-10) <250 )||((ball_x-10) >250 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x-10) <260 )||((ball_x-10) >260 )||(ball_y<115)||(ball_y>145))&&
                (((ball_x-10) <260 )||((ball_x-10) >260 )||(ball_y<165)||(ball_y>175))&&
                (((ball_x-10) <260 )||((ball_x-10) >260 )||(ball_y<185)||(ball_y>205))&&
                (((ball_x-10) <260 )||((ball_x-10) >260 )||(ball_y<225)||(ball_y>235))&&
                (((ball_x-10) <260 )||((ball_x-10) >260 )||(ball_y<245)||(ball_y>255))&&
                (((ball_x-10) <260 )||((ball_x-10) >260 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x-10) <270 )||((ball_x-10) >270 )||(ball_y<105)||(ball_y>285))&&
                (((ball_x-10) <140 )||((ball_x-10) >140 )||(ball_y<95)||(ball_y>105))&&
                (((ball_x-10) <150 )||((ball_x-10) >150 )||(ball_y<95)||(ball_y>105))&&
                (((ball_x-10) <260 )||((ball_x-10) >260 )||(ball_y<285)||(ball_y>295))&&
                (((ball_x-10) <270 )||((ball_x-10) >270 )||(ball_y<285)||(ball_y>295))&&(flag==1)

          )
        {
            ball_x=ball_x-10;
            f--;
            score(f);
        }


       if((((ball_x1-10) <150 )||((ball_x1-10) >150 )||(ball_y1<155)||(ball_y1>255))&&

               (((ball_x1-10) <160 )||((ball_x1-10) >160 )||(ball_y1<185)||(ball_y1>195))&&
               (((ball_x1-10) <160 )||((ball_x1-10) >160 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1-10) <160 )||((ball_x1-10) >160 )||(ball_y1<235)||(ball_y1>245))&&

               (((ball_x1-10) <170 )||((ball_x1-10) >170 )||(ball_y1<165)||(ball_y1>185))&&
               (((ball_x1-10) <170 )||((ball_x1-10) >170 )||(ball_y1<195)||(ball_y1>215))&&

               (((ball_x1-10) <180 )||((ball_x1-10) >180 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1-10) <180 )||((ball_x1-10) >180 )||(ball_y1<235)||(ball_y1>255))&&

               (((ball_x1-10) <190 )||((ball_x1-10) >190 )||(ball_y1<165)||(ball_y1>175))&&
               (((ball_x1-10) <190 )||((ball_x1-10) >190 )||(ball_y1<185)||(ball_y1>205))&&
               (((ball_x1-10) <190 )||((ball_x1-10) >190 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1-10) <190 )||((ball_x1-10) >190 )||(ball_y1<245)||(ball_y1>255))&&

               (((ball_x1-10) <200 )||((ball_x1-10) >200 )||(ball_y1<155)||(ball_y1>165))&&
               (((ball_x1-10) <200 )||((ball_x1-10) >200 )||(ball_y1<175)||(ball_y1>195))&&
               (((ball_x1-10) <200 )||((ball_x1-10) >200 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1-10) <200 )||((ball_x1-10) >200 )||(ball_y1<205)||(ball_y1>245))&&

               (((ball_x1-10) <210 )||((ball_x1-10) >210 )||(ball_y1<165)||(ball_y1>175))&&
               (((ball_x1-10) <210 )||((ball_x1-10) >210 )||(ball_y1<195)||(ball_y1>205))&&
               (((ball_x1-10) <210 )||((ball_x1-10) >210 )||(ball_y1<245)||(ball_y1>255))&&

               (((ball_x1-10) <220 )||((ball_x1-10) >220 )||(ball_y1<155)||(ball_y1>165))&&
               (((ball_x1-10) <220 )||((ball_x1-10) >220 )||(ball_y1<175)||(ball_y1>195))&&

               (((ball_x1-10) <230 )||((ball_x1-10) >230 )||(ball_y1<195)||(ball_y1>215))&&
               (((ball_x1-10) <230 )||((ball_x1-10) >230 )||(ball_y1<225)||(ball_y1>255))&&

               (((ball_x1-10) <240 )||((ball_x1-10) >240 )||(ball_y1<165)||(ball_y1>175))&&
               (((ball_x1-10) <240 )||((ball_x1-10) >240 )||(ball_y1<195)||(ball_y1>205))&&
               (((ball_x1-10) <240 )||((ball_x1-10) >240 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1-10) <240 )||((ball_x1-10) >240 )||(ball_y1<235)||(ball_y1>245))&&

               (((ball_x1-10) <250 )||((ball_x1-10) >250 )||(ball_y1<155)||(ball_y1>255))&&(flag1==1)

               )

                {
            ball_x1=ball_x1-10;
            f11--;
            score1(f11);
            }

if((((ball_x2-10) <150 )||((ball_x2-10) >150 )||(ball_y2<165)||(ball_y2>225))&&
                (((ball_x2-10) <150 )||((ball_x2-10) >150 )||(ball_y2<235)||(ball_y2>265))&&
                (((ball_x2-10) <160 )||((ball_x2-10) >160 )||(ball_y2<185)||(ball_y2>255))&&
                (((ball_x2-10) <170 )||((ball_x2-10) >170 )||(ball_y2<175)||(ball_y2>195))&&
                (((ball_x2-10) <170 )||((ball_x2-10) >170 )||(ball_y2<205)||(ball_y2>245))&&
                (((ball_x2-10) <180 )||((ball_x2-10) >180 )||(ball_y2<195)||(ball_y2>215))&&
                (((ball_x2-10) <180 )||((ball_x2-10) >180 )||(ball_y2<225)||(ball_y2>235))&&
                (((ball_x2-10) <180 )||((ball_x2-10) >180 )||(ball_y2<245)||(ball_y2>265))&&
                (((ball_x2-10) <190 )||((ball_x2-10) >190 )||(ball_y2<215)||(ball_y2>225))&&
                (((ball_x2-10) <200 )||((ball_x2-10) >200 )||(ball_y2<205)||(ball_y2>225))&&
                (((ball_x2-10) <200 )||((ball_x2-10) >200 )||(ball_y2<255)||(ball_y2>265))&&
                (((ball_x2-10) <210 )||((ball_x2-10) >210 )||(ball_y2<195)||(ball_y2>215))&&
                (((ball_x2-10) <220 )||((ball_x2-10) >220 )||(ball_y2<185)||(ball_y2>225))&&
                (((ball_x2-10) <220 )||((ball_x2-10) >220 )||(ball_y2<245)||(ball_y2>255))&&
                (((ball_x2-10) <230 )||((ball_x2-10) >230 )||(ball_y2<175)||(ball_y2>245))&&
                (((ball_x2-10) <240 )||((ball_x2-10) >240 )||(ball_y2<195)||(ball_y2>255))&&
                (((ball_x2-10) <250 )||((ball_x2-10) >250 )||(ball_y2<165)||(ball_y2>245))&&
                (((ball_x2-10) <250 )||((ball_x2-10) >250 )||(ball_y2<255)||(ball_y2>265)) &&(flag2==1)
          )
        {
            ball_x2=ball_x2-10;
            f12--;
            score2(f12);
        }
if((((ball_x3-10) <150 )||((ball_x3-10) >150 )||(ball_y3<165)||(ball_y3>275))&&
            (((ball_x3-10) <170 )||((ball_x3-10) >170 )||(ball_y3<165)||(ball_y3>175))&&//middle
                (((ball_x3-10) <160 )||((ball_x3-10) >160 )||(ball_y3<175)||(ball_y3>185))&&
                (((ball_x3-10) <160 )||((ball_x3-10) >160 )||(ball_y3<195)||(ball_y3>215))&&
                (((ball_x3-10) <160 )||((ball_x3-10) >160 )||(ball_y3<225)||(ball_y3>235))&&
                (((ball_x3-10) <160 )||((ball_x3-10) >160 )||(ball_y3<255)||(ball_y3>265))&&
                (((ball_x3-10) <170 )||((ball_x3-10) >170 )||(ball_y3<165)||(ball_y3>175))&&
                (((ball_x3-10) <170 )||((ball_x3-10) >170 )||(ball_y3<185)||(ball_y3>195))&&
                (((ball_x3-10) <170 )||((ball_x3-10) >170 )||(ball_y3<215)||(ball_y3>235))&&
                (((ball_x3-10) <180 )||((ball_x3-10) >180 )||(ball_y3<175)||(ball_y3>255))&&
                (((ball_x3-10) <190 )||((ball_x3-10) >190 )||(ball_y3<175)||(ball_y3>185))&&
                (((ball_x3-10) <190 )||((ball_x3-10) >190 )||(ball_y3<195)||(ball_y3>205))&&
                (((ball_x3-10) <190 )||((ball_x3-10) >190 )||(ball_y3<225)||(ball_y3>265))&&
                (((ball_x3-10) <200 )||((ball_x3-10) >200 )||(ball_y3<165)||(ball_y3>195))&&
                (((ball_x3-10) <210 )||((ball_x3-10) >210 )||(ball_y3<185)||(ball_y3>195))&&
                (((ball_x3-10) <210 )||((ball_x3-10) >210 )||(ball_y3<205)||(ball_y3>235))&&
                (((ball_x3-10) <210 )||((ball_x3-10) >210 )||(ball_y3<255)||(ball_y3>265))&&
                (((ball_x3-10) <220 )||((ball_x3-10) >220 )||(ball_y3<175)||(ball_y3>225))&&
                (((ball_x3-10) <220 )||((ball_x3-10) >220 )||(ball_y3<235)||(ball_y3>255))&&
                (((ball_x3-10) <230 )||((ball_x3-10) >230 )||(ball_y3<225)||(ball_y3>235))&&
                (((ball_x3-10) <230 )||((ball_x3-10) >230 )||(ball_y3<255)||(ball_y3>265))&&
                (((ball_x3-10) <240 )||((ball_x3-10) >240 )||(ball_y3<165)||(ball_y3>275))&&(flag3==1)
          )
        {
            ball_x3=ball_x3-10;
            f13--;
            score3(f13);
        }

         if((((ball_x4-10) <150 )||((ball_x4-10) >150 )||(ball_y4<175)||(ball_y4>295))&&
                (((ball_x4-10) <160 )||((ball_x4-10) >160 )||(ball_y4<185)||(ball_y4>195))&&
                (((ball_x4-10) <160 )||((ball_x4-10) >160 )||(ball_y4<205)||(ball_y4>225))&&
                (((ball_x4-10) <160 )||((ball_x4-10) >160 )||(ball_y4<235)||(ball_y4>255))&&
                (((ball_x4-10) <160 )||((ball_x4-10) >160 )||(ball_y4<275)||(ball_y4>285))&&
                (((ball_x4-10) <170 )||((ball_x4-10) >170 )||(ball_y4<175)||(ball_y4>185))&&
                (((ball_x4-10) <170 )||((ball_x4-10) >170 )||(ball_y4<195)||(ball_y4>205))&&
                (((ball_x4-10) <170 )||((ball_x4-10) >170 )||(ball_y4<225)||(ball_y4>235))&&
                (((ball_x4-10) <170 )||((ball_x4-10) >170 )||(ball_y4<265)||(ball_y4>295))&&
                (((ball_x4-10) <180 )||((ball_x4-10) >180 )||(ball_y4<205)||(ball_y4>235))&&
                (((ball_x4-10) <180 )||((ball_x4-10) >180 )||(ball_y4<255)||(ball_y4>265))&&
                (((ball_x4-10) <180 )||((ball_x4-10) >180 )||(ball_y4<275)||(ball_y4>285))&&
                (((ball_x4-10) <190 )||((ball_x4-10) >190 )||(ball_y4<175)||(ball_y4>195))&&
                (((ball_x4-10) <190 )||((ball_x4-10) >190 )||(ball_y4<215)||(ball_y4>255))&&
                (((ball_x4-10) <190 )||((ball_x4-10) >190 )||(ball_y4<275)||(ball_y4>295))&&
                (((ball_x4-10) <200 )||((ball_x4-10) >200 )||(ball_y4<175)||(ball_y4>215))&&
                (((ball_x4-10) <200 )||((ball_x4-10) >200 )||(ball_y4<245)||(ball_y4>255))&&
                (((ball_x4-10) <200 )||((ball_x4-10) >200 )||(ball_y4<265)||(ball_y4>275))&&
                (((ball_x4-10) <200 )||((ball_x4-10) >200 )||(ball_y4<285)||(ball_y4>295))&&
                (((ball_x4-10) <210 )||((ball_x4-10) >210 )||(ball_y4<175)||(ball_y4>185))&&
                (((ball_x4-10) <210 )||((ball_x4-10) >210 )||(ball_y4<205)||(ball_y4>215))&&
                (((ball_x4-10) <210 )||((ball_x4-10) >210 )||(ball_y4<235)||(ball_y4>245))&&
                (((ball_x4-10) <210 )||((ball_x4-10) >210 )||(ball_y4<255)||(ball_y4>265))&&
                (((ball_x4-10) <210 )||((ball_x4-10) >210 )||(ball_y4<275)||(ball_y4>285))&&
                (((ball_x4-10) <220 )||((ball_x4-10) >220 )||(ball_y4<185)||(ball_y4>205))&&
                (((ball_x4-10) <220 )||((ball_x4-10) >220 )||(ball_y4<215)||(ball_y4>225))&&
                (((ball_x4-10) <220 )||((ball_x4-10) >220 )||(ball_y4<245)||(ball_y4>255))&&
                (((ball_x4-10) <230 )||((ball_x4-10) >230 )||(ball_y4<165)||(ball_y4>185))&&
                (((ball_x4-10) <230 )||((ball_x4-10) >230 )||(ball_y4<205)||(ball_y4>215))&&
                (((ball_x4-10) <230 )||((ball_x4-10) >230 )||(ball_y4<245)||(ball_y4>275))&&
                (((ball_x4-10) <240 )||((ball_x4-10) >240 )||(ball_y4<165)||(ball_y4>295)) &&(flag4==1)
          )
        {
            ball_x4=ball_x4-10;
            f14--;
            score4(f14);
        }

            if((((ball_x5-10) <120 )||((ball_x5-10) >120 )||(ball_y5<125)||(ball_y5>245))&&

              (((ball_x5-10) <130 )||((ball_x5-10) >130 )||(ball_y5<135)||(ball_y5>145))&&
              (((ball_x5-10) <130 )||((ball_x5-10) >130 )||(ball_y5<175)||(ball_y5>215))&&
              (((ball_x5-10) <130 )||((ball_x5-10) >130 )||(ball_y5<225)||(ball_y5>235))&&

              (((ball_x5-10) <140 )||((ball_x5-10) >140 )||(ball_y5<125)||(ball_y5>135))&&
              (((ball_x5-10) <140 )||((ball_x5-10) >140 )||(ball_y5<145)||(ball_y5>165))&&
              (((ball_x5-10) <140 )||((ball_x5-10) >140 )||(ball_y5<195)||(ball_y5>205))&&
              (((ball_x5-10) <140 )||((ball_x5-10) >140 )||(ball_y5<215)||(ball_y5>225))&&
              (((ball_x5-10) <140 )||((ball_x5-10) >140 )||(ball_y5<235)||(ball_y5>245))&&


              (((ball_x5-10) <150 )||((ball_x5-10) >150 )||(ball_y5<135)||(ball_y5>145))&&
              (((ball_x5-10) <150 )||((ball_x5-10) >150 )||(ball_y5<175)||(ball_y5>185))&&
              (((ball_x5-10) <150 )||((ball_x5-10) >150 )||(ball_y5<205)||(ball_y5>215))&&
              (((ball_x5-10) <150 )||((ball_x5-10) >150 )||(ball_y5<225)||(ball_y5>235))&&


              (((ball_x5-10) <160 )||((ball_x5-10) >160 )||(ball_y5<145)||(ball_y5>155))&&
              (((ball_x5-10) <160 )||((ball_x5-10) >160 )||(ball_y5<165)||(ball_y5>175))&&
              (((ball_x5-10) <160 )||((ball_x5-10) >160 )||(ball_y5<185)||(ball_y5>195))&&
              (((ball_x5-10) <160 )||((ball_x5-10) >160 )||(ball_y5<205)||(ball_y5>245))&&


              (((ball_x5-10) <170 )||((ball_x5-10) >170 )||(ball_y5<135)||(ball_y5>175))&&
              (((ball_x5-10) <170 )||((ball_x5-10) >170 )||(ball_y5<195)||(ball_y5>225))&&
              (((ball_x5-10) <170 )||((ball_x5-10) >170 )||(ball_y5<235)||(ball_y5>245))&&

              (((ball_x5-10) <180 )||((ball_x5-10) >180 )||(ball_y5<125)||(ball_y5>165))&&
              (((ball_x5-10) <180 )||((ball_x5-10) >180 )||(ball_y5<175)||(ball_y5>185))&&
              (((ball_x5-10) <180 )||((ball_x5-10) >180 )||(ball_y5<195)||(ball_y5>225))&&
              (((ball_x5-10) <180 )||((ball_x5-10) >180 )||(ball_y5<235)||(ball_y5>245))&&

              (((ball_x5-10) <190 )||((ball_x5-10) >190 )||(ball_y5<135)||(ball_y5>155))&&
              (((ball_x5-10) <190 )||((ball_x5-10) >190 )||(ball_y5<185)||(ball_y5>205))&&
              (((ball_x5-10) <190 )||((ball_x5-10) >190 )||(ball_y5<225)||(ball_y5>235))&&

              (((ball_x5-10) <200 )||((ball_x5-10) >200 )||(ball_y5<125)||(ball_y5>135))&&
              (((ball_x5-10) <200 )||((ball_x5-10) >200 )||(ball_y5<145)||(ball_y5>155))&&
              (((ball_x5-10) <200 )||((ball_x5-10) >200 )||(ball_y5<165)||(ball_y5>185))&&
              (((ball_x5-10) <200 )||((ball_x5-10) >200 )||(ball_y5<195)||(ball_y5>205))&&
              (((ball_x5-10) <200 )||((ball_x5-10) >200 )||(ball_y5<215)||(ball_y5>245))&&

              (((ball_x5-10) <210 )||((ball_x5-10) >210 )||(ball_y5<135)||(ball_y5>195))&&
              (((ball_x5-10) <210 )||((ball_x5-10) >210 )||(ball_y5<225)||(ball_y5>235))&&

              (((ball_x5-10) <220 )||((ball_x5-10) >220 )||(ball_y5<125)||(ball_y5>135))&&
              (((ball_x5-10) <220 )||((ball_x5-10) >220 )||(ball_y5<155)||(ball_y5>175))&&
              (((ball_x5-10) <220 )||((ball_x5-10) >220 )||(ball_y5<195)||(ball_y5>215))&&
              (((ball_x5-10) <220 )||((ball_x5-10) >220 )||(ball_y5<225)||(ball_y5>235))&&

              (((ball_x5-10) <230 )||((ball_x5-10) >230 )||(ball_y5<125)||(ball_y5>145))&&
              (((ball_x5-10) <230 )||((ball_x5-10) >230 )||(ball_y5<155)||(ball_y5>165))&&
              (((ball_x5-10) <230 )||((ball_x5-10) >230 )||(ball_y5<175)||(ball_y5>195))&&
              (((ball_x5-10) <230 )||((ball_x5-10) >230 )||(ball_y5<235)||(ball_y5>245))&&

              (((ball_x5-10) <240 )||((ball_x5-10) >240 )||(ball_y5<145)||(ball_y5>175))&&
              (((ball_x5-10) <240 )||((ball_x5-10) >240 )||(ball_y5<185)||(ball_y5>225))&&
              (((ball_x5-10) <240 )||((ball_x5-10) >240 )||(ball_y5<235)||(ball_y5>245))&&

              (((ball_x5-10) <250 )||((ball_x5-10) >250 )||(ball_y5<145)||(ball_y5>155))&&
              (((ball_x5-10) <250 )||((ball_x5-10) >250 )||(ball_y5<165)||(ball_y5>195))&&


              (((ball_x5-10) <260 )||((ball_x5-10) >260 )||(ball_y5<135)||(ball_y5>165))&&
              (((ball_x5-10) <260 )||((ball_x5-10) >260 )||(ball_y5<175)||(ball_y5>195))&&
              (((ball_x5-10) <260 )||((ball_x5-10) >260 )||(ball_y5<225)||(ball_y5>245))&&

              (((ball_x5-10) <270 )||((ball_x5-10) >270 )||(ball_y5<125)||(ball_y5>245))&&

              (((ball_x5-10) <190 )||((ball_x5-10) >190 )||(ball_y5<115)||(ball_y5>125))&&
              (((ball_x5-10) <190 )||((ball_x5-10) >190 )||(ball_y5<245)||(ball_y5>255))&&
              (((ball_x5-10) <200 )||((ball_x5-10) >200 )||(ball_y5<115)||(ball_y5>125))&&
              (((ball_x5-10) <200 )||((ball_x5-10) >200 )||(ball_y5<245)||(ball_y5>255))&&(flag5==1))

               {
            ball_x5=ball_x5-10;
            f15--;
            score5(f15);
            }

            if((((ball_x6-10) <120 )||((ball_x6-10) >120 )||(ball_y6<125)||(ball_y6>225))&&

               (((ball_x6-10) <130 )||((ball_x6-10) >130 )||(ball_y6<135)||(ball_y6>165))&&
               (((ball_x6-10) <130 )||((ball_x6-10) >130 )||(ball_y6<175)||(ball_y6>215))&&

               (((ball_x6-10) <140 )||((ball_x6-10) >140 )||(ball_y6<165)||(ball_y6>205))&&

               (((ball_x6-10) <150 )||((ball_x6-10) >150 )||(ball_y6<125)||(ball_y6>145))&&
               (((ball_x6-10) <150 )||((ball_x6-10) >150 )||(ball_y6<165)||(ball_y6>185))&&

               (((ball_x6-10) <160 )||((ball_x6-10) >160 )||(ball_y6<135)||(ball_y6>165))&&
               (((ball_x6-10) <160 )||((ball_x6-10) >160 )||(ball_y6<185)||(ball_y6>195))&&

               (((ball_x6-10) <170 )||((ball_x6-10) >170 )||(ball_y6<125)||(ball_y6>155))&&
               (((ball_x6-10) <170 )||((ball_x6-10) >170 )||(ball_y6<175)||(ball_y6>185))&&
               (((ball_x6-10) <170 )||((ball_x6-10) >170 )||(ball_y6<205)||(ball_y6>225))&&

               (((ball_x6-10) <180 )||((ball_x6-10) >180 )||(ball_y6<135)||(ball_y6>145))&&
               (((ball_x6-10) <180 )||((ball_x6-10) >180 )||(ball_y6<155)||(ball_y6>215))&&

               (((ball_x6-10) <190 )||((ball_x6-10) >190 )||(ball_y6<145)||(ball_y6>155))&&
               (((ball_x6-10) <190 )||((ball_x6-10) >190 )||(ball_y6<165)||(ball_y6>185))&&
               (((ball_x6-10) <190 )||((ball_x6-10) >190 )||(ball_y6<205)||(ball_y6>215))&&

               (((ball_x6-10) <200 )||((ball_x6-10) >200 )||(ball_y6<155)||(ball_y6>175))&&

               (((ball_x6-10) <210 )||((ball_x6-10) >210 )||(ball_y6<135)||(ball_y6>145))&&

               (((ball_x6-10) <220 )||((ball_x6-10) >220 )||(ball_y6<165)||(ball_y6>205))&&

               (((ball_x6-10) <230 )||((ball_x6-10) >230 )||(ball_y6<135)||(ball_y6>175))&&
               (((ball_x6-10) <230 )||((ball_x6-10) >230 )||(ball_y6<195)||(ball_y6>215))&&

               (((ball_x6-10) <240 )||((ball_x6-10) >240 )||(ball_y6<145)||(ball_y6>155))&&
               (((ball_x6-10) <240 )||((ball_x6-10) >240 )||(ball_y6<195)||(ball_y6>205))&&

               (((ball_x6-10) <250 )||((ball_x6-10) >250 )||(ball_y6<135)||(ball_y6>145))&&
               (((ball_x6-10) <250 )||((ball_x6-10) >250 )||(ball_y6<165)||(ball_y6>185))&&
               (((ball_x6-10) <250 )||((ball_x6-10) >250 )||(ball_y6<205)||(ball_y6>215))&&

               (((ball_x6-10) <260 )||((ball_x6-10) >260 )||(ball_y6<125)||(ball_y6>225))&&

               (((ball_x6-10) <250 )||((ball_x6-10) >250 )||(ball_y6<115)||(ball_y6>125))&&
               (((ball_x6-10) <260 )||((ball_x6-10) >260 )||(ball_y6<115)||(ball_y6>125))&&

               (((ball_x6-10) <120 )||((ball_x6-10) >120 )||(ball_y6<225)||(ball_y6>235))&&
               (((ball_x6-10) <130 )||((ball_x6-10) >130 )||(ball_y6<225)||(ball_y6>235))&&
               (flag6==1)
               )
               {
                ball_x6=ball_x6-10;
                f16--;
                score6(f16);
               }



    }

    if(key == GLUT_KEY_END)
    {
        exit(0);
    }
    if(key == GLUT_KEY_UP)
    {
        if((((ball_y+10) <110 )||((ball_y+10) >110 )||(ball_x<95)||(ball_x>145))&&
                (((ball_y+10) <110 )||((ball_y+10) >110 )||(ball_x<155)||(ball_x>275))&&
                (((ball_y+10) <120 )||((ball_y+10) >120 )||(ball_x<115)||(ball_x>155))&&
                (((ball_y+10) <120 )||((ball_y+10) >120 )||(ball_x<195)||(ball_x>215))&&
                (((ball_y+10) <130 )||((ball_y+10) >130 )||(ball_x<105)||(ball_x>125))&&
                (((ball_y+10) <130 )||((ball_y+10) >130 )||(ball_x<175)||(ball_x>235))&&

                (((ball_y+10) <140 )||((ball_y+10) >140 )||(ball_x<95)||(ball_x>115))&&
                (((ball_y+10) <140 )||((ball_y+10) >140 )||(ball_x<165)||(ball_x>175))&&
                (((ball_y+10) <140 )||((ball_y+10) >140 )||(ball_x<195)||(ball_x>215))&&
                (((ball_y+10) <140 )||((ball_y+10) >140 )||(ball_x<225)||(ball_x>255))&&

                (((ball_y+10) <150 )||((ball_y+10) >150 )||(ball_x<105)||(ball_x>135))&&
                (((ball_y+10) <150 )||((ball_y+10) >150 )||(ball_x<145)||(ball_x>165))&&
                (((ball_y+10) <150 )||((ball_y+10) >150 )||(ball_x<175)||(ball_x>185))&&
                (((ball_y+10) <150 )||((ball_y+10) >150 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y+10) <160 )||((ball_y+10) >160 )||(ball_x<95)||(ball_x>105))&&
                (((ball_y+10) <160 )||((ball_y+10) >160 )||(ball_x<135)||(ball_x>165))&&
                (((ball_y+10) <160 )||((ball_y+10) >160 )||(ball_x<185)||(ball_x>195))&&
                (((ball_y+10) <160 )||((ball_y+10) >160 )||(ball_x<255)||(ball_x>275))&&

                (((ball_y+10) <170 )||((ball_y+10) >170 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y+10) <180 )||((ball_y+10) >180 )||(ball_x<115)||(ball_x>135))&&
                (((ball_y+10) <180 )||((ball_y+10) >180 )||(ball_x<185)||(ball_x>205))&&
                (((ball_y+10) <180 )||((ball_y+10) >180 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y+10) <190 )||((ball_y+10) >190 )||(ball_x<105)||(ball_x>145))&&
                (((ball_y+10) <190 )||((ball_y+10) >190 )||(ball_x<155)||(ball_x>175))&&
                (((ball_y+10) <190 )||((ball_y+10) >190 )||(ball_x<195)||(ball_x>215))&&
                (((ball_y+10) <190 )||((ball_y+10) >190 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y+10) <200 )||((ball_y+10) >200 )||(ball_x<125)||(ball_x>135))&&
                (((ball_y+10) <200 )||((ball_y+10) >200 )||(ball_x<145)||(ball_x>195))&&
                (((ball_y+10) <200 )||((ball_y+10) >200 )||(ball_x<215)||(ball_x>225))&&

                (((ball_y+10) <210 )||((ball_y+10) >210 )||(ball_x<95)||(ball_x>145))&&
                (((ball_y+10) <210 )||((ball_y+10) >210 )||(ball_x<175)||(ball_x>185))&&
                (((ball_y+10) <210 )||((ball_y+10) >210 )||(ball_x<215)||(ball_x>235))&&
                (((ball_y+10) <210 )||((ball_y+10) >210 )||(ball_x<265)||(ball_x>275))&&

                (((ball_y+10) <220 )||((ball_y+10) >220 )||(ball_x<125)||(ball_x>165))&&
                (((ball_y+10) <220 )||((ball_y+10) >220 )||(ball_x<175)||(ball_x>205))&&
                (((ball_y+10) <220 )||((ball_y+10) >220 )||(ball_x<225)||(ball_x>245))&&
                (((ball_y+10) <220 )||((ball_y+10) >220 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y+10) <230 )||((ball_y+10) >230 )||(ball_x<135)||(ball_x>155))&&
                (((ball_y+10) <230 )||((ball_y+10) >230 )||(ball_x<165)||(ball_x>175))&&
                (((ball_y+10) <230 )||((ball_y+10) >230 )||(ball_x<185)||(ball_x>225))&&
                (((ball_y+10) <230 )||((ball_y+10) >230 )||(ball_x<245)||(ball_x>255))&&
                (((ball_y+10) <230 )||((ball_y+10) >230 )||(ball_x<265)||(ball_x>275))&&

                (((ball_y+10) <240 )||((ball_y+10) >240 )||(ball_x<105)||(ball_x>125))&&
                (((ball_y+10) <240 )||((ball_y+10) >240 )||(ball_x<175)||(ball_x>185))&&
                (((ball_y+10) <240 )||((ball_y+10) >240 )||(ball_x<225)||(ball_x>235))&&
                (((ball_y+10) <240 )||((ball_y+10) >240 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y+10) <250 )||((ball_y+10) >250 )||(ball_x<95)||(ball_x>115))&&
                (((ball_y+10) <250 )||((ball_y+10) >250 )||(ball_x<145)||(ball_x>175))&&
                (((ball_y+10) <250 )||((ball_y+10) >250 )||(ball_x<195)||(ball_x>225))&&
                (((ball_y+10) <250 )||((ball_y+10) >250 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y+10) <260 )||((ball_y+10) >260 )||(ball_x<135)||(ball_x>145))&&
                (((ball_y+10) <260 )||((ball_y+10) >260 )||(ball_x<155)||(ball_x>195))&&
                (((ball_y+10) <260 )||((ball_y+10) >260 )||(ball_x<205)||(ball_x>245))&&
                (((ball_y+10) <260 )||((ball_y+10) >260 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y+10) <270 )||((ball_y+10) >270 )||(ball_x<115)||(ball_x>135))&&
                (((ball_y+10) <270 )||((ball_y+10) >270 )||(ball_x<145)||(ball_x>175))&&
                (((ball_y+10) <270 )||((ball_y+10) >270 )||(ball_x<195)||(ball_x>205))&&
                (((ball_y+10) <270 )||((ball_y+10) >270 )||(ball_x<235)||(ball_x>255))&&
                (((ball_y+10) <270 )||((ball_y+10) >270 )||(ball_x<265)||(ball_x>275))&&

                (((ball_y+10) <280 )||((ball_y+10) >280 )||(ball_x<105)||(ball_x>115))&&
                (((ball_y+10) <280 )||((ball_y+10) >280 )||(ball_x<135)||(ball_x>155))&&
                (((ball_y+10) <280 )||((ball_y+10) >280 )||(ball_x<185)||(ball_x>195))&&
                (((ball_y+10) <280 )||((ball_y+10) >280 )||(ball_x<205)||(ball_x>215))&&
                (((ball_y+10) <280 )||((ball_y+10) >280 )||(ball_x<225)||(ball_x>235))&&
                (((ball_y+10) <280 )||((ball_y+10) >280 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y+10) <290 )||((ball_y+10) >290 )||(ball_x<95)||(ball_x>265))&&

                (((ball_y+10) <100 )||((ball_y+10) >100 )||(ball_x<145)||(ball_x>155))&&
                (((ball_y+10) <300 )||((ball_y+10) >300 )||(ball_x<265)||(ball_x>275))&&(flag==1)

          )



        {
            ball_y=ball_y+10;
            f--;
            score(f);
        }

        if(

           (((ball_y1+10) <160 )||((ball_y1+10) >160 )||(ball_x1<155)||(ball_x1>205))&&
           (((ball_y1+10) <160 )||((ball_y1+10) >160 )||(ball_x1<215)||(ball_x1>255))&&

           (((ball_y1+10) <170 )||((ball_y1+10) >170 )||(ball_x1<165)||(ball_x1>175))&&
           (((ball_y1+10) <170 )||((ball_y1+10) >170 )||(ball_x1<185)||(ball_x1>195))&&
           (((ball_y1+10) <170 )||((ball_y1+10) >170 )||(ball_x1<235)||(ball_x1>245))&&

           (((ball_y1+10) <180 )||((ball_y1+10) >180 )||(ball_x1<155)||(ball_x1>165))&&
           (((ball_y1+10) <180 )||((ball_y1+10) >180 )||(ball_x1<185)||(ball_x1>215))&&
           (((ball_y1+10) <180 )||((ball_y1+10) >180 )||(ball_x1<225)||(ball_x1>245))&&

           (((ball_y1+10) <190 )||((ball_y1+10) >190 )||(ball_x1<165)||(ball_x1>195))&&
           (((ball_y1+10) <190 )||((ball_y1+10) >190 )||(ball_x1<205)||(ball_x1>225))&&
           (((ball_y1+10) <190 )||((ball_y1+10) >190 )||(ball_x1<235)||(ball_x1>255))&&

           (((ball_y1+10) <200 )||((ball_y1+10) >200 )||(ball_x1<175)||(ball_x1>185))&&
           (((ball_y1+10) <200 )||((ball_y1+10) >200 )||(ball_x1<195)||(ball_x1>205))&&
           (((ball_y1+10) <200 )||((ball_y1+10) >200 )||(ball_x1<225)||(ball_x1>235))&&

           (((ball_y1+10) <210 )||((ball_y1+10) >210 )||(ball_x1<155)||(ball_x1>175))&&
           (((ball_y1+10) <210 )||((ball_y1+10) >210 )||(ball_x1<185)||(ball_x1>195))&&
           (((ball_y1+10) <210 )||((ball_y1+10) >210 )||(ball_x1<205)||(ball_x1>225))&&
           (((ball_y1+10) <210 )||((ball_y1+10) >210 )||(ball_x1<235)||(ball_x1>245))&&

           (((ball_y1+10) <220 )||((ball_y1+10) >220 )||(ball_x1<175)||(ball_x1>185))&&
           (((ball_y1+10) <220 )||((ball_y1+10) >220 )||(ball_x1<195)||(ball_x1>235))&&

           (((ball_y1+10) <230 )||((ball_y1+10) >230 )||(ball_x1<155)||(ball_x1>175))&&
           (((ball_y1+10) <230 )||((ball_y1+10) >230 )||(ball_x1<215)||(ball_x1>235))&&
           (((ball_y1+10) <230 )||((ball_y1+10) >230 )||(ball_x1<245)||(ball_x1>255))&&

           (((ball_y1+10) <240 )||((ball_y1+10) >240 )||(ball_x1<165)||(ball_x1>195))&&
           (((ball_y1+10) <240 )||((ball_y1+10) >240 )||(ball_x1<205)||(ball_x1>225))&&
           (((ball_y1+10) <240 )||((ball_y1+10) >240 )||(ball_x1<235)||(ball_x1>245))&&

           (((ball_y1+10) <250 )||((ball_y1+10) >250 )||(ball_x1<165)||(ball_x1>175))&&
           (((ball_y1+10) <250 )||((ball_y1+10) >250 )||(ball_x1<195)||(ball_x1>205))&&
           (((ball_y1+10) <250 )||((ball_y1+10) >250 )||(ball_x1<215)||(ball_x1>225))&&

           (((ball_y1+10) <260 )||((ball_y1+10) >260 )||(ball_x1<155)||(ball_x1>195))&&
           (((ball_y1+10) <260 )||((ball_y1+10) >260 )||(ball_x1<205)||(ball_x1>255))
           &&(flag1==1) )
            {
            ball_y1=ball_y1+10;
            f11--;
            score1(f11);
            }

 if((((ball_y4+10) <170 )||((ball_y4+10) >170 )||(ball_x4<155)||(ball_x4>295))&&
                (((ball_y4+10) <180 )||((ball_y4+10) >180 )||(ball_x4<165)||(ball_x4>195))&&
                (((ball_y4+10) <180 )||((ball_y4+10) >180 )||(ball_x4<205)||(ball_x4>225))&&
                (((ball_y4+10) <190 )||((ball_y4+10) >190 )||(ball_x4<175)||(ball_x4>185))&&
                (((ball_y4+10) <200 )||((ball_y4+10) >200 )||(ball_x4<155)||(ball_x4>165))&&
                (((ball_y4+10) <200 )||((ball_y4+10) >200 )||(ball_x4<175)||(ball_x4>195))&&
                (((ball_y4+10) <200 )||((ball_y4+10) >200 )||(ball_x4<205)||(ball_x4>215))&&
                (((ball_y4+10) <200 )||((ball_y4+10) >200 )||(ball_x4<225)||(ball_x4>235))&&
                (((ball_y4+10) <210 )||((ball_y4+10) >210 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4+10) <210 )||((ball_y4+10) >210 )||(ball_x4<185)||(ball_x4>205))&&
                (((ball_y4+10) <210 )||((ball_y4+10) >210 )||(ball_x4<215)||(ball_x4>245))&&
                (((ball_y4+10) <220 )||((ball_y4+10) >220 )||(ball_x4<175)||(ball_x4>185))&&
                (((ball_y4+10) <220 )||((ball_y4+10) >220 )||(ball_x4<205)||(ball_x4>215))&&
                (((ball_y4+10) <230 )||((ball_y4+10) >230 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4+10) <230 )||((ball_y4+10) >230 )||(ball_x4<195)||(ball_x4>225))&&
                (((ball_y4+10) <230 )||((ball_y4+10) >230 )||(ball_x4<235)||(ball_x4>245))&&
                (((ball_y4+10) <240 )||((ball_y4+10) >240 )||(ball_x4<155)||(ball_x4>165))&&
                (((ball_y4+10) <240 )||((ball_y4+10) >240 )||(ball_x4<175)||(ball_x4>185))&&
                (((ball_y4+10) <240 )||((ball_y4+10) >240 )||(ball_x4<205)||(ball_x4>245))&&
                (((ball_y4+10) <250 )||((ball_y4+10) >250 )||(ball_x4<165)||(ball_x4>195))&&
                (((ball_y4+10) <250 )||((ball_y4+10) >250 )||(ball_x4<215)||(ball_x4>225))&&
                (((ball_y4+10) <260 )||((ball_y4+10) >260 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4+10) <260 )||((ball_y4+10) >260 )||(ball_x4<195)||(ball_x4>215))&&
                (((ball_y4+10) <260 )||((ball_y4+10) >260 )||(ball_x4<225)||(ball_x4>235))&&
                (((ball_y4+10) <270 )||((ball_y4+10) >270 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4+10) <270 )||((ball_y4+10) >270 )||(ball_x4<185)||(ball_x4>205))&&
                (((ball_y4+10) <270 )||((ball_y4+10) >270 )||(ball_x4<215)||(ball_x4>225))&&
                (((ball_y4+10) <280 )||((ball_y4+10) >280 )||(ball_x4<155)||(ball_x4>165))&&
                (((ball_y4+10) <280 )||((ball_y4+10) >280 )||(ball_x4<185)||(ball_x4>215))&&
                (((ball_y4+10) <280 )||((ball_y4+10) >280 )||(ball_x4<225)||(ball_x4>235))&&
                (((ball_y4+10) <290 )||((ball_y4+10) >290 )||(ball_x4<215)||(ball_x4>235))&&
                (((ball_y4+10) <300 )||((ball_y4+10) >300 )||(ball_x4<155)||(ball_x4>195))&&
                (((ball_y4+10) <300 )||((ball_y4+10) >300 )||(ball_x4<205)||(ball_x4>245))&&(flag4==1)

          )



        {
            ball_y4=ball_y4+10;
            f14--;
            score4(f14);
        }

            if((((ball_y5+10) <130 )||((ball_y5+10) >130 )||(ball_x5<125)||(ball_x5>195))&&
               (((ball_y5+10) <130 )||((ball_y5+10) >130 )||(ball_x5<205)||(ball_x5>275))&&

               (((ball_y5+10) <140 )||((ball_y5+10) >140 )||(ball_x5<155)||(ball_x5>175))&&
               (((ball_y5+10) <140 )||((ball_y5+10) >140 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5+10) <140 )||((ball_y5+10) >140 )||(ball_x5<235)||(ball_x5>245))&&
               (((ball_y5+10) <140 )||((ball_y5+10) >140 )||(ball_x5<255)||(ball_x5>265))&&

               (((ball_y5+10) <150 )||((ball_y5+10) >150 )||(ball_x5<125)||(ball_x5>165))&&
               (((ball_y5+10) <150 )||((ball_y5+10) >150 )||(ball_x5<225)||(ball_x5>235))&&
               (((ball_y5+10) <150 )||((ball_y5+10) >150 )||(ball_x5<265)||(ball_x5>275))&&

               (((ball_y5+10) <160 )||((ball_y5+10) >160 )||(ball_x5<135)||(ball_x5>145))&&
               (((ball_y5+10) <160 )||((ball_y5+10) >160 )||(ball_x5<155)||(ball_x5>165))&&
               (((ball_y5+10) <160 )||((ball_y5+10) >160 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5+10) <160 )||((ball_y5+10) >160 )||(ball_x5<245)||(ball_x5>255))&&

               (((ball_y5+10) <170 )||((ball_y5+10) >170 )||(ball_x5<135)||(ball_x5>165))&&
               (((ball_y5+10) <170 )||((ball_y5+10) >170 )||(ball_x5<185)||(ball_x5>215))&&
               (((ball_y5+10) <170 )||((ball_y5+10) >170 )||(ball_x5<225)||(ball_x5>245))&&
               (((ball_y5+10) <170 )||((ball_y5+10) >170 )||(ball_x5<255)||(ball_x5>265))&&

               (((ball_y5+10) <180 )||((ball_y5+10) >180 )||(ball_x5<135)||(ball_x5>155))&&
               (((ball_y5+10) <180 )||((ball_y5+10) >180 )||(ball_x5<185)||(ball_x5>195))&&
               (((ball_y5+10) <180 )||((ball_y5+10) >180 )||(ball_x5<215)||(ball_x5>225))&&
               (((ball_y5+10) <180 )||((ball_y5+10) >180 )||(ball_x5<235)||(ball_x5>245))&&

               (((ball_y5+10) <190 )||((ball_y5+10) >190 )||(ball_x5<135)||(ball_x5>145))&&
               (((ball_y5+10) <190 )||((ball_y5+10) >190 )||(ball_x5<155)||(ball_x5>185))&&
               (((ball_y5+10) <190 )||((ball_y5+10) >190 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5+10) <190 )||((ball_y5+10) >190 )||(ball_x5<215)||(ball_x5>225))&&

               (((ball_y5+10) <200 )||((ball_y5+10) >200 )||(ball_x5<135)||(ball_x5>155))&&
               (((ball_y5+10) <200 )||((ball_y5+10) >200 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5+10) <200 )||((ball_y5+10) >200 )||(ball_x5<225)||(ball_x5>235))&&
               (((ball_y5+10) <200 )||((ball_y5+10) >200 )||(ball_x5<265)||(ball_x5>275))&&

               (((ball_y5+10) <210 )||((ball_y5+10) >210 )||(ball_x5<175)||(ball_x5>185))&&
               (((ball_y5+10) <210 )||((ball_y5+10) >210 )||(ball_x5<205)||(ball_x5>215))&&
               (((ball_y5+10) <210 )||((ball_y5+10) >210 )||(ball_x5<235)||(ball_x5>245))&&
               (((ball_y5+10) <210 )||((ball_y5+10) >210 )||(ball_x5<255)||(ball_x5>275))&&

               (((ball_y5+10) <220 )||((ball_y5+10) >220 )||(ball_x5<125)||(ball_x5>145))&&
               (((ball_y5+10) <220 )||((ball_y5+10) >220 )||(ball_x5<155)||(ball_x5>175))&&
               (((ball_y5+10) <220 )||((ball_y5+10) >220 )||(ball_x5<185)||(ball_x5>195))&&
               (((ball_y5+10) <220 )||((ball_y5+10) >220 )||(ball_x5<215)||(ball_x5>235))&&
               (((ball_y5+10) <220 )||((ball_y5+10) >220 )||(ball_x5<245)||(ball_x5>275))&&

               (((ball_y5+10) <230 )||((ball_y5+10) >230 )||(ball_x5<185)||(ball_x5>195))&&
               (((ball_y5+10) <230 )||((ball_y5+10) >230 )||(ball_x5<225)||(ball_x5>235))&&
               (((ball_y5+10) <230 )||((ball_y5+10) >230 )||(ball_x5<255)||(ball_x5>265))&&

               (((ball_y5+10) <240 )||((ball_y5+10) >240 )||(ball_x5<125)||(ball_x5>135))&&
               (((ball_y5+10) <240 )||((ball_y5+10) >240 )||(ball_x5<155)||(ball_x5>165))&&
               (((ball_y5+10) <240 )||((ball_y5+10) >240 )||(ball_x5<215)||(ball_x5>235))&&
               (((ball_y5+10) <240 )||((ball_y5+10) >240 )||(ball_x5<255)||(ball_x5>265))&&


               (((ball_y5+10) <250 )||((ball_y5+10) >250 )||(ball_x5<125)||(ball_x5>195))&&
               (((ball_y5+10) <250 )||((ball_y5+10) >250 )||(ball_x5<205)||(ball_x5>275))&&


               (((ball_y5+10) <120 )||((ball_y5+10) >120 )||(ball_x5<195)||(ball_x5>205))&&

               (((ball_y5+10) <260 )||((ball_y5+10) >260 )||(ball_x5<195)||(ball_x5>205))&&
                (flag5==1))
                {
                   ball_y5=ball_y5+10;
                   f15--;
                   score5(f15);
                }


            if(   (((ball_y6+10) <130 )||((ball_y6+10) >130 )||(ball_x6<125)||(ball_x6>255))&&

               (((ball_y6+10) <140 )||((ball_y6+10) >140 )||(ball_x6<135)||(ball_x6>145))&&
               (((ball_y6+10) <140 )||((ball_y6+10) >140 )||(ball_x6<185)||(ball_x6>195))&&
               (((ball_y6+10) <140 )||((ball_y6+10) >140 )||(ball_x6<205)||(ball_x6>215))&&
               (((ball_y6+10) <140 )||((ball_y6+10) >140 )||(ball_x6<225)||(ball_x6>255))&&

               (((ball_y6+10) <150 )||((ball_y6+10) >150 )||(ball_x6<145)||(ball_x6>155))&&
               (((ball_y6+10) <150 )||((ball_y6+10) >150 )||(ball_x6<175)||(ball_x6>185))&&
               (((ball_y6+10) <150 )||((ball_y6+10) >150 )||(ball_x6<195)||(ball_x6>225))&&

               (((ball_y6+10) <160 )||((ball_y6+10) >160 )||(ball_x6<135)||(ball_x6>165))&&
               (((ball_y6+10) <160 )||((ball_y6+10) >160 )||(ball_x6<185)||(ball_x6>195))&&
               (((ball_y6+10) <160 )||((ball_y6+10) >160 )||(ball_x6<205)||(ball_x6>235))&&
               (((ball_y6+10) <160 )||((ball_y6+10) >160 )||(ball_x6<245)||(ball_x6>265))&&

               (((ball_y6+10) <170 )||((ball_y6+10) >170 )||(ball_x6<125)||(ball_x6>135))&&
               (((ball_y6+10) <170 )||((ball_y6+10) >170 )||(ball_x6<155)||(ball_x6>185))&&
               (((ball_y6+10) <170 )||((ball_y6+10) >170 )||(ball_x6<215)||(ball_x6>225))&&
               (((ball_y6+10) <170 )||((ball_y6+10) >170 )||(ball_x6<245)||(ball_x6>255))&&

               (((ball_y6+10) <180 )||((ball_y6+10) >180 )||(ball_x6<155)||(ball_x6>175))&&
               (((ball_y6+10) <180 )||((ball_y6+10) >180 )||(ball_x6<205)||(ball_x6>225))&&
               (((ball_y6+10) <180 )||((ball_y6+10) >180 )||(ball_x6<235)||(ball_x6>245))&&

               (((ball_y6+10) <190 )||((ball_y6+10) >190 )||(ball_x6<195)||(ball_x6>255))&&

               (((ball_y6+10) <200 )||((ball_y6+10) >200 )||(ball_x6<145)||(ball_x6>175))&&
               (((ball_y6+10) <200 )||((ball_y6+10) >200 )||(ball_x6<185)||(ball_x6>215))&&
               (((ball_y6+10) <200 )||((ball_y6+10) >200 )||(ball_x6<245)||(ball_x6>265))&&

               (((ball_y6+10) <210 )||((ball_y6+10) >210 )||(ball_x6<125)||(ball_x6>135))&&
               (((ball_y6+10) <210 )||((ball_y6+10) >210 )||(ball_x6<145)||(ball_x6>175))&&
               (((ball_y6+10) <210 )||((ball_y6+10) >210 )||(ball_x6<195)||(ball_x6>225))&&

               (((ball_y6+10) <220 )||((ball_y6+10) >220 )||(ball_x6<135)||(ball_x6>165))&&
               (((ball_y6+10) <220 )||((ball_y6+10) >220 )||(ball_x6<185)||(ball_x6>255))&&

               (((ball_y6+10) <230 )||((ball_y6+10) >230 )||(ball_x6<135)||(ball_x6>265))&&

               (((ball_y6+10) <120 )||((ball_y6+10) >120 )||(ball_x6<255)||(ball_x6>265))&&

               (((ball_y6+10) <240 )||((ball_y6+10) >240 )||(ball_x6<125)||(ball_x6>135))&&
                (flag6==1))

                {
                   ball_y6=ball_y6+10;
                   f16--;
                   score6(f16);
                }

                if((((ball_y2+10) <170 )||((ball_y2+10) >170 )||(ball_x2<155)||(ball_x2>255))&&
                (((ball_y2+10) <180 )||((ball_y2+10) >180 )||(ball_x2<155)||(ball_x2>245))&&
                (((ball_y2+10) <190 )||((ball_y2+10) >190 )||(ball_x2<185)||(ball_x2>225))&&
                (((ball_y2+10) <190 )||((ball_y2+10) >190 )||(ball_x2<235)||(ball_x2>245))&&
                (((ball_y2+10) <200 )||((ball_y2+10) >200 )||(ball_x2<175)||(ball_x2>215))&&
                (((ball_y2+10) <210 )||((ball_y2+10) >210 )||(ball_x2<195)||(ball_x2>205))&&

                (((ball_y2+10) <220 )||((ball_y2+10) >220 )||(ball_x2<185)||(ball_x2>195))&&
                (((ball_y2+10) <230 )||((ball_y2+10) >230 )||(ball_x2<155)||(ball_x2>165))&&
                (((ball_y2+10) <230 )||((ball_y2+10) >230 )||(ball_x2<195)||(ball_x2>225))&&
                (((ball_y2+10) <240 )||((ball_y2+10) >240 )||(ball_x2<185)||(ball_x2>235))&&

                (((ball_y2+10) <250 )||((ball_y2+10) >250 )||(ball_x2<175)||(ball_x2>225))&&
                (((ball_y2+10) <250 )||((ball_y2+10) >250 )||(ball_x2<235)||(ball_x2>245))&&
                (((ball_y2+10) <260 )||((ball_y2+10) >260 )||(ball_x2<165)||(ball_x2>175))&&
                (((ball_y2+10) <260 )||((ball_y2+10) >260 )||(ball_x2<195)||(ball_x2>205))&&

                (((ball_y2+10) <260 )||((ball_y2+10) >260 )||(ball_x2<215)||(ball_x2>235))&&
                (((ball_y2+10) <270 )||((ball_y2+10) >270 )||(ball_x2<155)||(ball_x2>255))&&(flag2==1)

          )



        {
            ball_y2=ball_y2+10;
            f12--;
            score2(f12);
        }
        if((((ball_y3+10) <170 )||((ball_y3+10) >170 )||(ball_x3<155)||(ball_x3>165))&&
                (((ball_y3+10) <170 )||((ball_y3+10) >170 )||(ball_x3<185)||(ball_x3>245))&&
                (((ball_y3+10) <180 )||((ball_y3+10) >180 )||(ball_x3<165)||(ball_x3>185))&&
                (((ball_y3+10) <180 )||((ball_y3+10) >180 )||(ball_x3<215)||(ball_x3>235))&&
                (((ball_y3+10) <190 )||((ball_y3+10) >190 )||(ball_x3<195)||(ball_x3>205))&&
                (((ball_y3+10) <190 )||((ball_y3+10) >190 )||(ball_x3<215)||(ball_x3>225))&&

                (((ball_y3+10) <190 )||((ball_y3+10) >190 )||(ball_x3<235)||(ball_x3>245))&&
                (((ball_y3+10) <200 )||((ball_y3+10) >200 )||(ball_x3<155)||(ball_x3>175))&&
                (((ball_y3+10) <200 )||((ball_y3+10) >200 )||(ball_x3<205)||(ball_x3>215))&&
                (((ball_y3+10) <200 )||((ball_y3+10) >200 )||(ball_x3<235)||(ball_x3>245))&&

                (((ball_y3+10) <210 )||((ball_y3+10) >210 )||(ball_x3<175)||(ball_x3>185))&&
                (((ball_y3+10) <210 )||((ball_y3+10) >210 )||(ball_x3<195)||(ball_x3>235))&&
                (((ball_y3+10) <220 )||((ball_y3+10) >220 )||(ball_x3<165)||(ball_x3>175))&&
                (((ball_y3+10) <220 )||((ball_y3+10) >220 )||(ball_x3<185)||(ball_x3>205))&&

                (((ball_y3+10) <220 )||((ball_y3+10) >220 )||(ball_x3<235)||(ball_x3>245))&&
                (((ball_y3+10) <230 )||((ball_y3+10) >230 )||(ball_x3<155)||(ball_x3>175))&&
                (((ball_y3+10) <230 )||((ball_y3+10) >230 )||(ball_x3<195)||(ball_x3>215))&&
                (((ball_y3+10) <240 )||((ball_y3+10) >240 )||(ball_x3<205)||(ball_x3>235))&&
                (((ball_y3+10) <250 )||((ball_y3+10) >250 )||(ball_x3<165)||(ball_x3>185))&&
                (((ball_y3+10) <250 )||((ball_y3+10) >250 )||(ball_x3<195)||(ball_x3>215))&&
                (((ball_y3+10) <250 )||((ball_y3+10) >250 )||(ball_x3<225)||(ball_x3>235))&&
                (((ball_y3+10) <260 )||((ball_y3+10) >260 )||(ball_x3<165)||(ball_x3>185))&&
                (((ball_y3+10) <260 )||((ball_y3+10) >260 )||(ball_x3<205)||(ball_x3>215))&&
                (((ball_y3+10) <260 )||((ball_y3+10) >260 )||(ball_x3<235)||(ball_x3>245))&&
                (((ball_y3+10) <270 )||((ball_y3+10) >270 )||(ball_x3<175)||(ball_x3>205))&&
                (((ball_y3+10) <270 )||((ball_y3+10) >270 )||(ball_x3<215)||(ball_x3>235))&&
                (((ball_y3+10) <280 )||((ball_y3+10) >280 )||(ball_x3<155)||(ball_x3>275))&&(flag3==1)

          )



        {
            ball_y3=ball_y3+10;
            f13--;
            score3(f13);
        }





    }

    if(key == GLUT_KEY_DOWN)
    {
                if((((ball_y-10) <100 )||((ball_y-10) >100 )||(ball_x<95)||(ball_x>145))&&
                (((ball_y-10) <100 )||((ball_y-10) >100 )||(ball_x<155)||(ball_x>275))&&

                (((ball_y-10) <110 )||((ball_y-10) >110 )||(ball_x<115)||(ball_x>155))&&
                (((ball_y-10) <110 )||((ball_y-10) >110 )||(ball_x<195)||(ball_x>215))&&

                (((ball_y-10) <120 )||((ball_y-10) >120 )||(ball_x<105)||(ball_x>125))&&
                (((ball_y-10) <120 )||((ball_y-10) >120 )||(ball_x<175)||(ball_x>235))&&

                (((ball_y-10) <130 )||((ball_y-10) >130 )||(ball_x<95)||(ball_x>115))&&
                (((ball_y-10) <130 )||((ball_y-10) >130 )||(ball_x<165)||(ball_x>175))&&
                (((ball_y-10) <130 )||((ball_y-10) >130 )||(ball_x<195)||(ball_x>215))&&
                (((ball_y-10) <130 )||((ball_y-10) >130 )||(ball_x<225)||(ball_x>255))&&

                (((ball_y-10) <140 )||((ball_y-10) >140 )||(ball_x<105)||(ball_x>135))&&
                (((ball_y-10) <140 )||((ball_y-10) >140 )||(ball_x<145)||(ball_x>165))&&
                (((ball_y-10) <140 )||((ball_y-10) >140 )||(ball_x<175)||(ball_x>185))&&
                (((ball_y-10) <140 )||((ball_y-10) >140 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y-10) <150 )||((ball_y-10) >150 )||(ball_x<95)||(ball_x>105))&&
                (((ball_y-10) <150 )||((ball_y-10) >150 )||(ball_x<135)||(ball_x>165))&&
                (((ball_y-10) <150 )||((ball_y-10) >150 )||(ball_x<185)||(ball_x>195))&&
                (((ball_y-10) <150 )||((ball_y-10) >150 )||(ball_x<255)||(ball_x>275))&&

                (((ball_y-10) <160 )||((ball_y-10) >160 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y-10) <170 )||((ball_y-10) >170 )||(ball_x<115)||(ball_x>135))&&
                (((ball_y-10) <170 )||((ball_y-10) >170 )||(ball_x<185)||(ball_x>205))&&
                (((ball_y-10) <170 )||((ball_y-10) >170 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y-10) <180 )||((ball_y-10) >180 )||(ball_x<105)||(ball_x>145))&&
                (((ball_y-10) <180 )||((ball_y-10) >180 )||(ball_x<155)||(ball_x>175))&&
                (((ball_y-10) <180 )||((ball_y-10) >180 )||(ball_x<195)||(ball_x>215))&&
                (((ball_y-10) <180 )||((ball_y-10) >180 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y-10) <190 )||((ball_y-10) >190 )||(ball_x<125)||(ball_x>135))&&
                (((ball_y-10) <190 )||((ball_y-10) >190 )||(ball_x<145)||(ball_x>195))&&
                (((ball_y-10) <190 )||((ball_y-10) >190 )||(ball_x<215)||(ball_x>225))&&

                (((ball_y-10) <200 )||((ball_y-10) >200 )||(ball_x<95)||(ball_x>145))&&
                (((ball_y-10) <200 )||((ball_y-10) >200 )||(ball_x<175)||(ball_x>185))&&
                (((ball_y-10) <200 )||((ball_y-10) >200 )||(ball_x<215)||(ball_x>235))&&
                (((ball_y-10) <200 )||((ball_y-10) >200 )||(ball_x<265)||(ball_x>275))&&

                (((ball_y-10) <210 )||((ball_y-10) >210 )||(ball_x<125)||(ball_x>165))&&
                (((ball_y-10) <210 )||((ball_y-10) >210 )||(ball_x<175)||(ball_x>205))&&
                (((ball_y-10) <210 )||((ball_y-10) >210 )||(ball_x<225)||(ball_x>245))&&
                (((ball_y-10) <210 )||((ball_y-10) >210 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y-10) <220 )||((ball_y-10) >220 )||(ball_x<135)||(ball_x>155))&&
                (((ball_y-10) <220 )||((ball_y-10) >220 )||(ball_x<165)||(ball_x>175))&&
                (((ball_y-10) <220 )||((ball_y-10) >220 )||(ball_x<185)||(ball_x>225))&&
                (((ball_y-10) <220 )||((ball_y-10) >220 )||(ball_x<245)||(ball_x>255))&&
                (((ball_y-10) <220 )||((ball_y-10) >220 )||(ball_x<265)||(ball_x>275))&&

                (((ball_y-10) <230 )||((ball_y-10) >230 )||(ball_x<105)||(ball_x>125))&&
                (((ball_y-10) <230 )||((ball_y-10) >230 )||(ball_x<175)||(ball_x>185))&&
                (((ball_y-10) <230 )||((ball_y-10) >230 )||(ball_x<225)||(ball_x>235))&&
                (((ball_y-10) <230 )||((ball_y-10) >230 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y-10) <240 )||((ball_y-10) >240 )||(ball_x<95)||(ball_x>115))&&
                (((ball_y-10) <240 )||((ball_y-10) >240 )||(ball_x<145)||(ball_x>175))&&
                (((ball_y-10) <240 )||((ball_y-10) >240 )||(ball_x<195)||(ball_x>225))&&
                (((ball_y-10) <240 )||((ball_y-10) >240 )||(ball_x<245)||(ball_x>265))&&

                (((ball_y-10) <250 )||((ball_y-10) >250 )||(ball_x<135)||(ball_x>145))&&
                (((ball_y-10) <250 )||((ball_y-10) >250 )||(ball_x<155)||(ball_x>195))&&
                (((ball_y-10) <250 )||((ball_y-10) >250 )||(ball_x<205)||(ball_x>245))&&
                (((ball_y-10) <250 )||((ball_y-10) >250 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y-10) <260 )||((ball_y-10) >260 )||(ball_x<115)||(ball_x>135))&&
                (((ball_y-10) <260 )||((ball_y-10) >260 )||(ball_x<145)||(ball_x>175))&&
                (((ball_y-10) <260 )||((ball_y-10) >260 )||(ball_x<195)||(ball_x>205))&&
                (((ball_y-10) <260 )||((ball_y-10) >260 )||(ball_x<235)||(ball_x>255))&&
                (((ball_y-10) <260 )||((ball_y-10) >260 )||(ball_x<265)||(ball_x>275))&&

                (((ball_y-10) <270 )||((ball_y-10) >270 )||(ball_x<105)||(ball_x>115))&&
                (((ball_y-10) <270 )||((ball_y-10) >270 )||(ball_x<135)||(ball_x>155))&&
                (((ball_y-10) <270 )||((ball_y-10) >270 )||(ball_x<185)||(ball_x>195))&&
                (((ball_y-10) <270 )||((ball_y-10) >270 )||(ball_x<205)||(ball_x>215))&&
                (((ball_y-10) <270 )||((ball_y-10) >270 )||(ball_x<225)||(ball_x>235))&&
                (((ball_y-10) <270 )||((ball_y-10) >270 )||(ball_x<255)||(ball_x>265))&&

                (((ball_y-10) <280 )||((ball_y-10) >280 )||(ball_x<95)||(ball_x>265))&&

                (((ball_y-10) <90 )||((ball_y-10) >90 )||(ball_x<145)||(ball_x>155))&&
                (((ball_y-10) <290 )||((ball_y-10) >290 )||(ball_x<265)||(ball_x>275))&&(flag==1)

          )
        {
            ball_y=ball_y-10;
            f--;
            score(f);
        }

        if(

           (((ball_y1-10) <150 )||((ball_y1-10) >150 )||(ball_x1<155)||(ball_x1>205))&&
           (((ball_y1-10) <150 )||((ball_y1-10) >150 )||(ball_x1<215)||(ball_x1>255))&&

           (((ball_y1-10) <160 )||((ball_y1-10) >160 )||(ball_x1<165)||(ball_x1>175))&&
           (((ball_y1-10) <160 )||((ball_y1-10) >160 )||(ball_x1<185)||(ball_x1>195))&&
           (((ball_y1-10) <160 )||((ball_y1-10) >160 )||(ball_x1<235)||(ball_x1>245))&&

           (((ball_y1-10) <170 )||((ball_y1-10) >170 )||(ball_x1<155)||(ball_x1>165))&&
           (((ball_y1-10) <170 )||((ball_y1-10) >170 )||(ball_x1<185)||(ball_x1>215))&&
           (((ball_y1-10) <170 )||((ball_y1-10) >170 )||(ball_x1<225)||(ball_x1>245))&&

           (((ball_y1-10) <180 )||((ball_y1-10) >180 )||(ball_x1<165)||(ball_x1>195))&&
           (((ball_y1-10) <180 )||((ball_y1-10) >180 )||(ball_x1<205)||(ball_x1>225))&&
           (((ball_y1-10) <180 )||((ball_y1-10) >180 )||(ball_x1<235)||(ball_x1>255))&&

           (((ball_y1-10) <190 )||((ball_y1-10) >190 )||(ball_x1<175)||(ball_x1>185))&&
           (((ball_y1-10) <190 )||((ball_y1-10) >190 )||(ball_x1<195)||(ball_x1>205))&&
           (((ball_y1-10) <190 )||((ball_y1-10) >190 )||(ball_x1<225)||(ball_x1>235))&&

           (((ball_y1-10) <200 )||((ball_y1-10) >200 )||(ball_x1<155)||(ball_x1>175))&&
           (((ball_y1-10) <200 )||((ball_y1-10) >200 )||(ball_x1<185)||(ball_x1>195))&&
           (((ball_y1-10) <200 )||((ball_y1-10) >200 )||(ball_x1<205)||(ball_x1>225))&&
           (((ball_y1-10) <200 )||((ball_y1-10) >200 )||(ball_x1<235)||(ball_x1>245))&&

           (((ball_y1-10) <210 )||((ball_y1-10) >210 )||(ball_x1<175)||(ball_x1>185))&&
           (((ball_y1-10) <210 )||((ball_y1-10) >210 )||(ball_x1<195)||(ball_x1>235))&&

           (((ball_y1-10) <220 )||((ball_y1-10) >220 )||(ball_x1<155)||(ball_x1>175))&&
           (((ball_y1-10) <220 )||((ball_y1-10) >220 )||(ball_x1<215)||(ball_x1>235))&&
           (((ball_y1-10) <220 )||((ball_y1-10) >220 )||(ball_x1<245)||(ball_x1>255))&&

           (((ball_y1-10) <230 )||((ball_y1-10) >230 )||(ball_x1<165)||(ball_x1>195))&&
           (((ball_y1-10) <230 )||((ball_y1-10) >230 )||(ball_x1<205)||(ball_x1>225))&&
           (((ball_y1-10) <230 )||((ball_y1-10) >230 )||(ball_x1<235)||(ball_x1>245))&&

           (((ball_y1-10) <240 )||((ball_y1-10) >240 )||(ball_x1<165)||(ball_x1>175))&&
           (((ball_y1-10) <240 )||((ball_y1-10) >240 )||(ball_x1<195)||(ball_x1>205))&&
           (((ball_y1-10) <240 )||((ball_y1-10) >240 )||(ball_x1<215)||(ball_x1>225))&&

           (((ball_y1-10) <250 )||((ball_y1-10) >250 )||(ball_x1<155)||(ball_x1>195))&&
           (((ball_y1-10) <250 )||((ball_y1-10) >250 )||(ball_x1<205)||(ball_x1>255))
           &&(flag1==1) )
        {

            ball_y1=ball_y1-10;
            f11--;
            score1(f11);
            }
             if((((ball_y2-10) <160 )||((ball_y2-10) >160 )||(ball_x2<155)||(ball_x2>255))&&
                (((ball_y2-10) <170 )||((ball_y2-10) >170 )||(ball_x2<155)||(ball_x2>245))&&
                (((ball_y2-10) <180 )||((ball_y2-10) >180 )||(ball_x2<185)||(ball_x2>225))&&
                (((ball_y2-10) <180 )||((ball_y2-10) >180 )||(ball_x2<235)||(ball_x2>245))&&
                (((ball_y2-10) <190 )||((ball_y2-10) >190 )||(ball_x2<175)||(ball_x2>215))&&
                (((ball_y2-10) <200 )||((ball_y2-10) >200 )||(ball_x2<195)||(ball_x2>205))&&

                (((ball_y2-10) <210 )||((ball_y2-10) >210 )||(ball_x2<185)||(ball_x2>195))&&
                (((ball_y2-10) <220 )||((ball_y2-10) >220 )||(ball_x2<155)||(ball_x2>165))&&
                (((ball_y2-10) <220 )||((ball_y2-10) >220 )||(ball_x2<195)||(ball_x2>225))&&
                (((ball_y2-10) <230 )||((ball_y2-10) >230 )||(ball_x2<185)||(ball_x2>235))&&

                (((ball_y2-10) <240 )||((ball_y2-10) >240 )||(ball_x2<175)||(ball_x2>225))&&
                (((ball_y2-10) <240 )||((ball_y2-10) >240 )||(ball_x2<235)||(ball_x2>245))&&
                (((ball_y2-10) <250 )||((ball_y2-10) >250 )||(ball_x2<165)||(ball_x2>175))&&
                (((ball_y2-10) <250 )||((ball_y2-10) >250 )||(ball_x2<195)||(ball_x2>205))&&

                (((ball_y2-10) <250 )||((ball_y2-10) >250 )||(ball_x2<215)||(ball_x2>235))&&
                (((ball_y2-10) <260 )||((ball_y2-10) >260 )||(ball_x2<155)||(ball_x2>255)) && (flag2==1)

          )
        {
            ball_y2=ball_y2-10;
            f12--;
            score2(f12);
        }


      if((((ball_y3-10) <160 )||((ball_y3-10) >160 )||(ball_x3<155)||(ball_x3>165))&&
                (((ball_y3-10) <160 )||((ball_y3-10) >160 )||(ball_x3<185)||(ball_x3>245))&&
                (((ball_y3-10) <170 )||((ball_y3-10) >170 )||(ball_x3<165)||(ball_x3>185))&&
                (((ball_y3-10) <170 )||((ball_y3-10) >170 )||(ball_x3<215)||(ball_x3>235))&&
                (((ball_y3-10) <180 )||((ball_y3-10) >180 )||(ball_x3<195)||(ball_x3>205))&&
                (((ball_y3-10) <180 )||((ball_y3-10) >180 )||(ball_x3<215)||(ball_x3>225))&&

                (((ball_y3-10) <180 )||((ball_y3-10) >180 )||(ball_x3<235)||(ball_x3>245))&&
                (((ball_y3-10) <190 )||((ball_y3-10) >190 )||(ball_x3<155)||(ball_x3>175))&&
                (((ball_y3-10) <190 )||((ball_y3-10) >190 )||(ball_x3<205)||(ball_x3>215))&&
                (((ball_y3-10) <190 )||((ball_y3-10) >190 )||(ball_x3<235)||(ball_x3>245))&&
                (((ball_y3-10) <200 )||((ball_y3-10) >200 )||(ball_x3<175)||(ball_x3>185))&&
                (((ball_y3-10) <200 )||((ball_y3-10) >200 )||(ball_x3<195)||(ball_x3>235))&&
                (((ball_y3-10) <210 )||((ball_y3-10) >210 )||(ball_x3<165)||(ball_x3>175))&&
                (((ball_y3-10) <210 )||((ball_y3-10) >210 )||(ball_x3<185)||(ball_x3>205))&&

                (((ball_y3-10) <210 )||((ball_y3-10) >210 )||(ball_x3<235)||(ball_x3>245))&&
                (((ball_y3-10) <220 )||((ball_y3-10) >220 )||(ball_x3<155)||(ball_x3>175))&&
                (((ball_y3-10) <220 )||((ball_y3-10) >220 )||(ball_x3<195)||(ball_x3>215))&&
                (((ball_y3-10) <230 )||((ball_y3-10) >230 )||(ball_x3<205)||(ball_x3>235))&&
                (((ball_y3-10) <240 )||((ball_y3-10) >240 )||(ball_x3<165)||(ball_x3>185))&&
                (((ball_y3-10) <240 )||((ball_y3-10) >240 )||(ball_x3<195)||(ball_x3>215))&&
                (((ball_y3-10) <240 )||((ball_y3-10) >240 )||(ball_x3<225)||(ball_x3>235))&&
                (((ball_y3-10) <250 )||((ball_y3-10) >250 )||(ball_x3<165)||(ball_x3>185))&&
                (((ball_y3-10) <250 )||((ball_y3-10) >250 )||(ball_x3<205)||(ball_x3>215))&&
                (((ball_y3-10) <250 )||((ball_y3-10) >250 )||(ball_x3<235)||(ball_x3>245))&&
                (((ball_y3-10) <260 )||((ball_y3-10) >260 )||(ball_x3<175)||(ball_x3>205))&&
                (((ball_y3-10) <260 )||((ball_y3-10) >260 )||(ball_x3<215)||(ball_x3>235))&&
                (((ball_y3-10) <270 )||((ball_y3-10) >270 )||(ball_x3<155)||(ball_x3>275))&&(flag3==1)

          )
        {
            ball_y3=ball_y3-10;
            f13--;
            score3(f13);
        }

         if((((ball_y4-10) <160 )||((ball_y4-10) >160 )||(ball_x4<155)||(ball_x4>295))&&
                (((ball_y4-10) <170 )||((ball_y4-10) >170 )||(ball_x4<165)||(ball_x4>195))&&
                (((ball_y4-10) <170 )||((ball_y4-10) >170 )||(ball_x4<205)||(ball_x4>225))&&
                (((ball_y4-10) <180 )||((ball_y4-10) >180 )||(ball_x4<175)||(ball_x4>185))&&
                (((ball_y4-10) <190 )||((ball_y4-10) >190 )||(ball_x4<155)||(ball_x4>165))&&
                (((ball_y4-10) <190 )||((ball_y4-10) >190 )||(ball_x4<175)||(ball_x4>195))&&
                (((ball_y4-10) <190 )||((ball_y4-10) >190 )||(ball_x4<205)||(ball_x4>215))&&
                (((ball_y4-10) <190 )||((ball_y4-10) >190 )||(ball_x4<225)||(ball_x4>235))&&
                (((ball_y4-10) <200 )||((ball_y4-10) >200 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4-10) <200 )||((ball_y4-10) >200 )||(ball_x4<185)||(ball_x4>205))&&
                (((ball_y4-10) <200 )||((ball_y4-10) >200 )||(ball_x4<215)||(ball_x4>245))&&
                (((ball_y4-10) <210 )||((ball_y4-10) >210 )||(ball_x4<175)||(ball_x4>185))&&
                (((ball_y4-10) <210 )||((ball_y4-10) >210 )||(ball_x4<205)||(ball_x4>215))&&
                (((ball_y4-10) <220 )||((ball_y4-10) >220 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4-10) <220 )||((ball_y4-10) >220 )||(ball_x4<195)||(ball_x4>225))&&
                (((ball_y4-10) <220 )||((ball_y4-10) >220 )||(ball_x4<235)||(ball_x4>245))&&
                (((ball_y4-10) <230 )||((ball_y4-10) >230 )||(ball_x4<155)||(ball_x4>165))&&
                (((ball_y4-10) <230 )||((ball_y4-10) >230 )||(ball_x4<175)||(ball_x4>185))&&
                (((ball_y4-10) <230 )||((ball_y4-10) >230 )||(ball_x4<205)||(ball_x4>245))&&
                (((ball_y4-10) <240 )||((ball_y4-10) >240 )||(ball_x4<165)||(ball_x4>195))&&
                (((ball_y4-10) <240 )||((ball_y4-10) >240 )||(ball_x4<215)||(ball_x4>225))&&
                (((ball_y4-10) <250 )||((ball_y4-10) >250 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4-10) <250 )||((ball_y4-10) >250 )||(ball_x4<195)||(ball_x4>215))&&
                (((ball_y4-10) <250 )||((ball_y4-10) >250 )||(ball_x4<225)||(ball_x4>235))&&
                (((ball_y4-10) <260 )||((ball_y4-10) >260 )||(ball_x4<165)||(ball_x4>175))&&
                (((ball_y4-10) <260 )||((ball_y4-10) >260 )||(ball_x4<185)||(ball_x4>205))&&
                (((ball_y4-10) <260 )||((ball_y4-10) >260 )||(ball_x4<215)||(ball_x4>225))&&
                (((ball_y4-10) <270 )||((ball_y4-10) >270 )||(ball_x4<155)||(ball_x4>165))&&
                (((ball_y4-10) <270 )||((ball_y4-10) >270 )||(ball_x4<185)||(ball_x4>215))&&
                (((ball_y4-10) <270 )||((ball_y4-10) >270 )||(ball_x4<225)||(ball_x4>235))&&
                (((ball_y4-10) <280 )||((ball_y4-10) >280 )||(ball_x4<215)||(ball_x4>235))&&
                (((ball_y4-10) <290 )||((ball_y4-10) >290 )||(ball_x4<155)||(ball_x4>195))&&
                (((ball_y4-10) <290 )||((ball_y4-10) >290 )||(ball_x4<205)||(ball_x4>245)) &&(flag4==1)

          )

        {
            ball_y4=ball_y4-10;
            f14--;
            score4(f14);
        }

            if((((ball_y5-10) <120 )||((ball_y5-10) >120 )||(ball_x5<125)||(ball_x5>195))&&
               (((ball_y5-10) <120 )||((ball_y5-10) >120 )||(ball_x5<205)||(ball_x5>275))&&

               (((ball_y5-10) <130 )||((ball_y5-10) >130 )||(ball_x5<155)||(ball_x5>175))&&
               (((ball_y5-10) <130 )||((ball_y5-10) >130 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5-10) <130 )||((ball_y5-10) >130 )||(ball_x5<235)||(ball_x5>245))&&
               (((ball_y5-10) <130 )||((ball_y5-10) >130 )||(ball_x5<255)||(ball_x5>265))&&

               (((ball_y5-10) <140 )||((ball_y5-10) >140 )||(ball_x5<125)||(ball_x5>165))&&
               (((ball_y5-10) <140 )||((ball_y5-10) >140 )||(ball_x5<225)||(ball_x5>235))&&
               (((ball_y5-10) <140 )||((ball_y5-10) >140 )||(ball_x5<265)||(ball_x5>275))&&

               (((ball_y5-10) <150 )||((ball_y5-10) >150 )||(ball_x5<135)||(ball_x5>145))&&
               (((ball_y5-10) <150 )||((ball_y5-10) >150 )||(ball_x5<155)||(ball_x5>165))&&
               (((ball_y5-10) <150 )||((ball_y5-10) >150 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5-10) <150 )||((ball_y5-10) >150 )||(ball_x5<245)||(ball_x5>255))&&

               (((ball_y5-10) <160 )||((ball_y5-10) >160 )||(ball_x5<135)||(ball_x5>165))&&
               (((ball_y5-10) <160 )||((ball_y5-10) >160 )||(ball_x5<185)||(ball_x5>215))&&
               (((ball_y5-10) <160 )||((ball_y5-10) >160 )||(ball_x5<225)||(ball_x5>245))&&
               (((ball_y5-10) <160 )||((ball_y5-10) >160 )||(ball_x5<255)||(ball_x5>265))&&

               (((ball_y5-10) <170 )||((ball_y5-10) >170 )||(ball_x5<135)||(ball_x5>155))&&
               (((ball_y5-10) <170 )||((ball_y5-10) >170 )||(ball_x5<185)||(ball_x5>195))&&
               (((ball_y5-10) <170 )||((ball_y5-10) >170 )||(ball_x5<215)||(ball_x5>225))&&
               (((ball_y5-10) <170 )||((ball_y5-10) >170 )||(ball_x5<235)||(ball_x5>245))&&

               (((ball_y5-10) <180 )||((ball_y5-10) >180 )||(ball_x5<135)||(ball_x5>145))&&
               (((ball_y5-10) <180 )||((ball_y5-10) >180 )||(ball_x5<155)||(ball_x5>185))&&
               (((ball_y5-10) <180 )||((ball_y5-10) >180 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5-10) <180 )||((ball_y5-10) >180 )||(ball_x5<215)||(ball_x5>225))&&

               (((ball_y5-10) <190 )||((ball_y5-10) >190 )||(ball_x5<135)||(ball_x5>155))&&
               (((ball_y5-10) <190 )||((ball_y5-10) >190 )||(ball_x5<195)||(ball_x5>205))&&
               (((ball_y5-10) <190 )||((ball_y5-10) >190 )||(ball_x5<225)||(ball_x5>235))&&
               (((ball_y5-10) <190 )||((ball_y5-10) >190 )||(ball_x5<265)||(ball_x5>275))&&

               (((ball_y5-10) <200 )||((ball_y5-10) >200 )||(ball_x5<175)||(ball_x5>185))&&
               (((ball_y5-10) <200 )||((ball_y5-10) >200 )||(ball_x5<205)||(ball_x5>215))&&
               (((ball_y5-10) <200 )||((ball_y5-10) >200 )||(ball_x5<235)||(ball_x5>245))&&
               (((ball_y5-10) <200 )||((ball_y5-10) >200 )||(ball_x5<255)||(ball_x5>275))&&

               (((ball_y5-10) <210 )||((ball_y5-10) >210 )||(ball_x5<125)||(ball_x5>145))&&
               (((ball_y5-10) <210 )||((ball_y5-10) >210 )||(ball_x5<155)||(ball_x5>175))&&
               (((ball_y5-10) <210 )||((ball_y5-10) >210 )||(ball_x5<185)||(ball_x5>195))&&
               (((ball_y5-10) <210 )||((ball_y5-10) >210 )||(ball_x5<215)||(ball_x5>235))&&
               (((ball_y5-10) <210 )||((ball_y5-10) >210 )||(ball_x5<245)||(ball_x5>275))&&

               (((ball_y5-10) <220 )||((ball_y5-10) >220 )||(ball_x5<185)||(ball_x5>195))&&
               (((ball_y5-10) <220 )||((ball_y5-10) >220 )||(ball_x5<225)||(ball_x5>235))&&
               (((ball_y5-10) <220 )||((ball_y5-10) >220 )||(ball_x5<255)||(ball_x5>265))&&

               (((ball_y5-10) <230 )||((ball_y5-10) >230 )||(ball_x5<125)||(ball_x5>135))&&
               (((ball_y5-10) <230 )||((ball_y5-10) >230 )||(ball_x5<155)||(ball_x5>165))&&
               (((ball_y5-10) <230 )||((ball_y5-10) >230 )||(ball_x5<215)||(ball_x5>235))&&
               (((ball_y5-10) <230 )||((ball_y5-10) >230 )||(ball_x5<255)||(ball_x5>265))&&

               (((ball_y5-10) <240 )||((ball_y5-10) >240 )||(ball_x5<125)||(ball_x5>195))&&
               (((ball_y5-10) <240 )||((ball_y5-10) >240 )||(ball_x5<205)||(ball_x5>275))&&

               (((ball_y5-10) <110 )||((ball_y5-10) >110 )||(ball_x5<195)||(ball_x5>205))&&

               (((ball_y5-10) <250 )||((ball_y5-10) >250 )||(ball_x5<195)||(ball_x5>205))&&
                flag5==1)
                {
                   ball_y5=ball_y5-10;
                   f15--;
                   score5(f15);
                }

         if(   (((ball_y6-10) <120 )||((ball_y6-10) >120 )||(ball_x6<125)||(ball_x6>255))&&

               (((ball_y6-10) <130 )||((ball_y6-10) >130 )||(ball_x6<135)||(ball_x6>145))&&
               (((ball_y6-10) <130 )||((ball_y6-10) >130 )||(ball_x6<185)||(ball_x6>195))&&
               (((ball_y6-10) <130 )||((ball_y6-10) >130 )||(ball_x6<205)||(ball_x6>215))&&
               (((ball_y6-10) <130 )||((ball_y6-10) >130 )||(ball_x6<225)||(ball_x6>255))&&

               (((ball_y6-10) <140 )||((ball_y6-10) >140 )||(ball_x6<145)||(ball_x6>155))&&
               (((ball_y6-10) <140 )||((ball_y6-10) >140 )||(ball_x6<175)||(ball_x6>185))&&
               (((ball_y6-10) <140 )||((ball_y6-10) >140 )||(ball_x6<195)||(ball_x6>225))&&

               (((ball_y6-10) <150 )||((ball_y6-10) >150 )||(ball_x6<135)||(ball_x6>165))&&
               (((ball_y6-10) <150 )||((ball_y6-10) >150 )||(ball_x6<185)||(ball_x6>195))&&
               (((ball_y6-10) <150 )||((ball_y6-10) >150 )||(ball_x6<205)||(ball_x6>235))&&
               (((ball_y6-10) <150 )||((ball_y6-10) >150 )||(ball_x6<245)||(ball_x6>265))&&

               (((ball_y6-10) <160 )||((ball_y6-10) >160 )||(ball_x6<125)||(ball_x6>135))&&
               (((ball_y6-10) <160 )||((ball_y6-10) >160 )||(ball_x6<155)||(ball_x6>185))&&
               (((ball_y6-10) <160 )||((ball_y6-10) >160 )||(ball_x6<215)||(ball_x6>225))&&
               (((ball_y6-10) <160 )||((ball_y6-10) >160 )||(ball_x6<245)||(ball_x6>255))&&

               (((ball_y6-10) <170 )||((ball_y6-10) >170 )||(ball_x6<155)||(ball_x6>175))&&
               (((ball_y6-10) <170 )||((ball_y6-10) >170 )||(ball_x6<205)||(ball_x6>225))&&
               (((ball_y6-10) <170 )||((ball_y6-10) >170 )||(ball_x6<235)||(ball_x6>245))&&

               (((ball_y6-10) <180 )||((ball_y6-10) >180 )||(ball_x6<195)||(ball_x6>255))&&

               (((ball_y6-10) <190 )||((ball_y6-10) >190 )||(ball_x6<145)||(ball_x6>175))&&
               (((ball_y6-10) <190 )||((ball_y6-10) >190 )||(ball_x6<185)||(ball_x6>215))&&
               (((ball_y6-10) <190 )||((ball_y6-10) >190 )||(ball_x6<245)||(ball_x6>265))&&

               (((ball_y6-10) <200 )||((ball_y6-10) >200 )||(ball_x6<125)||(ball_x6>135))&&
               (((ball_y6-10) <200 )||((ball_y6-10) >200 )||(ball_x6<145)||(ball_x6>175))&&
               (((ball_y6-10) <200 )||((ball_y6-10) >200 )||(ball_x6<195)||(ball_x6>225))&&

               (((ball_y6-10) <210 )||((ball_y6-10) >210 )||(ball_x6<135)||(ball_x6>165))&&
               (((ball_y6-10) <210 )||((ball_y6-10) >210 )||(ball_x6<185)||(ball_x6>255))&&

               (((ball_y6-10) <220 )||((ball_y6-10) >220 )||(ball_x6<135)||(ball_x6>265))&&

               (((ball_y6-10) <110 )||((ball_y6-10) >110 )||(ball_x6<255)||(ball_x6>265))&&

               (((ball_y6-10) <230 )||((ball_y6-10) >230 )||(ball_x6<125)||(ball_x6>135))&&
                (flag6==1))

                {
                   ball_y6=ball_y6-10;
                   f16--;
                   score6(f16);
                }


  }


    //place your codes for other keys here

    if(key == GLUT_KEY_RIGHT)
    {
        if((((ball_x+10) <100 )||((ball_x+10) >100 )||(ball_y<105)||(ball_y>285))&&
                (((ball_x+10) <110 )||((ball_x+10) >110 )||(ball_y<105)||(ball_y>115))&&
                (((ball_x+10) <110 )||((ball_x+10) >110 )||(ball_y<165)||(ball_y>195))&&
                (((ball_x+10) <110 )||((ball_x+10) >110 )||(ball_y<215)||(ball_y>235))&&
                (((ball_x+10) <110 )||((ball_x+10) >110 )||(ball_y<255)||(ball_y>275))&&
                (((ball_x+10) <120 )||((ball_x+10) >120 )||(ball_y<125)||(ball_y>135))&&
                (((ball_x+10) <120 )||((ball_x+10) >120 )||(ball_y<145)||(ball_y>175))&&
                (((ball_x+10) <120 )||((ball_x+10) >120 )||(ball_y<195)||(ball_y>215))&&
                (((ball_x+10) <120 )||((ball_x+10) >120 )||(ball_y<245)||(ball_y>255))&&
                (((ball_x+10) <120 )||((ball_x+10) >120 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x+10) <130 )||((ball_x+10) >130 )||(ball_y<125)||(ball_y>165))&&
                (((ball_x+10) <130 )||((ball_x+10) >130 )||(ball_y<185)||(ball_y>195))&&
                (((ball_x+10) <130 )||((ball_x+10) >130 )||(ball_y<215)||(ball_y>265))&&
                (((ball_x+10) <130 )||((ball_x+10) >130 )||(ball_y<275)||(ball_y>285))&&
                (((ball_x+10) <140 )||((ball_x+10) >140 )||(ball_y<125)||(ball_y>145))&&
                (((ball_x+10) <140 )||((ball_x+10) >140 )||(ball_y<155)||(ball_y>175))&&
                (((ball_x+10) <140 )||((ball_x+10) >140 )||(ball_y<225)||(ball_y>255))&&
                (((ball_x+10) <140 )||((ball_x+10) >140 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x+10) <150 )||((ball_x+10) >150 )||(ball_y<115)||(ball_y>145))&&
                (((ball_x+10) <150 )||((ball_x+10) >150 )||(ball_y<165)||(ball_y>205))&&
                (((ball_x+10) <150 )||((ball_x+10) >150 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x+10) <150 )||((ball_x+10) >150 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x+10) <160 )||((ball_x+10) >160 )||(ball_y<115)||(ball_y>135))&&
                (((ball_x+10) <160 )||((ball_x+10) >160 )||(ball_y<165)||(ball_y>185))&&
                (((ball_x+10) <160 )||((ball_x+10) >160 )||(ball_y<205)||(ball_y>215))&&
                (((ball_x+10) <160 )||((ball_x+10) >160 )||(ball_y<225)||(ball_y>245))&&
                (((ball_x+10) <170 )||((ball_x+10) >170 )||(ball_y<115)||(ball_y>175))&&
                (((ball_x+10) <170 )||((ball_x+10) >170 )||(ball_y<195)||(ball_y>205))&&
                (((ball_x+10) <170 )||((ball_x+10) >170 )||(ball_y<215)||(ball_y>235))&&
                (((ball_x+10) <170 )||((ball_x+10) >170 )||(ball_y<275)||(ball_y>285))&&
                (((ball_x+10) <180 )||((ball_x+10) >180 )||(ball_y<105)||(ball_y>125))&&
                (((ball_x+10) <180 )||((ball_x+10) >180 )||(ball_y<145)||(ball_y>185))&&
                (((ball_x+10) <180 )||((ball_x+10) >180 )||(ball_y<215)||(ball_y>225))&&
                (((ball_x+10) <180 )||((ball_x+10) >180 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x+10) <180 )||((ball_x+10) >180 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x+10) <190 )||((ball_x+10) >190 )||(ball_y<105)||(ball_y>115))&&
                (((ball_x+10) <190 )||((ball_x+10) >190 )||(ball_y<125)||(ball_y>145))&&
                (((ball_x+10) <190 )||((ball_x+10) >190 )||(ball_y<155)||(ball_y>185))&&
                (((ball_x+10) <190 )||((ball_x+10) >190 )||(ball_y<205)||(ball_y>215))&&
                (((ball_x+10) <190 )||((ball_x+10) >190 )||(ball_y<225)||(ball_y>235))&&
                (((ball_x+10) <190 )||((ball_x+10) >190 )||(ball_y<245)||(ball_y>265))&&
                (((ball_x+10) <190 )||((ball_x+10) >190 )||(ball_y<275)||(ball_y>285))&&
                (((ball_x+10) <200 )||((ball_x+10) >200 )||(ball_y<135)||(ball_y>165))&&
                (((ball_x+10) <200 )||((ball_x+10) >200 )||(ball_y<195)||(ball_y>205))&&
                (((ball_x+10) <200 )||((ball_x+10) >200 )||(ball_y<235)||(ball_y>255))&&
                (((ball_x+10) <200 )||((ball_x+10) >200 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x+10) <210 )||((ball_x+10) >210 )||(ball_y<145)||(ball_y>175))&&
                (((ball_x+10) <210 )||((ball_x+10) >210 )||(ball_y<185)||(ball_y>215))&&
                (((ball_x+10) <210 )||((ball_x+10) >210 )||(ball_y<225)||(ball_y>235))&&
                (((ball_x+10) <210 )||((ball_x+10) >210 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x+10) <220 )||((ball_x+10) >220 )||(ball_y<115)||(ball_y>125))&&
                (((ball_x+10) <220 )||((ball_x+10) >220 )||(ball_y<135)||(ball_y>185))&&
                (((ball_x+10) <220 )||((ball_x+10) >220 )||(ball_y<195)||(ball_y>225))&&
                (((ball_x+10) <220 )||((ball_x+10) >220 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x+10) <220 )||((ball_x+10) >220 )||(ball_y<265)||(ball_y>285))&&
                (((ball_x+10) <230 )||((ball_x+10) >230 )||(ball_y<105)||(ball_y>115))&&
                (((ball_x+10) <230 )||((ball_x+10) >230 )||(ball_y<135)||(ball_y>195))&&
                (((ball_x+10) <230 )||((ball_x+10) >230 )||(ball_y<235)||(ball_y>245))&&
                (((ball_x+10) <230 )||((ball_x+10) >230 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x+10) <240 )||((ball_x+10) >240 )||(ball_y<115)||(ball_y>125))&&
                (((ball_x+10) <240 )||((ball_x+10) >240 )||(ball_y<135)||(ball_y>155))&&
                (((ball_x+10) <240 )||((ball_x+10) >240 )||(ball_y<165)||(ball_y>205))&&
                (((ball_x+10) <240 )||((ball_x+10) >240 )||(ball_y<215)||(ball_y>235))&&
                (((ball_x+10) <240 )||((ball_x+10) >240 )||(ball_y<245)||(ball_y>255))&&
                (((ball_x+10) <250 )||((ball_x+10) >250 )||(ball_y<105)||(ball_y>125))&&
                (((ball_x+10) <250 )||((ball_x+10) >250 )||(ball_y<145)||(ball_y>215))&&
                (((ball_x+10) <250 )||((ball_x+10) >250 )||(ball_y<225)||(ball_y>245))&&
                (((ball_x+10) <250 )||((ball_x+10) >250 )||(ball_y<265)||(ball_y>285))&&
                (((ball_x+10) <260 )||((ball_x+10) >260 )||(ball_y<115)||(ball_y>135))&&
                (((ball_x+10) <260 )||((ball_x+10) >260 )||(ball_y<195)||(ball_y>225))&&
                (((ball_x+10) <260 )||((ball_x+10) >260 )||(ball_y<255)||(ball_y>265))&&
                (((ball_x+10) <270 )||((ball_x+10) >270 )||(ball_y<115)||(ball_y>145))&&
                (((ball_x+10) <270 )||((ball_x+10) >270 )||(ball_y<165)||(ball_y>175))&&
                (((ball_x+10) <270 )||((ball_x+10) >270 )||(ball_y<185)||(ball_y>205))&&
                (((ball_x+10) <270 )||((ball_x+10) >270 )||(ball_y<225)||(ball_y>235))&&
                (((ball_x+10) <270 )||((ball_x+10) >270 )||(ball_y<245)||(ball_y>255))&&
                (((ball_x+10) <270 )||((ball_x+10) >270 )||(ball_y<265)||(ball_y>275))&&
                (((ball_x+10) <280 )||((ball_x+10) >280 )||(ball_y<105)||(ball_y>285))&&

                (((ball_x+10) <150 )||((ball_x+10) >150 )||(ball_y<95)||(ball_y>105))&&
                (((ball_x+10) <160 )||((ball_x+10) >160 )||(ball_y<95)||(ball_y>105))&&
                (((ball_x+10) <270 )||((ball_x+10) >270 )||(ball_y<285)||(ball_y>295))&&
                (((ball_x+10) <280 )||((ball_x+10) >280 )||(ball_y<285)||(ball_y>295))&&(flag==1)

          )
        {
            ball_x=ball_x+10;

            f--;

            score(f);

        }
            if((((ball_x1+10) <160 )||((ball_x1+10) >160 )||(ball_y1<155)||(ball_y1>255))&&

               (((ball_x1+10) <170 )||((ball_x1+10) >170 )||(ball_y1<185)||(ball_y1>195))&&
               (((ball_x1+10) <170 )||((ball_x1+10) >170 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1+10) <170 )||((ball_x1+10) >170 )||(ball_y1<235)||(ball_y1>245))&&

               (((ball_x1+10) <180 )||((ball_x1+10) >180 )||(ball_y1<165)||(ball_y1>185))&&
               (((ball_x1+10) <180 )||((ball_x1+10) >180 )||(ball_y1<195)||(ball_y1>215))&&

               (((ball_x1+10) <190 )||((ball_x1+10) >190 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1+10) <190 )||((ball_x1+10) >190 )||(ball_y1<235)||(ball_y1>255))&&

               (((ball_x1+10) <200 )||((ball_x1+10) >200 )||(ball_y1<165)||(ball_y1>175))&&
               (((ball_x1+10) <200 )||((ball_x1+10) >200 )||(ball_y1<185)||(ball_y1>205))&&
               (((ball_x1+10) <200 )||((ball_x1+10) >200 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1+10) <200 )||((ball_x1+10) >200 )||(ball_y1<245)||(ball_y1>255))&&

               (((ball_x1+10) <210 )||((ball_x1+10) >210 )||(ball_y1<155)||(ball_y1>165))&&
               (((ball_x1+10) <210 )||((ball_x1+10) >210 )||(ball_y1<175)||(ball_y1>195))&&
               (((ball_x1+10) <210 )||((ball_x1+10) >210 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1+10) <210 )||((ball_x1+10) >210 )||(ball_y1<205)||(ball_y1>245))&&

               (((ball_x1+10) <220 )||((ball_x1+10) >220 )||(ball_y1<165)||(ball_y1>175))&&
               (((ball_x1+10) <220 )||((ball_x1+10) >220 )||(ball_y1<195)||(ball_y1>205))&&
               (((ball_x1+10) <220 )||((ball_x1+10) >220 )||(ball_y1<245)||(ball_y1>255))&&

               (((ball_x1+10) <230 )||((ball_x1+10) >230 )||(ball_y1<155)||(ball_y1>165))&&
               (((ball_x1+10) <230 )||((ball_x1+10) >230 )||(ball_y1<175)||(ball_y1>195))&&

               (((ball_x1+10) <240 )||((ball_x1+10) >240 )||(ball_y1<195)||(ball_y1>215))&&
               (((ball_x1+10) <240 )||((ball_x1+10) >240 )||(ball_y1<225)||(ball_y1>255))&&

               (((ball_x1+10) <250 )||((ball_x1+10) >250 )||(ball_y1<165)||(ball_y1>175))&&
               (((ball_x1+10) <250 )||((ball_x1+10) >250 )||(ball_y1<195)||(ball_y1>205))&&
               (((ball_x1+10) <250 )||((ball_x1+10) >250 )||(ball_y1<215)||(ball_y1>225))&&
               (((ball_x1+10) <250 )||((ball_x1+10) >250 )||(ball_y1<235)||(ball_y1>245))&&

               (((ball_x1+10) <260 )||((ball_x1+10) >260 )||(ball_y1<155)||(ball_y1>255))&&(flag1==1)

               )

                {
            ball_x1=ball_x1+10;
            f11--;
            score1(f11);
            }

             if((((ball_x2+10) <160 )||((ball_x2+10) >160 )||(ball_y2<165)||(ball_y2>225))&&
                (((ball_x2+10) <160 )||((ball_x2+10) >160 )||(ball_y2<235)||(ball_y2>265))&&
                (((ball_x2+10) <170 )||((ball_x2+10) >170 )||(ball_y2<185)||(ball_y2>255))&&
                (((ball_x2+10) <180 )||((ball_x2+10) >180 )||(ball_y2<175)||(ball_y2>195))&&
                (((ball_x2+10) <180 )||((ball_x2+10) >180 )||(ball_y2<205)||(ball_y2>245))&&
                (((ball_x2+10) <190 )||((ball_x2+10) >190 )||(ball_y2<195)||(ball_y2>215))&&
                (((ball_x2+10) <190 )||((ball_x2+10) >190 )||(ball_y2<225)||(ball_y2>235))&&
                (((ball_x2+10) <190 )||((ball_x2+10) >190 )||(ball_y2<245)||(ball_y2>265))&&
                (((ball_x2+10) <200 )||((ball_x2+10) >200 )||(ball_y2<215)||(ball_y2>225))&&
                (((ball_x2+10) <210 )||((ball_x2+10) >210 )||(ball_y2<205)||(ball_y2>225))&&
                (((ball_x2+10) <210 )||((ball_x2+10) >210 )||(ball_y2<255)||(ball_y2>265))&&
                (((ball_x2+10) <220 )||((ball_x2+10) >220 )||(ball_y2<195)||(ball_y2>215))&&
                (((ball_x2+10) <230 )||((ball_x2+10) >230 )||(ball_y2<185)||(ball_y2>225))&&
                (((ball_x2+10) <230 )||((ball_x2+10) >230 )||(ball_y2<245)||(ball_y2>255))&&
                (((ball_x2+10) <240 )||((ball_x2+10) >240 )||(ball_y2<175)||(ball_y2>245))&&
                (((ball_x2+10) <250 )||((ball_x2+10) >250 )||(ball_y2<195)||(ball_y2>255))&&
                (((ball_x2+10) <260 )||((ball_x2+10) >260 )||(ball_y2<165)||(ball_y2>245))&&
                (((ball_x2+10) <260 )||((ball_x2+10) >260 )||(ball_y2<255)||(ball_y2>265))&&(flag2==1)


          )
        {
            ball_x2=ball_x2+10;

            f12--;

            score2(f12);
        }

        if((((ball_x3+10) <160 )||((ball_x3+10) >160 )||(ball_y3<165)||(ball_y3>275))&&
            (((ball_x3+10) <180 )||((ball_x3+10) >180 )||(ball_y3<165)||(ball_y3>175))&&//middle
                (((ball_x3+10) <170 )||((ball_x3+10) >170 )||(ball_y3<175)||(ball_y3>185))&&
                (((ball_x3+10) <170 )||((ball_x3+10) >170 )||(ball_y3<195)||(ball_y3>215))&&
                (((ball_x3+10) <170 )||((ball_x3+10) >170 )||(ball_y3<225)||(ball_y3>235))&&
                (((ball_x3+10) <170 )||((ball_x3+10) >170 )||(ball_y3<255)||(ball_y3>265))&&
                (((ball_x3+10) <180 )||((ball_x3+10) >180 )||(ball_y3<165)||(ball_y3>175))&&
                (((ball_x3+10) <180 )||((ball_x3+10) >180 )||(ball_y3<185)||(ball_y3>195))&&
                (((ball_x3+10) <180 )||((ball_x3+10) >180 )||(ball_y3<215)||(ball_y3>235))&&
                (((ball_x3+10) <190 )||((ball_x3+10) >190 )||(ball_y3<175)||(ball_y3>255))&&
                (((ball_x3+10) <200 )||((ball_x3+10) >200 )||(ball_y3<175)||(ball_y3>185))&&
                (((ball_x3+10) <200 )||((ball_x3+10) >200 )||(ball_y3<195)||(ball_y3>205))&&
                (((ball_x3+10) <200 )||((ball_x3+10) >200 )||(ball_y3<225)||(ball_y3>265))&&
                (((ball_x3+10) <210 )||((ball_x3+10) >210 )||(ball_y3<165)||(ball_y3>195))&&
                (((ball_x3+10) <220 )||((ball_x3+10) >220 )||(ball_y3<185)||(ball_y3>195))&&
                (((ball_x3+10) <220 )||((ball_x3+10) >220 )||(ball_y3<205)||(ball_y3>235))&&
                (((ball_x3+10) <220 )||((ball_x3+10) >220 )||(ball_y3<255)||(ball_y3>265))&&
                (((ball_x3+10) <230 )||((ball_x3+10) >230 )||(ball_y3<175)||(ball_y3>225))&&
                (((ball_x3+10) <230 )||((ball_x3+10) >230 )||(ball_y3<235)||(ball_y3>255))&&
                (((ball_x3+10) <240 )||((ball_x3+10) >240 )||(ball_y3<225)||(ball_y3>235))&&
                (((ball_x3+10) <240 )||((ball_x3+10) >240 )||(ball_y3<255)||(ball_y3>265))&&
                (((ball_x3+10) <250 )||((ball_x3+10) >250 )||(ball_y3<165)||(ball_y3>275))&&(flag3==1)
          )

        {
            ball_x3=ball_x3+10;

            f13--;

            score3(f13);
        }

         if((((ball_x4+10) <160 )||((ball_x4+10) >160 )||(ball_y4<175)||(ball_y4>295))&&
                (((ball_x4+10) <170 )||((ball_x4+10) >170 )||(ball_y4<185)||(ball_y4>195))&&
                (((ball_x4+10) <170 )||((ball_x4+10) >170 )||(ball_y4<205)||(ball_y4>225))&&
                (((ball_x4+10) <170 )||((ball_x4+10) >170 )||(ball_y4<235)||(ball_y4>255))&&
                (((ball_x4+10) <170 )||((ball_x4+10) >170 )||(ball_y4<275)||(ball_y4>285))&&
                (((ball_x4+10) <180 )||((ball_x4+10) >180 )||(ball_y4<175)||(ball_y4>185))&&
                (((ball_x4+10) <180 )||((ball_x4+10) >180 )||(ball_y4<195)||(ball_y4>205))&&
                (((ball_x4+10) <180 )||((ball_x4+10) >180 )||(ball_y4<225)||(ball_y4>235))&&
                (((ball_x4+10) <180 )||((ball_x4+10) >180 )||(ball_y4<265)||(ball_y4>295))&&
                (((ball_x4+10) <190 )||((ball_x4+10) >190 )||(ball_y4<205)||(ball_y4>235))&&
                (((ball_x4+10) <190 )||((ball_x4+10) >190 )||(ball_y4<255)||(ball_y4>265))&&
                (((ball_x4+10) <190 )||((ball_x4+10) >190 )||(ball_y4<275)||(ball_y4>285))&&
                (((ball_x4+10) <200 )||((ball_x4+10) >200 )||(ball_y4<175)||(ball_y4>195))&&
                (((ball_x4+10) <200 )||((ball_x4+10) >200 )||(ball_y4<215)||(ball_y4>255))&&
                (((ball_x4+10) <200 )||((ball_x4+10) >200 )||(ball_y4<275)||(ball_y4>295))&&
                (((ball_x4+10) <210 )||((ball_x4+10) >210 )||(ball_y4<175)||(ball_y4>215))&&
                (((ball_x4+10) <210 )||((ball_x4+10) >210 )||(ball_y4<245)||(ball_y4>255))&&
                (((ball_x4+10) <210 )||((ball_x4+10) >210 )||(ball_y4<265)||(ball_y4>275))&&
                (((ball_x4+10) <210 )||((ball_x4+10) >210 )||(ball_y4<285)||(ball_y4>295))&&
                (((ball_x4+10) <220 )||((ball_x4+10) >220 )||(ball_y4<175)||(ball_y4>185))&&
                (((ball_x4+10) <220 )||((ball_x4+10) >220 )||(ball_y4<205)||(ball_y4>215))&&
                (((ball_x4+10) <220 )||((ball_x4+10) >220 )||(ball_y4<235)||(ball_y4>245))&&
                (((ball_x4+10) <220 )||((ball_x4+10) >220 )||(ball_y4<255)||(ball_y4>265))&&
                (((ball_x4+10) <220 )||((ball_x4+10) >220 )||(ball_y4<275)||(ball_y4>285))&&
                (((ball_x4+10) <230 )||((ball_x4+10) >230 )||(ball_y4<185)||(ball_y4>205))&&
                (((ball_x4+10) <230 )||((ball_x4+10) >230 )||(ball_y4<215)||(ball_y4>225))&&
                (((ball_x4+10) <230 )||((ball_x4+10) >230 )||(ball_y4<245)||(ball_y4>255))&&
                (((ball_x4+10) <240 )||((ball_x4+10) >240 )||(ball_y4<165)||(ball_y4>185))&&
                (((ball_x4+10) <240 )||((ball_x4+10) >240 )||(ball_y4<205)||(ball_y4>215))&&
                (((ball_x4+10) <240 )||((ball_x4+10) >240 )||(ball_y4<245)||(ball_y4>275))&&
                (((ball_x4+10) <250 )||((ball_x4+10) >250 )||(ball_y4<165)||(ball_y4>295)) &&(flag4==1)
          )
        {
            ball_x4=ball_x4+10;

            f14--;
            score4(f14);
        }

           if( (((ball_x5+10) <130 )||((ball_x5+10) >130 )||(ball_y5<125)||(ball_y5>245))&&

              (((ball_x5+10) <140 )||((ball_x5+10) >140 )||(ball_y5<135)||(ball_y5>145))&&
              (((ball_x5+10) <140 )||((ball_x5+10) >140 )||(ball_y5<175)||(ball_y5>215))&&
              (((ball_x5+10) <140 )||((ball_x5+10) >140 )||(ball_y5<225)||(ball_y5>235))&&

              (((ball_x5+10) <150 )||((ball_x5+10) >150 )||(ball_y5<125)||(ball_y5>135))&&
              (((ball_x5+10) <150 )||((ball_x5+10) >150 )||(ball_y5<145)||(ball_y5>165))&&
              (((ball_x5+10) <150 )||((ball_x5+10) >150 )||(ball_y5<195)||(ball_y5>205))&&
              (((ball_x5+10) <150 )||((ball_x5+10) >150 )||(ball_y5<215)||(ball_y5>225))&&
              (((ball_x5+10) <150 )||((ball_x5+10) >150 )||(ball_y5<235)||(ball_y5>245))&&


              (((ball_x5+10) <160 )||((ball_x5+10) >160 )||(ball_y5<135)||(ball_y5>145))&&
              (((ball_x5+10) <160 )||((ball_x5+10) >160 )||(ball_y5<175)||(ball_y5>185))&&
              (((ball_x5+10) <160 )||((ball_x5+10) >160 )||(ball_y5<205)||(ball_y5>215))&&
              (((ball_x5+10) <160 )||((ball_x5+10) >160 )||(ball_y5<225)||(ball_y5>235))&&


              (((ball_x5+10) <170 )||((ball_x5+10) >170 )||(ball_y5<145)||(ball_y5>155))&&
              (((ball_x5+10) <170 )||((ball_x5+10) >170 )||(ball_y5<165)||(ball_y5>175))&&
              (((ball_x5+10) <170 )||((ball_x5+10) >170 )||(ball_y5<185)||(ball_y5>195))&&
              (((ball_x5+10) <170 )||((ball_x5+10) >170 )||(ball_y5<205)||(ball_y5>245))&&


              (((ball_x5+10) <180 )||((ball_x5+10) >180 )||(ball_y5<135)||(ball_y5>175))&&
              (((ball_x5+10) <180 )||((ball_x5+10) >180 )||(ball_y5<195)||(ball_y5>225))&&
              (((ball_x5+10) <180 )||((ball_x5+10) >180 )||(ball_y5<235)||(ball_y5>245))&&

              (((ball_x5+10) <190 )||((ball_x5+10) >190 )||(ball_y5<125)||(ball_y5>165))&&
              (((ball_x5+10) <190 )||((ball_x5+10) >190 )||(ball_y5<175)||(ball_y5>185))&&
              (((ball_x5+10) <190 )||((ball_x5+10) >190 )||(ball_y5<195)||(ball_y5>225))&&
              (((ball_x5+10) <190 )||((ball_x5+10) >190 )||(ball_y5<235)||(ball_y5>245))&&


              (((ball_x5+10) <200 )||((ball_x5+10) >200 )||(ball_y5<135)||(ball_y5>155))&&
              (((ball_x5+10) <200 )||((ball_x5+10) >200 )||(ball_y5<185)||(ball_y5>205))&&
              (((ball_x5+10) <200 )||((ball_x5+10) >200 )||(ball_y5<225)||(ball_y5>235))&&


              (((ball_x5+10) <210 )||((ball_x5+10) >210 )||(ball_y5<125)||(ball_y5>135))&&
              (((ball_x5+10) <210 )||((ball_x5+10) >210 )||(ball_y5<145)||(ball_y5>155))&&
              (((ball_x5+10) <210 )||((ball_x5+10) >210 )||(ball_y5<165)||(ball_y5>185))&&
              (((ball_x5+10) <210 )||((ball_x5+10) >210 )||(ball_y5<195)||(ball_y5>205))&&
              (((ball_x5+10) <210 )||((ball_x5+10) >210 )||(ball_y5<215)||(ball_y5>245))&&

              (((ball_x5+10) <220 )||((ball_x5+10) >220 )||(ball_y5<135)||(ball_y5>195))&&
              (((ball_x5+10) <220 )||((ball_x5+10) >220 )||(ball_y5<225)||(ball_y5>235))&&

              (((ball_x5+10) <230 )||((ball_x5+10) >230 )||(ball_y5<125)||(ball_y5>135))&&
              (((ball_x5+10) <230 )||((ball_x5+10) >230 )||(ball_y5<155)||(ball_y5>175))&&
              (((ball_x5+10) <230 )||((ball_x5+10) >230 )||(ball_y5<195)||(ball_y5>215))&&
              (((ball_x5+10) <230 )||((ball_x5+10) >230 )||(ball_y5<225)||(ball_y5>235))&&

              (((ball_x5+10) <240 )||((ball_x5+10) >240 )||(ball_y5<125)||(ball_y5>145))&&
              (((ball_x5+10) <240 )||((ball_x5+10) >240 )||(ball_y5<155)||(ball_y5>165))&&
              (((ball_x5+10) <240 )||((ball_x5+10) >240 )||(ball_y5<175)||(ball_y5>195))&&
              (((ball_x5+10) <240 )||((ball_x5+10) >240 )||(ball_y5<235)||(ball_y5>245))&&

              (((ball_x5+10) <250 )||((ball_x5+10) >250 )||(ball_y5<145)||(ball_y5>175))&&
              (((ball_x5+10) <250 )||((ball_x5+10) >250 )||(ball_y5<185)||(ball_y5>225))&&
              (((ball_x5+10) <250 )||((ball_x5+10) >250 )||(ball_y5<235)||(ball_y5>245))&&

              (((ball_x5+10) <260 )||((ball_x5+10) >260 )||(ball_y5<145)||(ball_y5>155))&&
              (((ball_x5+10) <260 )||((ball_x5+10) >260 )||(ball_y5<165)||(ball_y5>195))&&


              (((ball_x5+10) <270 )||((ball_x5+10) >270 )||(ball_y5<135)||(ball_y5>165))&&
              (((ball_x5+10) <270 )||((ball_x5+10) >270 )||(ball_y5<175)||(ball_y5>195))&&
              (((ball_x5+10) <270 )||((ball_x5+10) >270 )||(ball_y5<225)||(ball_y5>245))&&

              (((ball_x5+10) <280 )||((ball_x5+10) >280 )||(ball_y5<125)||(ball_y5>245))&&

              (((ball_x5+10) <200 )||((ball_x5+10) >200 )||(ball_y5<115)||(ball_y5>125))&&
              (((ball_x5+10) <200 )||((ball_x5+10) >200 )||(ball_y5<245)||(ball_y5>255))&&
              (((ball_x5+10) <210 )||((ball_x5+10) >210 )||(ball_y5<115)||(ball_y5>125))&&
              (((ball_x5+10) <210 )||((ball_x5+10) >210 )||(ball_y5<245)||(ball_y5>255))&&(flag5==1)
 )
               {
            ball_x5=ball_x5+10;
            f15--;
            score5(f15);
            }

            if((((ball_x6+10) <130 )||((ball_x6+10) >130 )||(ball_y6<125)||(ball_y6>225))&&

               (((ball_x6+10) <140 )||((ball_x6+10) >140 )||(ball_y6<135)||(ball_y6>165))&&
               (((ball_x6+10) <140 )||((ball_x6+10) >140 )||(ball_y6<175)||(ball_y6>215))&&

               (((ball_x6+10) <150 )||((ball_x6+10) >150 )||(ball_y6<165)||(ball_y6>205))&&

               (((ball_x6+10) <160 )||((ball_x6+10) >160 )||(ball_y6<125)||(ball_y6>145))&&
               (((ball_x6+10) <160 )||((ball_x6+10) >160 )||(ball_y6<165)||(ball_y6>185))&&

               (((ball_x6+10) <170 )||((ball_x6+10) >170 )||(ball_y6<135)||(ball_y6>165))&&
               (((ball_x6+10) <170 )||((ball_x6+10) >170 )||(ball_y6<185)||(ball_y6>195))&&

               (((ball_x6+10) <180 )||((ball_x6+10) >180 )||(ball_y6<125)||(ball_y6>155))&&
               (((ball_x6+10) <180 )||((ball_x6+10) >180 )||(ball_y6<175)||(ball_y6>185))&&
               (((ball_x6+10) <180 )||((ball_x6+10) >180 )||(ball_y6<205)||(ball_y6>225))&&

               (((ball_x6+10) <190 )||((ball_x6+10) >190 )||(ball_y6<135)||(ball_y6>145))&&
               (((ball_x6+10) <190 )||((ball_x6+10) >190 )||(ball_y6<155)||(ball_y6>215))&&

               (((ball_x6+10) <200 )||((ball_x6+10) >200 )||(ball_y6<145)||(ball_y6>155))&&
               (((ball_x6+10) <200 )||((ball_x6+10) >200 )||(ball_y6<165)||(ball_y6>185))&&
               (((ball_x6+10) <200 )||((ball_x6+10) >200 )||(ball_y6<205)||(ball_y6>215))&&

               (((ball_x6+10) <210 )||((ball_x6+10) >210 )||(ball_y6<155)||(ball_y6>175))&&

               (((ball_x6+10) <220 )||((ball_x6+10) >220 )||(ball_y6<135)||(ball_y6>145))&&

               (((ball_x6+10) <230 )||((ball_x6+10) >230 )||(ball_y6<165)||(ball_y6>205))&&

               (((ball_x6+10) <240 )||((ball_x6+10) >240 )||(ball_y6<135)||(ball_y6>175))&&
               (((ball_x6+10) <240 )||((ball_x6+10) >240 )||(ball_y6<195)||(ball_y6>215))&&

               (((ball_x6+10) <250 )||((ball_x6+10) >250 )||(ball_y6<145)||(ball_y6>155))&&
               (((ball_x6+10) <250 )||((ball_x6+10) >250 )||(ball_y6<195)||(ball_y6>205))&&

               (((ball_x6+10) <260 )||((ball_x6+10) >260 )||(ball_y6<135)||(ball_y6>145))&&
               (((ball_x6+10) <260 )||((ball_x6+10) >260 )||(ball_y6<165)||(ball_y6>185))&&
               (((ball_x6+10) <260 )||((ball_x6+10) >260 )||(ball_y6<205)||(ball_y6>215))&&

               (((ball_x6+10) <270 )||((ball_x6+10) >270 )||(ball_y6<125)||(ball_y6>225))&&

               (((ball_x6+10) <260 )||((ball_x6+10) >260 )||(ball_y6<115)||(ball_y6>125))&&
               (((ball_x6+10) <270 )||((ball_x6+10) >270 )||(ball_y6<115)||(ball_y6>125))&&

               (((ball_x6+10) <130 )||((ball_x6+10) >130 )||(ball_y6<225)||(ball_y6>235))&&
               (((ball_x6+10) <140 )||((ball_x6+10) >140 )||(ball_y6<225)||(ball_y6>235))&&
               (flag6==1)
               )
               {
                ball_x6=ball_x6+10;
                f16--;
                score6(f16);
               }



    }




    if(key == GLUT_KEY_END)
    {
        exit(0);
    }
}

void ballChange()
{
    ball_x += dx;
    ball_y += dy;
    if(ball_x > 400 || ball_x < 0)dx = -dx;
    if(ball_y > 400 || ball_y < 0)dy = -dy;
}
void ballboundary()
{
    if(ball_x < 50 || ball_x < 0) iPauseTimer(1);
    if(ball_y > 400 || ball_y < 0)dy = -dy;
}


int main()
{
    //place your own initialization codes here.

    iSetTimer(10000000, ballChange);
    iSetTimer(1,ballboundary);
    dx = 5;
    dy = 7;


    iInitialize(400, 400, "Ball Demo");

    return 0;
}


