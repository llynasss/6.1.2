#include <iostream> 

#include <iomanip> 

#include <time.h> 



using namespace std;



void creat(int* r, const int n, int l, int h, int i);

int sum(int* r, const int n, int i, int s, int& k);

void print(int* a, const int n, int i);



int main() {

	srand((unsigned)time(NULL));



	const int n = 23;

	const int low = 4;

	const int hight = 16;

	int s[n];

	int p = 0;

	int k = 0;





	creat(s, n, low, hight, 0);



	print(s, n, 0);

	cout << endl;



	p = sum(s, n, 0, p, k);



	print(s, n, 0);

	cout << endl;



	cout << "------------\n";

	cout << "|" << "sum" << "|" << setw(6) << p << "|" << endl << "------------\n";

	cout << "|" << " k " << "|" << setw(6) << k << "|" << endl << "------------\n";

}



void creat(int* a, const int n, const int l, const int h, int i)

{

	a[i] = l + rand() % (h - l + 1);

	if (i < n - 1)

		creat(a, n, l, h, i + 1);

}





int sum(int* a, const int n, int i, int s, int& k)

{

	if (!(a[i] % 2 == 1 && i % 3 == 0) || i == 0) {

		s += a[i];

		a[i] = 0;

		k += 1;

	}

	if (i < n - 1) {

		return sum(a, n, i + 1, s, k);

	}

	else {

		return s;

	}

}



void print(int* a, const int n, int i)

{

	cout << " " << setw(2) << a[i];

	if (i < n - 1)

		print(a, n, i + 1);

}