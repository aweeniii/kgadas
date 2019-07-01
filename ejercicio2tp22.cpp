#include <iostream>
#define N 2
using namespace std;

int main() {
	int V[N][N]={1,2,3,4};
	int i, j, aux, xx, yy;
	cout<<"Qué onda gente";
	
	for (i=0; i<N; i++){
		for (j=0; i<N; j++){
			if (V[i][j]>aux){
				aux=V[i][j];
				xx=i;
				yy=j;
			}
		}
	}
	cout<<"El valor mayor es "<<aux<<" en la ubicación"<<xx<<", "<<yy<<" de la matriz"<<endl;
	
	for (i=0; i<N; i++){
		for (j=0; i<N; j++){
		cout<<V[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
