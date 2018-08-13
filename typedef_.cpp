// https://www.youtube.com/watch?v=HujD_mavupE
// https://stackoverflow.com/questions/516237/when-should-i-use-typedef-in-c



#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
	int x; 
	int y;	
}HELL;

int main()
{

	typedef int LENGTH;

	LENGTH a, b;

	int c ;

	cin >> a >> b >> c;	

	cout << a << " " << b << " " <<   c << endl;

	HELL mm; 

	cin >> mm.x >> mm.y;

	cout << mm.x << " " << mm.y << endl;

	return 0;
}