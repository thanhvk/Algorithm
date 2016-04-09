#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

struct toado{
	int h,c;
};

toado huong[5] = {-1,0		// N tren
				  ,0,1		// E phai
				  ,1,0		// S duoi
				  ,0,-1};	// W trai

char str[111];
float d;
int count;

void input(){
	scanf("%s",&str);
}

int getIndexFromChar(char c){
	if ( c == 'N' )
		return 0;
	if ( c == 'E' )
		return 1;
	if ( c == 'S' )
		return 2;
    if (c == 'W')
        return 3;
}

int getIndexFromOtherChar(int preInd, char c) {
    if (c == 'R') {
        if (preInd < 3) {
            return (preInd + 1);
        } else {
            return 0;
        }
    }
    if (c == 'L') {
        if (preInd > 0) {
            return (preInd  - 1);
        } else {
            return 3;
        }
    }
    if (c == 'C') {
        return preInd;
    }
    if (c == 'B') {
        if (preInd == 0) {
            return 2;
        }
        if (preInd == 1) {
            return 3;
        }
        if (preInd == 2) {
            return 0;
        }
        if (preInd == 3) {
            return 1;
        }
    }
}

toado doMove(toado oldLoc,int h){
	toado newLoc;
	newLoc.h = oldLoc.h + huong[h].h;	// cap nhat toa do hang moi theo huong h
	newLoc.c = oldLoc.c + huong[h].c;	// cap nhat toa do cot  moi theo huong h

	return newLoc;
}

// Xap xep toa do theo thu tu tang dan
vector <toado> sort (vector <toado> vitri) {
    int len = vitri.size();
    toado temp;

    // Xap xep tang dan theo hang
    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len; j++) {
            if (vitri[i].h > vitri[j].h) {
                temp = vitri[i];
                vitri[i] = vitri[j];
                vitri[j] = temp;
            }
        }
    }

    // Xap xep tang dan theo cot
    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len; j++) {
            if (vitri[i].h == vitri[j].h && vitri[i].c > vitri[j].c) {
                temp = vitri[i];
                vitri[i] = vitri[j];
                vitri[j] = temp;
            }
        }
    }
    return vitri;
}

// Dem so toa do trung nhau (so lan lac duong)
int lacduong(vector <toado> vitri) {
    int len = vitri.size();
    int c;
    c = 0;

    for (int i = 0; i < len-1; i++) {
        if ((vitri[i+1].h == vitri[i].h) && (vitri[i+1].c == vitri[i].c)) {
            c++;
        }
    }

    return c;
}

void solve(){
	int len = strlen(str);
	toado location;
	vector <toado> vitri;

	// khoi tao toa do o goc toa do (0,0)
	location.h = 0;
	location.c = 0;

	vitri.push_back(location);

	for (int i=0;i<len;i++){
		char command = str[i];				// get lenh tu string input
        int h;

		if (command == 'N' || command == 'E' || command == 'S' || command == 'W') {
            h = getIndexFromChar(command);	// convert tu huong N,E,S,W sang dang so 0,1,2,3
		} else {
            h = getIndexFromOtherChar(h, command); // conver tu R,L,C,B sang chi so 0,1,2,3
		}

		location = doMove(location,h); 		// call ham di chuyen toado theo huong h
		vitri.push_back(location);
	}

	d = sqrt(location.h * location.h + location.c * location.c);
	vitri = sort(vitri);
    count = lacduong(vitri);

	printf("%.3f %d\n", d, count);
}

voide reset() {
    for (int i = 0; i < 1111; i++)
        for (int j = 0; j < 1111; j++)
            flag[i][j] = 0;
}

int main()
{
	int ntest;

	freopen("explore2.inp","r",stdin);

	scanf("%d",&ntest);

	for (int itest=0;itest<ntest;itest++){
		input();
		solve();
		reset();
	}

	return 0;
}

