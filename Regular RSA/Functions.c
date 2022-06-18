#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int prime(long int pr) { //test if prime

	int i;

	j=sqrt(pr);

	for (i=2;i<=j;i++) {

		if(pr%i==0)

		    return 0;

	}

	return 1;

}


int coprime(int a, int h) { //test if co-prime
	int temp;
	while (1)
	{
		temp = a%h;
		if (temp == 0)
			break;
		a = h;
		h = temp;
	}
	if (h==1)
	{
		return 1;
	} else{
		return 0;
	}
}

long int encrypt(double  p, double  q, double e, double msg) {

	double n = p*q;
	double c = pow(msg, e);
	c = fmod(c, n);
	return c;
}

long int decrypt(int p, int q, double e, int k, double data) {

	double n = p*q;
	double phi = (p-1)*(q-1);
	double d = (1 + (k*phi))/e;
	double c = pow(data, e);
	c = fmod(c, n);

	double m = pow(c, d);
	m = fmod(m, n);

	return m;
}
