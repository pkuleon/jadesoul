#pragma once
//表示一个回合，黑白双方均下一步棋
class Round
{
public:
	Step playerBlack;
	Step playerWhite;
public:
	Round(Step& black, Step& white);//每回合总是黑子先下，白子后下
};
