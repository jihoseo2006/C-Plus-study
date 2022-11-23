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

//기수정렬 코드->일단 여기는 func.cpp
//#include "stack.h"
//void Stack::push(int dat) {
//	if (SP < SZ) {
//		Data[SP] = dat;
//		SP++;
//	}
//	else cout << INVALID_POS;
//}
//int Stack::pop() {
//	if (SP > 0) return Data[--SP];
//	return EMPTY_STACK;
//}
//
//int Stack::iterate_pop(int* org, int cnt) {
//	int tcnt = cnt, dat;
//
//	if (SP > 0) {
//		for (int a = SP - 1; a >= 0; a--) {
//			dat = this->pop();
//			printf("%d ", dat); org[tcnt] = dat;
//			tcnt++;
//		}
//	}
//	return tcnt;
//}
//
//void Radix_Sort(int org[], int SZ) {
//	int Max = 0, Maxdigit;
//	for (int a = 0; a < SZ; a++) {
//		if (org[a] > Max) Max = org[a];
//	}
//	Maxdigit = (int)log10(Max) + 1;
//
//	Stack stack[10];
//	for (int a = 0; a < 10; a++) {
//		stack[a] = Stack(SZ);
//	}
//	int dat = 0, r = 0, deci = 1, direction = 1;
//	if (Maxdigit % 2 == 0) direction = -direction;
//
//	int cnt = 0, si = 0, gg = 9;
//
//	for (int c = 0; c < Maxdigit; c++) {
//		for (int a = 0; a < SZ; a++) {
//			dat = org[a];
//			r = dat / deci % 10;
//			cout << dat << " ";
//			stack[r].push(dat);
//		}
//		cout << endl;
//		cnt = 0;
//		if (direction == 1) { si = 0; gg = 10; }
//		else { si = 9; gg = -1; }
//
//		for (int a = si; a != gg; a += direction) {
//			cnt = stack[a].iterate_pop(org, cnt);
//		}
//		cout << endl << endl;
//		deci *= 10; direction = -direction;
//	}
//	for (int a = 0; a < 10; a++) {
//		stack[a].clear();
//	}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//// index 0은 사용하지 않음으로 배열을 하나 더 추가
//bool visited[9];
//vector<int> graph[9];
//
//void dfs(int x)
//{
//    visited[x] = true;
//    cout << x << " ";
//    for (int i = 0; i < graph[x].size(); i++) // 인접한 노드 사이즈만큼 탐색
//    {
//        int y = graph[x][i];
//        if (!visited[y]) // 방문하지 않았으면 즉 visited가 False일 때 not을 해주면 True가 되므로 아래 dfs 실행
//            dfs(y); // 재귀적으로 방문
//    }
//}
//
//int main(void)
//{
//    /* 위 그래프와 동일하게 정의 */
//    graph[1].push_back(2);
//    graph[1].push_back(3);
//    graph[1].push_back(8);
//
//    graph[2].push_back(1);
//    graph[2].push_back(7);
//
//    graph[3].push_back(1);
//    graph[3].push_back(4);
//    graph[3].push_back(5);
//
//    graph[4].push_back(3);
//    graph[4].push_back(5);
//
//    graph[5].push_back(3);
//    graph[5].push_back(4);
//
//    graph[6].push_back(7);
//
//    graph[7].push_back(2);
//    graph[7].push_back(6);
//    graph[7].push_back(8);
//
//    graph[8].push_back(1);
//    graph[8].push_back(7);
//
//    dfs(1);
//}

#include<iostream>
using namespace std;

#define MX	10
#define FALSE	0
#define TRUE	1

typedef int element;

typedef struct _node {
	element dat;
	struct _node* Link;
} Node;

typedef struct {
	Node* front;
	Node* rear;
} LQueType;

typedef struct GraphType {
	int n;
	int visited[MX];
	Node* adjList_H[MX];
} GraphType;

enum {A,B,C,D,E,F,G,H,I,J};
Node* StackTop = NULL;
int V1, SU1;

