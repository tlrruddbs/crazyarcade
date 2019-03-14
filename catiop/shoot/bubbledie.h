
class bubbledie {
public:
	int x;
	int y;
	int ani1;

	bubbledie(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->ani1 = 0;
	}
	void Render();
	void bubbleleft();
};

void bubbledie :: Render()
{
	BitBlt(hOffdc,x,y,63,63,hMemdc[49],63*ani1,0,SRCAND);
	BitBlt(hOffdc,x,y,63,63,hMemdc[48],63*ani1,0,SRCPAINT);	
}
void bubbledie :: bubbleleft()
{
		
	if(x!=0)							
	{
		x-=2;
	}
}

