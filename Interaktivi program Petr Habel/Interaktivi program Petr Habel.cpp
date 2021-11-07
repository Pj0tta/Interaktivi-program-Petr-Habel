#include <iostream>

int main(void) {
	float vstup, a, b, c;
	float s;
	float z;
	printf("Pri zadavani stran vloz carku mezi udaje\n");
	printf("Vyber si:\n");
	printf("1) trojuhelnik\n");
	printf("2) obdelnik\n");
	printf("3) kruznice\n");
	scanf_s("%f", &vstup);
	if (vstup == 1) {
		printf("Zadej strany trojuhelniku: ");
		scanf_s("%f, %f, %f", &a, &b, &c);
		printf("Trojuhelnik se stranami a=%f, b=%f, c=%f\n", a, b, c);
		if ((a + b > c) && (b + c > a) && (a + c > b)) {
			printf("Existuje\n");
		}
		else {
			printf("Neexistuje\n");
		}
		if (c == sqrt(a * a + b * b)) {
			printf("Je pravouhly\n");
		}
		else {
			printf("Neni pravouhly\n");
		}

		printf("Obvod je: %f\n", a + b + c);
		//vypocet obsahu pomoci heronova vzorce-vypocita obsah ze 3 stran
		s = (a + b + c) / 2;
		z = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("Obsah je: %f\n", z);
	}
	if (vstup == 2) {
		printf("Zadej strany obdelniku: ");
		scanf_s("%f, %f", &a, &b);
		if (a == b) {
			printf("Ctverec se stranou a=%f\n", a);
		}
		else {
			printf("Obdelnik se stranami a=%f, b=%f\n", a, b);

		}
		printf("Obvod je: %f\n", (a + b) * 2);
		printf("Obsah je: %f\n", a * b);
	}
	if (vstup == 3) {
		printf("Zadej polomer kruznice: ");
		scanf_s("%f", &a);
		printf("Obvod je: %f\n", (3.14 * 2) * (a));
		printf("Obsah je: %f\n", (3.14 * a) * (a));
	}
}
