#include "StdAfx.h"
#include "Player.h"
#include "Grid.h"
#include "Game.h"

const char* Player::dsArr[8]={"��", "����", "��", "����", "��", "����", "��", "����"};


Player::Player(const string& name,int color){
	this->name=name;
	this->color=color;
	game=NULL;
}

int Player::refreshGuys(){	
	//ˢ�¼�¼��ǰ����������ӵ�guys���ϣ�������Ϸ�Ƿ����
	//������Ѿ�һ����Ҳû����ʱ��Ϸ����
	GameMap& map=this->game->map;//������Ϸ��ͼ

	guys.clear();
	int i, j;
	for (i=0; i<BORDER_LEN; ++i) {
		for (j=0; j<BORDER_LEN; ++j) {
			if (map[i][j]->state==color)
				guys.insert(map[i][j]);
		}
	}
	return guys.size();
}

//���ҿ�����λ�õļ��ϣ����޷��ؼ�
int Player::findAvails() {
	//���avails(�����ӵ�λ�ü���)
	avails.clear();

	#ifdef DEBUG_DEBUG
	cout<<"��ʼ��������λ��..."<<endl;
	#endif
		
	for (gridset::iterator it=guys.begin(); it!=guys.end(); ++it) {
		int d;//����
		int turn=color;//��ǰ����������ɫ
		int oppo=BLACK+WHITE-turn;//������ɫ
		
		#ifdef DEBUG_DEBUG
		cout<<"("<<(*it)->x<<" , "<<(*it)->y<<")"<<endl;
		#endif
		
		for (d=0; d<8; ++d) {//���α���8������
			
			#ifdef DEBUG_DEBUG
			cout<<"\t"<<dsArr[d];
			#endif

			Grid *g=*it;
			g=g->next[d];
			if (g==NULL || g->state!=oppo){//�������ж��ֵ��Ӿͼ����������л����¸�����
				
				#ifdef DEBUG_DEBUG
				cout<<endl;
				#endif
				
				continue;
			}

			for (; g!=NULL && g->state==oppo; g=g->next[d]);//��ѭ��
			
			if (g!=NULL && g->state==EMPTY) {//û�е������̱߽�����󵽴�һ���հ����
				avails.insert(g);
				
				#ifdef DEBUG_DEBUG
				cout<<"  ---> "<<"("<<g->x<<" , "<<g->y<<")";
				#endif
			}

			#ifdef DEBUG_DEBUG
			cout<<endl;
			#endif
		}
	}
	return avails.size();
}

Player::~Player(void) 
{
}

