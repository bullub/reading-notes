
void decode1(int *xp, int *yp, int *zp) {

	int a = *yp;
	int b = *zp;
	int c = *xp;

	*yp = c;

	*zp = a;

	*xp = b;

}