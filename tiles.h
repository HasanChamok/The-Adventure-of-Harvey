#ifndef TILES_H_INCLUDED
#define TILES_H_INCLUDED

int tilesSpeed1 = 5;
int tilesSpeed2 = 7;
int tilesSpeed3 = 5;
int tilesSpeed4 = 7;
int ballSpeed = 15;
int tx1=250 , ty1=200 ;
int tx2=530 , ty2=550 ;
int tx3=800 , ty3=400 ;
int tx4=530 , ty4=300 ;
int bx1=110 , by1=350 ;
//int dx1=110 , dy1=205 ;
//int ex1=870 , ey1=470 ;
int px1=90  , py1=350 ;
int flag1=0;

int life=3;
int Score=0;
char score_1[20];
int dx=150;

bool out = true;

bool tiles1isInjured = false;
bool tiles2isInjured = false;
bool tiles3isInjured = false;
bool tiles4isInjured = false;

void tilesmovement()
{
	if(ty1>0)
	{
		ty1=ty1-tilesSpeed1;
	}
	else
	{
		ty1=600;
	}
	if(ty2>0)
	{
		ty2=ty2-tilesSpeed2;
	}
	else
	{
		ty2=600;
	}
	if(ty3>0)
	{
		ty3=ty3-tilesSpeed3;
	}
	else
	{
		ty3=600;
	}
	if(ty4>0)
	{
		ty4=ty4-tilesSpeed4;
	}
	else
	{
		ty4=600;
	}
	if(bx1<1000)
	{
		bx1=bx1+ballSpeed;
	}
	else
	{
		bx1=110;
	}
	/*if(dx1<1000)
	{
		dx1=dx1+ballSpeed;
	}
	else
	{
		dx1=110;
	}
	if(ex1>0)
	{
		ex1=ex1-ballSpeed;
	}
	else
	{
		ex1=870;
	}*/
}

void playermovement(){

	if(py1>=20)
	{ 

		if((px1+80>=tx1) && (px1+20<=tx1+150) && (py1>=ty1)&&(py1<=ty1+40)){
		
			py1=ty1;
			if(tiles1isInjured==false && flag1==0)
			{

		    Score++;
			sprintf(score_1,"%d",Score);
			tiles1isInjured=true;
			}

			else {
			tiles1isInjured=false;
		}
		}
		
        
		if((px1+80>=tx2) && (px1+20<=tx2+150) && (py1>=ty2)&&(py1<=ty2+40)){
			
			py1=ty2;
			if(tiles2isInjured==false && flag1==0)
			{
			Score++;
			sprintf(score_1,"%d",Score);
			tiles2isInjured=true;
			}
			else{
			tiles2isInjured=false;
		}
		}
		
        
		 if((px1+80>=tx3) && (px1+20<=tx3+150) && (py1>=ty3)&&(py1<=ty3+40)) {
			
			py1=ty3;
			if(tiles3isInjured==false && flag1==0)
			{
			Score++;
			sprintf(score_1,"%d",Score);
			tiles3isInjured=true;
			}
			else{
			tiles3isInjured=false;
		}
		}
		 
		 if((px1+80>=tx4) && (px1+20<=tx4+150) && (py1>=ty4)&&(py1<=ty4+40)){
		
			py1=ty4;
			if(tiles4isInjured==false && flag1==0)
			{
			Score++;
			sprintf(score_1,"%d",Score);
			tiles4isInjured=true;
			}
		 else  {
			tiles4isInjured=false;
		}
		}
		
		 else
		 { 
			 if(i==4 || i==7 || i==9 )
				py1=py1-4;
		 }
	    }

	   else {
		   if(i==4 || i==7 || i==9 )
		   {
				life=life-1;
				if(life==0 && out == true)
				{
					i=6;
					out = false;
				}
 
		   }
		   
	   
	   }
	   FILE *f1=fopen("score.txt","w");
	   fprintf(f1,"%d",Score);
	   if(life==0)
	   fclose(f1);


}

	
	
	  
#endif // !TILES_H_INCLUDED