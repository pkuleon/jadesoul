/**
 * File: enlerpath.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-06-13 23:54:30.779000
 * Written In: Peking University, beijing, China
 */

#include <iostream>
#include <algorithm>
using namespace std;

const int INF = ~(((int)0x1)<<31);
const int SIZE = 27;
const int MAXN = 1002;

int G[SIZE][SIZE], n;
char words[MAXN][SIZE];
int L[MAXN];
int I[SIZE], O[SIZE];
int s, t;
int path[MAXN];
int seg[SIZE];
bool used[MAXN], exist[SIZE], visit[SIZE], del[SIZE];

#define char2Int(c) ((c)-'a')

void read_case() {
    scanf("%d", &n);
      int i=0;
      for(i=0; i<n; i++)
            scanf("%s", words[i]);
}

inline int cmp(const void*x, const void*y) { return strcmp((char*)x,(char*)y); }

void init() {
      memset(I, 0, sizeof(I));
      memset(O, 0, sizeof(O));
      memset(seg, -1, sizeof(seg));
      memset(exist, false, sizeof(exist));
      memset(G, 0, sizeof(G));
      qsort(words, n, sizeof(words[0]), cmp);
      
      int i, u, v, c=-1;
      for(i=0; i<n; i++) {      
            L[i] = strlen(words[i]);
            u = char2Int(words[i][0]);
            v = char2Int(words[i][L[i]-1]);
            G[u][v]++;
            O[u]++;
            I[v]++;
            if(u!=c) {
                  c = u;
                  seg[u] = i;
            }
            exist[u] = exist[v] = true;
      }
}

void dfs(int u) {
      visit[u] = true;
      int k = 0;
      for(k=0; k<SIZE; k++) {
            if(!exist[k]) continue;
            if( !visit[k] && (G[u][k]>0 || G[k][u]>0) ) dfs(k);
      }
}

bool is_connected() {
      memset(visit, false, sizeof(visit));
      int k = 0;
      for(k=0; k<SIZE; k++) {
            if(!exist[k]) continue;
            if(!del[k]) break;
      }
      dfs(k);
      for(k=0; k<SIZE; k++) {
            if(!exist[k]) continue;
            if(!visit[k] && !del[k]) return false;
      }
      return true;
}

bool has_enler_path() {
      memset(del, false, sizeof(del));
      if(!is_connected()) return false;
      int k = 0, eq = 0, low = 0, big = 0;
      s = t = -1;
      for(k=0; k<SIZE; k++) {
            int d = I[k] - O[k];
            if(!exist[k]) continue;
            if(low>1 || big>1) return false;
            if(d==1) { big++; t = k; }
            else if(d==-1) { low++; s = k; }
            else if(d==0) { eq++; }
            else { return false; }
      }
      if(low==0&&big==0) { s = t = char2Int(words[0][0]); return true; }
      if(low==1&&big==1) return true;
      return false;
}

void search_enler_path() {
      memset(used, false, sizeof(used));
      int i = 0, k = 0, u = -1;
      for(i=0; i<n; i++) {
            for(k=seg[s]; char2Int(words[k][0]) == s; k++) {      
                  if(!used[k]) {
                        u = char2Int(words[k][L[k]-1]);
                        G[s][u]--;
                        if(!is_connected()) {
                              if(O[s]==1) break;
                              G[s][u]++;
                        }
                        else { break; }
                  }
            }
            used[k] = true;
            path[i] = k;
            O[s]--;
            I[u]--;
            if(I[s]==0 && O[s]==0) del[s] = true;
            s = u;
      }
}

bool solve_case() {
      init();
      if(!has_enler_path()) { return false; }
      else {
            search_enler_path();
            return true;
      }      
}

int main() {
      int i, t=0;
      scanf("%d", &t);
      while(t-->0) {
            read_case();
            if(!solve_case()) {      printf("***\n"); }
            else {
                  for(i=0; i<n-1; i++)
                        printf("%s.", words[path[i]]);
                  printf("%s", words[path[n-1]]);
            }
      }
      return 0;
}