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

	a += 5; /* a += 5 is the same as a = a + 5; */
	b *= 5; /* b *= 5 is the same as b = b * 5; */
	c <<= 5; /* c <<= 5 is the same as c = c << 5; */
	d -= 5; /* d -= 5 is the same as d = d - 5; */
	e >>= 5; /* e >>= 5 is the same as e = e >> 5; */
	f /= 5; /* f /= 5 is the same as f = f / 5; */
	g %= 5; /* g %= 5 is the same as g = g % 5; */
	h &= 5; /* h &= 5 is the same as h = h & 5; */
	i |= 5; /* i |= 5 is the same as i = i | 5; */
	j ^= 5; /* j ^= 5 is the same as j = j^ 5; */

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
