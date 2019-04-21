
# include "menuandplayer.h"
# include "structures.h";
# include "tiles.h";

int mode,len;
char str1[20],str2[20]; 
int image5;
int image6;
int image7;
int image9;
int image10;
int image11;
int image12;
int imageScore;
char score_2[20];
int score1;
int flag=0;

bool isInjured = false;
//bool isInjured1 = false;
//bool isInjured2 = false;
bool PageChange=false;
enum pages{main_menu,enter_name,score,help};

void healthbar()
{
	iSetColor(255,0,0);
	iRectangle(800,550,150,30);
	iFilledRectangle(800,550,dx,30);
}
void playerlife()
{
	if((bx1>=px1+80 && bx1<=px1+180) && (by1>=py1 && by1<=py1+180))
	{
		if(isInjured==false)
		{
			life=life-1;
			dx=dx-50;
			isInjured = true;
		}
		
	}
	else 
		isInjured = false;

	/*if((dx1>=px1+80 && dx1<=px1+180) && (dy1>=py1 && dy1<=py1+180))
	{
		if(isInjured1==false)
		{
			life=life-1;
			dx=dx-50;
			isInjured1 = true;
		}
		
	}
	else 
		isInjured1 = false;

	if((ex1>=px1+80 && ex1<=px1+180) && (ey1>=py1 && ey1<=py1+180))
	{
		if(isInjured2==false)
		{
			life=life-1;
			dx=dx-50;
			isInjured2 = true;
		}
		
	}
	else 
		isInjured2 = false;*/

	if(life==0 )
		i=6;
	
}
void level()
{
	if(py1>=580)
	{
		i=7;
		py1=200;
	}
}

void playermovement1()
{
	tilesSpeed1 = 6;
	tilesSpeed2 = 8;
	tilesSpeed3 = 7;
	tilesSpeed4 = 8;
	ballSpeed = 20;
	playermovement();
	tilesmovement();

}
	
