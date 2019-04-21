#ifndef MENUANDPLAYER_H_INCLUDED
#define MENUANDPLAYER_H_INCLUDED

# include "iGraphics.h"
int image1,image2,image3,image4;
int i=0;




void Menu(int i)
{
	iClear();
	iShowImage(200, 0, 1000, 600, image1);
	iSetColor(255,0,0);
	iFilledRectangle(80,450,250,50);
	iFilledRectangle(80,350,250,50);
	iFilledRectangle(80,250,250,50);
	iFilledRectangle(80,150,250,50);
	iSetColor(10,10,10);
	iText(160,470,"Start Game",GLUT_BITMAP_HELVETICA_18);
	iText(180,370,"Score",GLUT_BITMAP_HELVETICA_18);
	iText(185,270,"Help",GLUT_BITMAP_HELVETICA_18);
	iText(185,170,"Exit",GLUT_BITMAP_HELVETICA_18);	
	iSetColor(255,0,0);
	iText(750,560,"THE ADVENTURE OF",GLUT_BITMAP_HELVETICA_18);
	iText(800,540,"HARVEY",GLUT_BITMAP_HELVETICA_18);
}

void PlayerName(int i)

{
	
	iSetColor(255,255,255);
	iFilledRectangle(0,0,1000,600);
	image4 = iLoadImage("images//enter.png");
    iShowImage(0,0,1000,600,image4);
	iSetColor(255,260,0);
	iFilledRectangle(280,280,400,70);
	iText(400,360,"Enter Player Name ",GLUT_BITMAP_HELVETICA_18);
	iSetColor(255,0,0);
	iFilledRectangle(40,550,100,35);
    iSetColor(255,255,255);
	iText(65,558,"Back ",GLUT_BITMAP_HELVETICA_18);
}
#endif // !MENUANDPLAYER_H_INCLUDED