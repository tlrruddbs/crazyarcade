
class Bubble {
public:
	int x;
	int y;
	int count;
	//	int r;
	int bubble;
	int ani1;
	int bb;
	int time;
	int bbyn; //Ç³¼± »ý±â¸é 2¹øÀÌ¶ó°í ¶°¾ßÇÔ

	Bubble(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->ani1 = 0;
		this->time = 3;
		this->bubble = 0;
		this->bb = 0; //ÆøÅº ÁÂÇ¥
		this->count = 0;
		this->bbyn = 0;

	}
	void move();
	void BubbleBubble();
	void Render();
};

void Bubble :: move()
{
	x=x;
}
void Bubble::BubbleBubble()
{
	ani1++;
	count++;
}
void Bubble::Render()
{
	BitBlt(hOffdc,x,y,45,44,hMemdc[22],45*ani1,0,SRCAND);
	BitBlt(hOffdc,x,y,45,44,hMemdc[21],45*ani1,0,SRCPAINT);	
}