void iDraw()
{
	
	
	//if(i==0)   //main menu
	if(i==main_menu){   //main menu
			
	Menu(i);
	PageChange=false;
	}
	 //if(i==1)  //enter name
	if(i==enter_name){  //enter name
			
	PlayerName(i);
	PageChange=0;
	}
	 //if(i==2) //score
	if(i==score)

	 { 
		 flag1=1;
		 PageChange=false;
		iSetColor(255,210,0);
		iFilledRectangle(0,0,1000,600);
		iSetColor(200,100,100);
	    iFilledRectangle(40,550,100,35);
	    iSetColor(255,255,255);
		iText(65,558,"Back ",GLUT_BITMAP_HELVETICA_18);
		
		  iSetColor(0,0,0);
		  iText(400,300,"Score",GLUT_BITMAP_TIMES_ROMAN_24);
		  iText(500,300,score_1,GLUT_BITMAP_TIMES_ROMAN_24);

     }
	 //if(i==3) //help
	if(i==help) 
	 {   PageChange=false;
		 image2 = iLoadImage("images//score.png");
		 iShowImage(0,0,1000,600,image2);
		 iSetColor(100,100,100);
	     iFilledRectangle(40,550,100,35);
	     iSetColor(255,255,255);
		 iText(65,558,"Back ",GLUT_BITMAP_HELVETICA_18);	
	 }
	 if(i==4 && flag==0)  //game
		 //if(i==gameplay)  
	 {
		 PageChange=true;
		
		 image3 = iLoadImage("images//plnWall.png");
		 iShowImage(0,0,1000,600,image3);
		 iSetColor(100,100,100);
	     iFilledRectangle(40,550,100,35);
	     iSetColor(255,255,255);
		 iText(65,558,"Back ",GLUT_BITMAP_HELVETICA_18);
		 iSetColor(255,255,255);
		 iText(65,530,"LEVEL",GLUT_BITMAP_HELVETICA_18);
		 iText(88,510,"1",GLUT_BITMAP_HELVETICA_18);
		 tiles a(40,150,image11);
		 iShowImage(tx1,ty1,a.length,a.height,a.image);
		 iShowImage(tx2,ty2,a.length,a.height,a.image);
		 iShowImage(tx3,ty3,a.length,a.height,a.image);
		 iShowImage(tx4,ty4,a.length,a.height,a.image);
		 ghost b(170,180,iLoadImage("images//villain.png"));
		 iShowImage(0,270,b.length,b.height,b.image);
		 iSetColor(25,200,25);
		 iFilledCircle(bx1,by1,10,100);
		 player c(180,180,image5);
		 iShowImage(px1,py1,c.length,c.height,c.image);
		 image10 = iLoadImage("images//fire.jpg");
		 iShowImage(0,0,1000,50,image10);
		 
		 tilesmovement();
		 if(PageChange==true ){
		 playermovement();
		 
		 playerlife();
		 level();
		 healthbar();
		 }
		 // iText(530,580,"Score",GLUT_BITMAP_TIMES_ROMAN_24);
		  //iText(600,580,score_1,GLUT_BITMAP_TIMES_ROMAN_24);
		 
	
	    }
		 if(i==7 && flag==0){
			 PageChange=true;
		 image7 = iLoadImage("images//brickLevel2.png");
		 iShowImage(0,0,1000,600,image7);     
		 iSetColor(255,255,255);
		 iText(65,555,"LEVEL",GLUT_BITMAP_HELVETICA_18);
		 iText(88,535,"2",GLUT_BITMAP_HELVETICA_18);
		 tiles a(40,150,image11);
		 iShowImage(tx1,ty1,a.length,a.height,a.image);
		 iShowImage(tx2,ty2,a.length,a.height,a.image);
		 iShowImage(tx3,ty3,a.length,a.height,a.image);
		 iShowImage(tx4,ty4,a.length,a.height,a.image);
		 ghost b(170,180,iLoadImage("images//villain.png"));
		 iShowImage(0,270,b.length,b.height,b.image);
		 iSetColor(25,200,25);
		 iFilledCircle(bx1,by1,10,100);
		 player c(180,180,image5);
		 iShowImage(px1,py1,c.length,c.height,c.image);
		 image10 = iLoadImage("images//fire.jpg");
		 iShowImage(0,0,1000,50,image10);
		 
		 if(PageChange==true){
	     playermovement1();
		 healthbar();
		 
		 playerlife();
		 if(py1>580)
		 {
		 i=9;
		 py1=200;
		 }
		 }
		 
		 } 
		 if(i==6)
		 {
			    image6=iLoadImage("images//gameOver2.png");
		        iShowImage(0,0,1000,600,image6);
				iSetColor(100,100,100);
	            iFilledRectangle(40,550,100,35);
	            iSetColor(255,255,255);
		        iText(65,558,"Score",GLUT_BITMAP_HELVETICA_18);
		 }


		 if(i==9 && flag==0)
		 {  
			
			 PageChange=true;
			image9 = iLoadImage("images//fwall.jpg");
		 iShowImage(0,0,1000,600,image9);     
		 iSetColor(255,255,255);
		 iText(65,555,"LEVEL",GLUT_BITMAP_HELVETICA_18);
		 iText(88,535,"3",GLUT_BITMAP_HELVETICA_18);
		 tiles a(40,150,iLoadImage("images//brick.png"));
		 iShowImage(tx1,ty1,a.length,a.height,a.image);
		 iShowImage(tx2,ty2,a.length,a.height,a.image);
		 iShowImage(tx3,ty3,a.length,a.height,a.image);
		 iShowImage(tx4,ty4,a.length,a.height,a.image);
		 ghost b(170,180,iLoadImage("images//villain.png"));
		 iShowImage(0,270,b.length,b.height,b.image);
		 iSetColor(25,200,25);
		 iFilledCircle(bx1,by1,10,100);
		// ghost b(170,180,iLoadImage("images//villain.png"));
		// iShowImage(0,140,b.length,b.height,b.image);
		 //ghost f(170,180,iLoadImage("images//lsvillain.png"));
		 //iShowImage(800,400,f.length,f.height,f.image);
		 //iSetColor(25,200,25);
		 //iFilledCircle(dx1,dy1,10,100);
		 //iFilledCircle(ex1,ey1,10,100);
		 player c(180,180,image5);
		 iShowImage(px1,py1,c.length,c.height,c.image);
		 image10 = iLoadImage("images//fire.jpg");
		 iShowImage(0,0,1000,50,image10);
		 
		 healthbar();
		 if(PageChange==true){
	     playermovement1();
		 
		 playerlife();
		 if(py1>=580)
			 i=10;
		 }
		 }
		 

		 if(i==10){
			// iSetColor(255,0,0);
		//iFilledRectangle(0,0,1000,600);
			//iSetColor(0,0,0);
		//  iText(350,300,"CONGRATULATION!!!",GLUT_BITMAP_TIMES_ROMAN_24);
			 image12=iLoadImage("images//CONGRATULATIONS.PNG");
			 iShowImage(0,0,1000,600,image12);
		  iSetColor(100,100,100);
	            iFilledRectangle(40,550,100,35);
	            iSetColor(255,255,255);
		        iText(65,558,"Score",GLUT_BITMAP_HELVETICA_18);

		 }
	 if(mode==1)
	 {
		 
		 iSetColor(0,0,0);
		 iText(350,310,str1,GLUT_BITMAP_HELVETICA_18);

	 }

	if(i!=1){
	 mode=0;
	 for(int j=0;j<len;j++)
	str1[j]='\0';
	 len=0;
	}
}


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}
void iPassiveMouse(int mx, int my)
{
	
}
/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(i==0)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
		
			if(mx>=80 && mx<=330 && my>=450 && my<=500)
				i = 1;
			if(mx>=80 && mx<=330 && my>=350 && my<=400)
				i = 2; 
			if(mx>=80 && mx<=330 && my>=250 && my<=300)
				i = 3;
			if(mx>=80 && mx<=330 && my>=150 && my<=200)
				exit(0);
		}
		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
	if(i==1)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=280 && mx<=680 && my>=280 && my<=350)
			{
				mode=1;
			}
			if(mx>=40 && mx<=140 && my>=550 && my<=585)
			{    
				
				i=0;
	
			}


		}
		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
	if(i==2)
	{	
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=40 && mx<=140 && my>=550 && my<=585)
				i=0;
		}
		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
	if(i==3)
	{	
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=40 && mx<=140 && my>=550 && my<=585)
				i=0;
		}
		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
	if(i==4)
	{	
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=40 && mx<=140 && my>=550 && my<=585)
				i=0;
		}
		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
	if(i==6)
	{	
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=40 && mx<=140 && my>=550 && my<=585)
				i=2;
		}
		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
	if(i==10)
	{	
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(mx>=40 && mx<=140 && my>=550 && my<=585)
				i=2;
		}
		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
}


