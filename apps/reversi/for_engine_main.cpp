#include "for_engine.cpp"

Game game;
static Gene g(10,85,112,69,165,16);
static Gene g1(128, 75, 142, 199, 239, 6);
AI w, b;

void init() {
	//Gene g(10,85,112,69,165,16);
	w.fromGene(g1);
	b.fromGene(g1);
	static ComputerPlayer white("°×Ñ©", WHITE, w);
	static ComputerPlayer black("ÉîÀ¶", BLACK, b);
	game.reset(&black, &white, BLACK);
}

// string deal(string state) {
	// return game.server(state);
// }

void deal(char* state) {
	string r=game.server(string(state));
	// string r="11";
	strcpy(state, r.c_str());
}

int main() {
	init();
	char s[]="00000000000000000000100000011000002222000010000000000000000000001";
	// deal(s);
	cout<<s;
	return 0;
}




