#include "common.h"
#define qwe 3;
extern int bubble[13][15];
//extern map1[13][15];
//extern map2[13][15];


using namespace std;
int count = 0;
int a = 0;
int check = 0;
int check1 = 0;
int check2 = 0;

Charactor* player = new Charactor(280, 340);
list<Bubble*>Bubble_list;
list<Bubble*>::iterator Bubble_it;

list<eff*>eff_list;
list<eff*>::iterator eff_it;

list<bubbledie*>bubbledie_list;
list<bubbledie*>::iterator bubbledie_it;

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{

	PAINTSTRUCT	ps;
	HDC	hdc;
	RECT Clip;



	switch (message)
	{
	case WM_CREATE:
		hdc = GetDC(hwnd);
		//��Ʈ�� �ε�	
		for (i = 0; i<60; i++) {
			hMemdc[i] = CreateCompatibleDC(hdc);
		}


		hBitmap[0] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP1)); //��
		hBitmap[1] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP2)); //���� ����
		hBitmap[2] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP3)); //���� ����
		hBitmap[3] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP4));//ǳ��
		hBitmap[4] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP5)); //ǳ��
		hBitmap[5] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP6)); //���� �������¸��
		hBitmap[6] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP7));//���� �������¸��
		hBitmap[7] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP8)); //���� ���ΰŴ� ������  
		hBitmap[8] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP9));//���� ���ΰ��¸�� ��
		hBitmap[9] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP10)); //���� ������ ��� ��
		hBitmap[10] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP11)); //���� ������ ��� ��
		hBitmap[11] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP12)); //���� ������ ���
		hBitmap[12] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP13)); //���� ������ ���
		hBitmap[13] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP14)); //�ܵ�1 //�ϼ���
		hBitmap[14] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP15)); //�ܵ�1 //�ϼ���
		hBitmap[15] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP16)); //����1
		hBitmap[16] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP17)); //����2
		hBitmap[17] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP18)); //���� ��� ��
		hBitmap[18] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP19)); // ���� ��� ��
		hBitmap[19] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP20)); //���� ���
		hBitmap[20] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP21)); //���� ���
		hBitmap[21] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP22)); //ǳ��
		hBitmap[22] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP23)); // ǳ��
		hBitmap[23] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP24)); //���ٱ�
		hBitmap[24] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP25)); //���ٱ�
		hBitmap[25] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP26)); //�������
		hBitmap[26] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP27)); //��Ȳ���
		hBitmap[27] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP28)); //�ڽ�
		hBitmap[28] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP29)); //����
		hBitmap[29] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP30)); //��������
		hBitmap[30] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP31));//����
		hBitmap[31] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP32)); //����
		hBitmap[32] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP33)); //����
		hBitmap[33] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP34)); //����
		hBitmap[34] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP35)); //����
		hBitmap[35] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP36)); //����
		hBitmap[36] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP37)); //��
		hBitmap[37] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP38)); //��
		hBitmap[38] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP39)); //��1
		hBitmap[39] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP40));
		hBitmap[40] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP41)); //��1
		hBitmap[41] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP42));
		hBitmap[42] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP43));  //��1
		hBitmap[43] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP44));
		hBitmap[44] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP45)); //��1
		hBitmap[45] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP46));
		hBitmap[46] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP47)); //��1
		hBitmap[47] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP48));
		hBitmap[48] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP49)); //����ﰤ��
		hBitmap[49] = LoadBitmap((HINSTANCE)GetWindowLong(hwnd, GWL_HINSTANCE), MAKEINTRESOURCE(IDB_BITMAP50));

		//��Ʈ�� �ε�	
		for (i = 0; i<60; i++) {
			SelectObject(hMemdc[i], hBitmap[i]);
		}


		//������ũ��
		hOffdc = CreateCompatibleDC(hdc);
		hOffBmp = CreateCompatibleBitmap(hdc, 800, 688);
		SelectObject(hOffdc, hOffBmp);

		//	Ÿ�̸Ӽ���	
		SetTimer(hwnd, 1, 1, NULL);//���Ÿ�̸�
		SetTimer(hwnd, 2, 1000, NULL);
		SetTimer(hwnd, 3, 50, NULL);
		SetTimer(hwnd, 4, 300, NULL); // �� �Ѿ� ����
		SetTimer(hwnd, 5, 500, NULL);
		SetTimer(hwnd, 7, 150, NULL); //ĳ���� �Ʒ��� ���� ���
		SetTimer(hwnd, 8, 150, NULL); //ǳ�� ������ �ð�
		ReleaseDC(hwnd, hdc);
		break;



	case WM_TIMER:
		hdc = GetDC(hwnd);

		Key_Input(VK_UP, &UP_KEY);
		Key_Input(VK_LEFT, &LEFT_KEY);
		Key_Input(VK_DOWN, &DOWN_KEY);
		Key_Input(VK_RIGHT, &RIGHT_KEY);
		Key_Input(VK_SPACE, &SPACE_KEY);

		if ((player != NULL))
		{
			if (UP_KEY == HOLD_KEY)
			{
				player->bazziup();
			}
			if (DOWN_KEY == HOLD_KEY)
			{
				player->bazzidown();
			}
			if (LEFT_KEY == HOLD_KEY)
			{
				player->bazzileft();
			}
			if (RIGHT_KEY == HOLD_KEY)
			{
				player->bazziright();
			}
			
			if (SPACE_KEY == PUSH_KEY) {
				if (player != NULL) {
					if (bubble[(((player->x + 20) / 40) * 40)][(((player->y + 49) / 40) * 40)] != 1) {
						Bubble* temp9 = new Bubble((((player->x + 20) / 40) * 40), (((player->y + 49) / 40) * 40));
						Bubble_list.push_back(temp9);
						bubble[(((player->x + 20) / 40) * 40)][(((player->y + 49) / 40) * 40)] = 1;
						
					}
				}
			}

		}

		srand((unsigned int)time(NULL));
		//		mapp->Render1();
		/*

		if(player!=NULL)
		{
		for(Bubble_it=Bubble_list.begin();Bubble_it!=Bubble_list.end();Bubble_it++)
		{
		(*Bubble_it)->bbyn=1;
		}
		}


		if(player!=NULL)
		{
		for(eff_it=eff_list.begin();eff_it!=eff_list.end();eff_it++)
		{
		(*eff_it)->bbyn=1;
		}
		}
		*/
		//		sprintf(buffer2, "SCORE: %d    ", count);
		//	TextOut(hOffdc, 0, 15, buffer2, 15);


		//������,����,������,���� ���� ���� �ִ�

		//////////////////////////////////////////////////////////�� �� �� /////////////////////////////////////////////////////////
		//����°� 1ǥ��




		//��ǳ�� �¾�����
		//���� �ִϸ��̼�
		if (wParam == 7)
		{
			if (player != NULL)
			{
				player->BazziAniDown();
				player->BazziAniUp();
				player->BazziAniLeft();
				player->BazziAniRight();
			}
		}
		for (eff_it = eff_list.begin(); eff_it != eff_list.end(); eff_it++)
		{
			{
				(*eff_it)->Render();
				(*eff_it)->Mapcolcheck();
			}
		}
		//�� ����
		if (player != NULL)
		{
			for (int m = 0; m<13; m++)
			{
				for (int n = 0; n<15; n++)
				{
					BitBlt(hOffdc, n * 40, m * 40, 40, 40, hMemdc[map1[m][n]], 0, 0, SRCCOPY);
					BitBlt(hOffdc, n * 40, m * 40, 40, 40, hMemdc[map2[m][n]], 0, 0, SRCCOPY);

					BitBlt(hOffdc, 560 - 1, 80 - 16, 40, 58, hMemdc[30], 40, 0, SRCAND);
					BitBlt(hOffdc, 560 - 1, 80 - 16, 40, 58, hMemdc[30], 0, 0, SRCPAINT);
				}
			}
		}


		//���� ����
		if (player != NULL)
		{
			player->Render();
		}
		//ǳ�� ����
		for (Bubble_it = Bubble_list.begin(); Bubble_it != Bubble_list.end(); Bubble_it++)
		{
			(*Bubble_it)->Render();
		}
		if (wParam == 7)
		{

			for (Bubble_it = Bubble_list.begin(); Bubble_it != Bubble_list.end();)
			{
				//��ǳ�� ������ ī����,�ִϸ��̼�
				(*Bubble_it)->BubbleBubble();
				
				
				if ((*Bubble_it)->count == 10)
				{

					if (player != NULL)
					{
						bubble[(*Bubble_it)->x][(*Bubble_it)->y] = 0;   //ǳ���� �ִ��ڸ��� �ٽ� ǳ���� ������ �ְ� ����
						
						eff* temp2 = new eff((*Bubble_it)->x, (*Bubble_it)->y, map1[((*Bubble_it)->y) / 40][((*Bubble_it)->x) / 40]);
						eff_list.push_back(temp2);

					}

					delete *Bubble_it;
					Bubble_it = Bubble_list.erase(Bubble_it);
				}
				else if ((*Bubble_it)->ani1 == 4 && (*Bubble_it)->count != 10)
				{
					(*Bubble_it)->ani1 = 0;
				}
				else if ((*Bubble_it)->count != 10)
				{
					Bubble_it++;
				}

			}
		}

		//���ٱ�
		if (wParam == 8)
		{
			for (eff_it = eff_list.begin(); eff_it != eff_list.end();)
			{


				(*eff_it)->ani++;

				if ((*eff_it)->ani == 3)
				{

					(*eff_it)->ani = 0;
					delete *eff_it;
					eff_it = eff_list.erase(eff_it);
					break;
				}
				else
				{
					eff_it++;

				}
			}
		}




		//���ٱ� ���


		/*
		if(  (*eff_it)->y == player->x&&player->y))
		{
		sprintf(buffer7,"%d",3);
		TextOut(hOffdc,(*eff_it)->x,(*eff_it)->y,buffer7,4);

		sprintf(buffer7,"%d",3);
		TextOut(hOffdc,(*eff_it)->x+40,(*eff_it)->y,buffer7,4);

		sprintf(buffer7,"%d",3);
		TextOut(hOffdc,(*eff_it)->x,(*eff_it)->y-40,buffer7,4);

		sprintf(buffer7,"%d",3);
		TextOut(hOffdc,(*eff_it)->x-40,(*eff_it)->y,buffer7,4);

		sprintf(buffer7,"%d",3);
		TextOut(hOffdc,(*eff_it)->x,(*eff_it)->y+40,buffer7,4);
		}
		*/

		if (player != NULL)
		{
			for (int m = 0; m<13; m++)
			{
				for (int n = 0; n<15; n++)
				{
					sprintf(buffer3, " %d ", map1[m][n]);
					TextOut(hOffdc, n * 40, m * 40, buffer3, 4);

					sprintf(buffer3, " %d ", map2[m][n]);
					TextOut(hOffdc, n * 40, m * 40, buffer3, 4);


					//	sprintf(buffer3, " %d ",111);
					//	TextOut(hOffdc,40*((player->x+20)/40),40*((player->y+49)/40)-40,buffer3,4);	
					//map[player->y/40][(player->x/40)-1] == 27
					for (Bubble_it = Bubble_list.begin(); Bubble_it != Bubble_list.end(); Bubble_it++)
					{
						if ((*Bubble_it)->bbyn == 1)
						{
							sprintf(buffer6, " %d ", 2);
							TextOut(hOffdc, (*Bubble_it)->x, (*Bubble_it)->y, buffer6, 4);
						}
					}
					/*
					//���ٱ� ����Ʈ
					for(eff_it=eff_list.begin();eff_it!=eff_list.end();eff_it++)
					{

					if((*eff_it)->bbyn==1)
					{
					sprintf(buffer7,"%d",3);
					TextOut(hOffdc,(*eff_it)->x,(*eff_it)->y,buffer7,4);

					sprintf(buffer7,"%d",3);
					TextOut(hOffdc,(*eff_it)->x+40,(*eff_it)->y,buffer7,4);

					sprintf(buffer7,"%d",3);
					TextOut(hOffdc,(*eff_it)->x,(*eff_it)->y-40,buffer7,4);

					sprintf(buffer7,"%d",3);
					TextOut(hOffdc,(*eff_it)->x-40,(*eff_it)->y,buffer7,4);

					sprintf(buffer7,"%d",3);
					TextOut(hOffdc,(*eff_it)->x,(*eff_it)->y+40,buffer7,4);
					}

					}
					*/
					//this->center1=x+14; //�߽�
					//this->center2=y+30;	//�߽�



					//ĳ���� ���ٱ� �浹üũ
					for (eff_it = eff_list.begin(); eff_it != eff_list.end(); eff_it++)
					{
						if ((player != NULL) && ((((*eff_it)->y <= player->y + 30 && (*eff_it)->y + 40 >= player->y + 30)) && ((*eff_it)->x <= player->x + 14 && (*eff_it)->x + 40 >= player->x + 14))
							|| ((((*eff_it)->y - 40 <= player->y + 30 && (*eff_it)->y >= player->y + 30)) && ((*eff_it)->x <= player->x + 14 && (*eff_it)->x + 40 >= player->x + 14))
							|| ((((*eff_it)->y <= player->y + 30 && (*eff_it)->y + 40 >= player->y + 30)) && ((*eff_it)->x - 40 <= player->x + 14 && (*eff_it)->x >= player->x + 14))
							|| ((((*eff_it)->y <= player->y + 30 && (*eff_it)->y + 40 >= player->y + 30)) && ((*eff_it)->x + 40 <= player->x + 14 && (*eff_it)->x + 80 >= player->x + 14))
							|| ((((*eff_it)->y + 40 <= player->y + 30 && (*eff_it)->y + 80 >= player->y + 30)) && ((*eff_it)->x <= player->x + 14 && (*eff_it)->x + 40 >= player->x + 14)))
						{

							bubbledie* temp8 = new bubbledie((player->x - 7), ((player->y)));
							bubbledie_list.push_back(temp8);


							//		sprintf(buffer7,"%d",555555);
							//		TextOut(hOffdc,player->x,player->y,buffer7,4);



						}

						(*eff_it)->Render();
						(*eff_it)->Mapcolcheck();
					}
				}
			}
		}
		if (wParam == 8)
		{
			for (bubbledie_it = bubbledie_list.begin(); bubbledie_it != bubbledie_list.end();)
			{
				(*bubbledie_it)->ani1++;
				if ((*bubbledie_it)->ani1 == 9)
				{
					(*bubbledie_it)->ani1 = 0;
					delete *bubbledie_it;
					bubbledie_it = bubbledie_list.erase(bubbledie_it);
					delete player;
					player = NULL;
					break;

				}
				else
				{
					bubbledie_it++;
				}
			}
		}
		//����ﰤ����
		for (bubbledie_it = bubbledie_list.begin(); bubbledie_it != bubbledie_list.end(); bubbledie_it++)
		{
			(*bubbledie_it)->Render();

		}
		
		//FPS����
		/*
		for(int m=0;m<13;m++)
		{
		for(int n=0;n<15;n++)
		{
		BitBlt(hOffdc, n*40, m* 40 , 40, 40, hMemdc[map[m][n]],0,0,SRCCOPY);
		}
		}
		*/
		//	Fps();
		//	sprintf(buffer, "FPS:%d  ", fps);
		//	TextOut(hOffdc, 0, 0, buffer3, 8);


		//���ھ�
		if (player != NULL) {
			sprintf(buffer2, "x��: %d    ", player->x);
			TextOut(hOffdc, 0, 15, buffer2, 8);
		}
		if (player != NULL) {
			sprintf(buffer2, "y��: %d    ", player->y);
			TextOut(hOffdc, 0, 30, buffer2, 8);
		}


		//Ÿ�ϸ��� ���� ǥ��




		BitBlt(hdc, 0, 0, 800, 688, hOffdc, 0, 0, SRCCOPY);

		ReleaseDC(hwnd, hdc);
		break;


	case VK_ESCAPE:
		PostQuitMessage(0);
		break;

	case WM_DESTROY:
		//��Ʈ��   
		for (i = 0; i<50; i++) {
			DeleteObject(hBitmap[i]);
			DeleteDC(hMemdc[i]);
		}

		//������ũ��
		DeleteObject(hOffBmp);
		DeleteDC(hOffdc);

		//Ÿ�̸�
		KillTimer(hwnd, 1);


		PostQuitMessage(0);
		break;

	default:
		break;
	}

	return DefWindowProc(hwnd, message, wParam, lParam);
}

