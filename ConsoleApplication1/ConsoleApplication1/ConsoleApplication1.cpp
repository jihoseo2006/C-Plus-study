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

#include <iostream>
using namespace std;

class MyTime {
private:
	int hh, mm, ss, tss;
public:
	int Cvt_H2S(MyTime tt);
	MyTime Cvt_S2H(int ssp);
	void showme(MyTime tt);
	MyTime(int h, int m, int s);
};
void MyTime::showme(MyTime tt) {
	cout << tt.hh << "시간\t" << tt.mm<< "분\t" << tt.ss << "초\t" << tt.tss << endl;
}

MyTime::MyTime(int h, int m, int s) {
	hh = h, mm = m, ss = s;
	tss = h * 60 * 60 + m * 60 + s;
}

int MyTime::Cvt_H2S(MyTime tt) {
	tt.tss = tt.hh * 60 * 60 + tt.mm * 60 + tt.ss;
	return tt.tss;
}

int main() {
	MyTime t1(7,29,48);

	t1.showme(t1);

}