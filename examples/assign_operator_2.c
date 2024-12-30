#include <stdio.h>

int main() {
	int a = 10;
	int b = 10;
	int c = 10;
	int d = 10;
	int e = 10;
	int f = 10;
	int g = 10;
	int h = 10;
	int i = 10;
	int j = 10;

	 a = a + 5;
	 b = b * 5;
	 c = c << 5; 
	 d = d - 5;
	 e = e >> 5;
	 f = f / 5;
	 g = g % 5;
	 h = h & 5;
	 i = i | 5;
	 j = j ^ 5;

	 printf("a = %d\n", a);
	 printf("b = %d\n", b);
	 printf("c = %d\n", c);
	 printf("d = %d\n", d);
	 printf("e = %d\n", e);
	 printf("f = %d\n", f);
	 printf("g = %d\n", g);
	 printf("h = %d\n", h);
	 printf("i = %d\n", i);
	 printf("j = %d\n", j);

	 return 0;

}
