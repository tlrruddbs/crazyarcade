
extern int map1[13][15];
extern int map2[13][15];
class eff {
public:
	int ani;
	int x;
	int y;
	int bbyn;
	int tile;
	int r;
	eff(int x, int y, int tile)
	{
		this->ani = 0;
		this->x = x;
		this->y = y;
		this->bbyn = 0;
		this->tile = tile;
		this->r = 28;
	}
	void Mapcolcheck();
	void Render();
	void bumb();
};

void eff :: Mapcolcheck()
{		//À§ÂÊ ÅÍÁü
		
	if((map2[(((y-40)/40))][((x)/40)] == 27)
								
		|| map2[((y-40)/40)][((x)/40)] == 25
		|| map2[((y-40)/40)][((x)/40)] == 26
		|| map2[((y-40)/40)][((x)/40)] == 30
		|| map2[((y-40)/40)][((x)/40)] == 32
		|| map2[((y-40)/40)][((x)/40)] == 34
		|| map2[((y+40)/40)][((x)/40)] == 36)
							
	{
		(map2[((y)-40)/40][(x)/40]) = (map1[((y-40)/40)][(x)/40]);				
//			if(Bubble_list != NULL		){}
		
			
	}
		//¿ÞÂÊ ÅÍÁü
	if((map2[((y)/40)][((x-40)/40)] == 27)
		|| map2[((y)/40)][((x-40)/40)] == 25
		|| map2[((y)/40)][((x-40)/40)] == 26
		|| map2[((y)/40)][((x-40)/40)] == 30
		|| map2[((y)/40)][((x-40)/40)] == 32
		|| map2[((y)/40)][((x-40)/40)] == 34
		|| map2[((y)/40)][((x-40)/40)] == 36)
							
	{
		(map2[((y))/40][(x-40)/40]) = (map1[((y)/40)][(x-40)/40]);							
	}
	if((map2[((y)/40)][((x+40)/40)] == 27)
		|| map2[((y)/40)][((x+40)/40)] == 25
		|| map2[((y)/40)][((x+40)/40)] == 26
		|| map2[((y)/40)][((x+40)/40)] == 30
		|| map2[((y)/40)][((x+40)/40)] == 32
		|| map2[((y)/40)][((x+40)/40)] == 34
		|| map2[((y)/40)][((x+40)/40)] == 36)
							
	{
		(map2[((y))/40][(x+40)/40]) = (map1[((y)/40)][(x+40)/40]);							
	}
	if((map2[((y+40)/40)][((x)/40)] == 27)
		|| map2[((y+40)/40)][((x)/40)] == 25
		|| map2[((y+40)/40)][((x)/40)] == 26
		|| map2[((y+40)/40)][((x)/40)] == 30
		|| map2[((y+40)/40)][((x)/40)] == 32
		|| map2[((y+40)/40)][((x)/40)] == 34
		|| map2[((y+40)/40)][((x)/40)] == 36)
							
	{
		(map2[((y)+40)/40][(x)/40]) = (map1[((y+40)/40)][(x)/40]);							
	}
}
void eff :: Render()
{
		
	{
		BitBlt(hOffdc,x+40,y,38,44,hMemdc[39],38*ani,0,SRCAND); 
		BitBlt(hOffdc,x+40,y,38,44,hMemdc[38],38*ani,0,SRCPAINT);  
		bbyn=1;
	}
	{
		BitBlt(hOffdc,x,y-40,43,38,hMemdc[41],43*ani,0,SRCAND); 
		BitBlt(hOffdc,x,y-40,43,38,hMemdc[40],43*ani,0,SRCPAINT);  
		bbyn=1;
	}
		
	{
		BitBlt(hOffdc,x-40,y,38,44,hMemdc[43],38*ani,0,SRCAND); 
		BitBlt(hOffdc,x-40,y,38,44,hMemdc[42],38*ani,0,SRCPAINT);  
		bbyn=1;
	}
		
	{
		BitBlt(hOffdc,x,y+40,42,38,hMemdc[45],42*ani,0,SRCAND); 
		BitBlt(hOffdc,x,y+40,42,38,hMemdc[44],42*ani,0,SRCPAINT);  
		bbyn=1;
	}
		
	{
		BitBlt(hOffdc,x,y,40,40,hMemdc[47],0,0,SRCAND); 
		BitBlt(hOffdc,x,y,40,40,hMemdc[46],0,0,SRCPAINT);  
		bbyn=1;
	}
		
}	

