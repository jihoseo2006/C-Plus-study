// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << setw(4) << ary[i][j];
//		}
//		cout << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//class mytime {
//private:
//	int hh, mm, ss;
//	int tss;
//public:
//	mytime();
//	mytime(int h, int m, int s);
//	void showme();
//	mytime cvt_s2h(int n);
//	mytime operator + (mytime t);
//	mytime operator - (mytime t);
//	mytime operator * (int n);
//	friend mytime operator * (int n, mytime t);
//	mytime operator / (int n);
//};
//
//int main() {
//	mytime result;
//	mytime t1(7, 29, 48); t1.showme();
//	mytime t2(4, 54, 39); t2.showme();
//
//	result = t1 + t1 + t1; result.showme();
//	result = t2 - t1 + t1; result.showme();
//	result = t1 * 3; result.showme();
//	result = 3 * t1; result.showme();
//	result = t2 / 4; result.showme();
//	result = result.cvt_s2h(300); result.showme();
//}
//mytime::mytime() {
//	hh = mm = ss = tss = 0;
//}
//
//mytime::mytime(int h, int m,int s) {
//	hh = h; mm = m; ss = s;
//	tss = h * 60 * 60 + m * 60 + s;
//}
//void mytime::showme() {
//	cout.width(3);   cout << hh << " :";
//	cout.width(3);   cout << mm <<  " :";
//	cout.width(3);   cout << ss << "\t";
//	cout.width(3);   cout << tss << endl;
//}
//mytime mytime::cvt_s2h(int tt) {
//	tt = abs(tt);
//	mytime result(tt / 60 / 60, tt / 60 % 60, tt % 60);
//	return result;
//}
//mytime mytime::operator + (mytime t) {
//	return cvt_s2h(tss + t.tss);
//}
//mytime mytime::operator - (mytime t) {
//	return cvt_s2h(tss - t.tss);
//}
//mytime mytime::operator * (int n) {
//	return cvt_s2h(tss * n);
//}
//mytime operator * (int n,mytime t) {
//	return t * n;
//}
//mytime mytime::operator / (int n) {
//	return cvt_s2h(tss / n);
//}

//#include<iostream>//일차원 배열을 이차원 배열식으로 출력하기
//
//using namespace std;
//
//int main() {
//	int ary[] = { 6,2,9,3,8,4,5,1 };
//	int(*ary2)[2] = (int(*)[2])ary;
//
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 2; j++) {
//			cout << ary2[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

#include "Heap.h"

int main(void) {
	element dat[] = { 69,10,30,2,16,8,31,22,6,3,9,5,7,1,9 };
	int cnt = sizeof(dat) / sizeof(element);
	HeapType Heap(cnt);
	Heap.creatHeap();

	printf("\n 입력자료:\t"); p_out(dat, cnt);
	printf("\n\n Heap Tree:\n");
	for (int a = 0; a < cnt; a++) {
		Heap.insertHeap(dat[a]);
		Heap.printHeap();
	}
	printf("\n Delete Heap:\n");
	for (int a = 1; a <= cnt; a++) {
		printf("\n Delete Value: %d\n", Heap.deleteHeap());
		Heap.printHeap();
	}
}