LQueType* creatLinkedQue();
int isEmpty(LQueType * LQ);
void EnQue(LQueType* LQ, element item);
element DeQue(LQueType* LQ);
void createGraph(GraphType* g);
void insertVertex(GraphType* g,int v);
void insertEdge(GraphType* g,int u,int v);
void printGraph(GraphType* g);
void BFS_adjList(GraphType* g,int v);

int main() {
	int a;
	element vert[] = { A,B,C,D,E,F,G };
	element in1[] = { A,A,A,A,B,B,B,C,C,D,E,E,F,G };
	element out1[] = { G,E,C,B,F,E,A,D,A,C,B,A,B,A };
	V1 = sizeof(vert) / sizeof(element);
	SU1 = sizeof(in1) / sizeof(element);

	GraphType* G1 = new GraphType;
	createGraph(G1);

	for (int a = 0; a < V1; a++) insertVertex(G1, a);
	for (int a = 0; a < SU1; a++) insertEdge(G1, in1[a], out1[a]);
	cout << "\n\n G1의 인접리스트"; printGraph(G1);
	cout << "\n\n 깊이 우선 탐색>>"; BFS_adjList(G1, A);
}

LQueType* creatLinkedQue() {
	LQueType* LQ = new LQueType;
	LQ->front = NULL;
	LQ->rear = NULL;
	return LQ;
}

int isEmpty(LQueType* LQ) {
	if (LQ->front == NULL) return 1;
	else return 0;
}
void EnQue(LQueType* LQ, element item) {
	Node* Tmp = new Node;
	Tmp->dat = item;	Tmp->Link = NULL;

	if (LQ->front == NULL) {
		LQ->front = Tmp;	LQ->rear = Tmp;
	}
	else {
		LQ->rear->Link = Tmp; LQ->rear = Tmp;
	}
}

element DeQue(LQueType* LQ) {
	Node* old = LQ->front;
	element item;


	if (isEmpty(LQ)) {
		cout << "\n\n THE Queue is Empty !\n";
		return  0;
	}
	else
	{
		item = old->dat; 
		LQ->front = LQ->front->Link; 
		if (LQ->front == NULL) LQ->rear = NULL;
		free(old);
		return item;
	}
}

void createGraph(GraphType* g) {
	g->n = 0;
	for (int v = 0; v < V1; v++) {
		g->visited[v] = 0;
		g->adjList_H[v] = NULL;
	}
}

void insertVertex(GraphType* g, int v) {
	if ((g->n) + 1 > V1) {
		cout << "\n 그래프 정점의 개수를 초과하였습니다";
		return;
	}
	g->n++;
}

void insertEdge(GraphType* g, int u, int v) {
	Node* GNode = new Node;
	if (u >= g->n || v >= g->n) {
		cout << "\n 그래프에 없는 정점입니다";
		return;
	}
	GNode->dat = v;
	GNode->Link = g->adjList_H[u];
	g->adjList_H[u] = GNode;
}

void printGraph(GraphType* g) {
	int a; char t;
	Node* p;
	for (a = 0; a < g->n; a++) {
		t = a + 65;
		cout << "\n 정점" << t << "의 인점 리스트 : " << t;
		p = g->adjList_H[a];
		while (p)
		{
			t = p->dat = 65;
			cout << "->" << t;
			p = p->Link;
		}
	}
}

void BFS_adjList(GraphType* g, int v) {
	Node* w;
	char ch;
	LQueType* Q = creatLinkedQue();
	g->visited[v] = TRUE;

	ch = v + 65; cout << " " << ch;
	EnQue(Q, v);
	while (!isEmpty(Q)) {
		v = DeQue(Q);
		for (w = g->adjList_H[v]; w; w - w->Link) {
			if (!g->visited[w->dat]) {
				g->visited[w->dat] = TRUE;
				ch = w->dat + 65; cout << " " << ch;
				EnQue(Q, w->dat);
			}
		}
	}
}