/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'd')
	{
		px1=px1+30;
	}
	if (key == 'w')
	{
		py1=py1+20;
	}
	if (key == 'a')
	{
		px1=px1-30;
	}
	if (key == 's')
	{
		py1=py1-30;
	}

	if (key == ' ')
	{
		py1=py1+50;
	}
	
	if (key == 'c')
	{
		flag=1;
	}
	if (key == 'v')
	{
		flag=0;
	}
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode = 0;
			//strcpy(str1, str2);
			//printf("%s\n", str1);
			//for(j = 0; j < len; j++)
			//	str1[i] = 0;
			//len = 0;
			//strcpy(str1,"\0");
			
	       //for(int j = 0; j < len; j++)
			//	str1[j] = '\0';
			i=4;
		


		}
		else
		{
			
			if(len<20)
			{
				str1[len] = key;
				len++;
				if(key=='\b')
				{
					len=len-2;
					str1[len]='\0';
					//len=len-1;
					if(len<=0)
						len=0;

				}
				
			}
		}
		
		
	}
	
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

		i=8;

	}      

	 if(key== GLUT_KEY_RIGHT){
		px1=px1+30;
		
	 }
		
	 if(key== GLUT_KEY_UP){

		py1=py1+20;
		
	 }
	  if(key==GLUT_KEY_LEFT){
		  px1=px1-30;
	  }
	 if(key== GLUT_KEY_DOWN){
		py1=py1-30;
		
	 }
  }
	 
	
  




int main()
{
	mode = 0;
	len = 0;
	iInitialize(1000, 600, "The Adventure of Harvey");

	image1 = iLoadImage("images//final.png");
	image5 = iLoadImage("images//o.png");
	image11 = iLoadImage("images//brick.png");

	iSetTimer(100,tilesmovement);
	iSetTimer(100,playermovement);

    iStart();

	return 0;
}