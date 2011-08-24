/**
 * File: 1008.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-08-16 23:42:47.553000
 * Written In: Peking University, beijing, China
 */


#include <stdio.h>
#include <string.h>

const static char namesHaab[19][7]={		//19
	"pop",	//20
	"no",
	"zip",
	"zotz",
	"tzec",
	"xul",
	"yoxkin",
	"mol",
	"chen",
	"yax",
	"zac",
	"ceh",
	"mac",
	"kankin",
	"muan",
	"pax",
	"koyab",
	"cumhu",
	"uayet"	//5
};//total 19

int get_haab_month(const char* s) {
	for (int i=0; i<19; ++i)
		if (strcmp(namesHaab[i], s)==0)
			return i;
}

const static char namesTzolkin[20][9]={	//20
	"imix",
	"ik",
	"akbal",
	"kan",
	"chicchan",
	"cimi",
	"manik",
	"lamat",
	"muluk",
	"ok",
	"chuen",
	"eb",
	"ben",
	"ix",
	"mem",
	"cib",
	"caban",
	"eznab",
	"canac",
	"ahau"
};



int main () {
	int n, d, y;
	scanf("%d", &n);
	printf("%d\n", n);
	while(n-->0) {
		char s[9];
		scanf("%d", &d);
		scanf("%s", &s);
		scanf("%s", &s);
		scanf("%d", &y);
		int m=get_haab_month(s);
		d+=m*20+y*365;
		y=d/260;
		d=d%260;
		printf("%d %s %d\n", (d%13)+1, namesTzolkin[d%20], y);
	}
}