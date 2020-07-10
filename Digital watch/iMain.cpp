#include <stdio.h>
#include <time.h>
# include "iGraphics.h"

int x = 300, y = 300, r = 20;
void gettime(int t[]);
/*
	function iDraw() is called again and again by the system.

	*/

void iDraw()
{
    //place your drawing codes here
    int i;
    int x,y,z,a,b,c,d,p,q;
    int t[3] = {};
    gettime(t);
    printf("%d %d %d\n", t[0], t[1], t[2]);

    x=t[0];
    y=t[1];
    z=t[2];
    a=x/10;
    b=x%10;
    c=y/10;
    d=y%10;
    p=z/10;
    q=z%10;
    iClear();

    iSetColor(20, 200, 200);
    i=0;


    if(a==2||a==3||a==5||a==6||a==8||a==9)
        iFilledRectangle(20+i, 30, 20, 10);//2,3,5,6,8,9
    if(a==2||a==6||a==8)
        iFilledRectangle(10+i, 40, 10, 20);//2,6,8
    if(a==2||a==3||a==4||a==5||a==6||a==8||a==9) //
        iFilledRectangle(20+i, 60, 20, 10);//2,3,4,5,6,8,9
    if(a==1||a==3||a==4||
            a==5||a==6||a==7||a==8||a==9)
        iFilledRectangle(40+i, 40, 10, 20);//1,3,4,5,6,7,8,9
    if(a==1||a==2||a==3||a==4||a==7||a==8||a==9)
        iFilledRectangle(40+i, 70, 10, 20);//1,2,3,4,7,,8,9
    if(a==4||a==5||a==6||a==8||a==9)
        iFilledRectangle(10+i, 70, 10, 20);//4,5,6,8,9
    if(a==2||a==3||a==5||a==6||a==7||a==8||a==9 )
        iFilledRectangle(20+i, 90, 20, 10);//2,3,5,6,7,8,9
    i+=50;
    //for b
    if(b==2||b==3||b==5||b==6||b==8||b==9||b==0)
        iFilledRectangle(20+i, 30, 20, 10);//2,3,5,6,8,9
    if(b==2||b==6||b==8||b==0)

        iFilledRectangle(10+i, 40, 10, 20);//2,6,8
    if(b==2||b==3||b==4||b==5||b==6||b==8||b==9)
        iFilledRectangle(20+i, 60, 20, 10);//2,3,4,5,6,8,9
    if(b==1||b==3||b==4||b==5||b==6||b==7||b==8||b==9||b==0)
        iFilledRectangle(40+i, 40, 10, 20);//1,3,4,5,6,7,8,9
    if(b==1||b==2||b==3||b==4||b==7||b==8||b==9||b==0)
        iFilledRectangle(40+i, 70, 10, 20);//1,2,3,4,7,,8,9
    if(b==4||b==5||b==6||b==8||b==9||b==0)
        iFilledRectangle(10+i, 70, 10, 20);//4,5,6,8,9
    if(b==2||b==3||b==5||b==6||b==7||b==8||b==9||b==0)
        iFilledRectangle(20+i, 90, 20, 10);

    i+=70;
    iFilledRectangle(110, 30, 8, 8);
    iFilledRectangle(110, 60, 8, 8);
    //for c
    if(c==2||c==3||c==5||c==6||c==8||c==9||c==0)
        iFilledRectangle(20+i, 30, 20, 10);//2,3,5,6,8,9
    if(c==2||c==6||c==8||c==0)

        iFilledRectangle(10+i, 40, 10, 20);//2,6,8
    if(c==2||c==3||c==4||c==5||c==6||c==8||c==9)//0
        iFilledRectangle(20+i, 60, 20, 10);//2,3,4,5,6,8,9
    if(c==1||c==3||c==4||c==5||c==6||c==7||c==8||c==9||c==0)
        iFilledRectangle(40+i, 40, 10, 20);//1,3,4,5,6,7,8,9
    if(c==1||c==2||c==3||c==4||c==7||c==8||c==9||c==0)
        iFilledRectangle(40+i, 70, 10, 20);//1,2,3,4,7,,8,9
    if(c==4||c==5||c==6||c==8||c==9||c==0)
        iFilledRectangle(10+i, 70, 10, 20);//4,5,6,8,9
    if(c==2||c==3||c==5||c==6||c==7||c==8||c==9||c==0)
        iFilledRectangle(20+i, 90, 20, 10);
    i+=50;
//for d

    if(d==2||d==3||d==5||d==6||d==8||d==9||d==0)
        iFilledRectangle(20+i, 30, 20, 10);//2,3,5,6,8,9
    if(d==2||d==6||d==8||d==0)

        iFilledRectangle(10+i, 40, 10, 20);//2,6,8
    if(d==2||d==3||d==4||d==5||d==6||d==8||d==9)
        iFilledRectangle(20+i, 60, 20, 10);//2,3,4,5,6,8,9
    if(d==1||d==3||d==4||d==5||d==6||d==7||d==8||d==9||d==0)
        iFilledRectangle(40+i, 40, 10, 20);//1,3,4,5,6,7,8,9
    if(d==1||d==2||d==3||d==4||d==7||d==8||d==9||d==0)
        iFilledRectangle(40+i, 70, 10, 20);//1,2,3,4,7,,8,9
    if(d==4||d==5||d==6||d==8||d==9||d==0)
        iFilledRectangle(10+i, 70, 10, 20);//4,5,6,8,9
    if(d==2||d==3||d==5||d==6||d==7||d==8||d==9||d==0)
        iFilledRectangle(20+i, 90, 20, 10);
    i+=70;
    iFilledRectangle(230, 60, 8, 8);
    iFilledRectangle(230, 30, 8, 8);
    //for p
    if(p==2||p==3||p==5||p==6||p==8||p==9||p==0)
        iFilledRectangle(20+i, 30, 20, 10);//2,3,5,6,8,9
    if(p==2||p==6||p==8||p==0)

        iFilledRectangle(10+i, 40, 10, 20);//2,6,8
    if(p==2||p==3||p==4||p==5||p==6||p==8||p==9)//0
        iFilledRectangle(20+i, 60, 20, 10);//2,3,4,5,6,8,9
    if(p==1||p==3||p==4||p==5||p==6||p==7||p==8||p==9||p==0)
        iFilledRectangle(40+i, 40, 10, 20);//1,3,4,5,6,7,8,9
    if(p==1||p==2||p==3||p==4||p==7||p==8||p==9||p==0)
        iFilledRectangle(40+i, 70, 10, 20);//1,2,3,4,7,,8,9
    if(p==4||p==5||p==6||p==8||p==9||p==0)
        iFilledRectangle(10+i, 70, 10, 20);//4,5,6,8,9
    if(p==2||p==3||p==5||p==6||p==7||p==8||p==9||p==0)
        iFilledRectangle(20+i, 90, 20, 10);
    i+=50;
    //for q
    if(q==2||q==3||q==5||q==6||q==8||q==9||q==0)
        iFilledRectangle(20+i, 30, 20, 10);//2,3,5,6,8,9
    if(q==2||q==6||q==8||q==0)

        iFilledRectangle(10+i, 40, 10, 20);//2,6,8
    if(q==2||q==3||q==4||q==5||q==6||q==8||q==9)//0
        iFilledRectangle(20+i, 60, 20, 10);//2,3,4,5,6,8,9
    if(q==1||q==3||q==4||q==5||q==6||q==7||q==8||q==9||q==0)
        iFilledRectangle(40+i, 40, 10, 20);//1,3,4,5,6,7,8,9
    if(q==1||q==2||q==3||q==4||q==7||q==8||q==9||q==0)
        iFilledRectangle(40+i, 70, 10, 20);//1,2,3,4,7,,8,9
    if(q==4||q==5||q==6||q==8||q==9||q==0)
        iFilledRectangle(10+i, 70, 10, 20);//4,5,6,8,9
    if(q==2||q==3||q==5||q==6||q==7||q==8||q==9||q==0)
        iFilledRectangle(20+i, 90, 20, 10);


//

    //iSetColor(20, 200, 0);
    //iText(40, 40, "Hi, I am iGraphics");
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);
    //place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
        //	printf("x = %d, y= %d\n",mx,my);
        x += 10;
        y += 10;
    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
        x -= 10;
        y -= 10;
    }
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
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

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
    //place your codes for other keys here
}


void gettime(int t[])
{
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
}

int main()
{

    iInitialize(380, 150, "demo"); // hour, minute, second
    return 0;

}


