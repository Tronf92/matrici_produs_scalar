#include <iostream>
using namespace std;

void produs_scalar(int matrice[100][100],int n,int m);
void afisare(int matrice[100],int n,int m);

void citire(int n,int m){
	int i,j,matrice[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout << "matrice[" << i << "][" << j << "] = " ;
			cin >> matrice[i][j];
		}
	}
	produs_scalar(matrice,n,m);
}

void produs_scalar(int matrice[100][100],int n,int m){
	int i,j=0;
	int produs[100],p=0;
	produs[p]=0;
	for(i=0;i<n;i+=2){
		for(j=0;j<m;j++){
			if(i+1>n)
				break;
			produs[p]+=matrice[i][j]*matrice[i+1][j];
		}
		p++;
		produs[p]=0;
	}
	afisare(produs,p,m);
}

void afisare(int matrice[100],int n,int m){
	int e=0;
	for(e;e<n;e++){
		cout << matrice[e] << endl;
	}
}


int main(){
	int n,m;
	cout << "Introduceti dimensiunea matricei:" << endl;
	cout << "Matricea este de forma N*M cu N par" << endl;
	cout << "\t\t N:";
	cin >> n;
	cout << "\t\t M:";
	cin >> m;
	if(n%2!=0){
		while(n%2!=0){
			cout << "N trebuie sa fie par" << endl;
			cout << "Introduceti N:" << endl;
			cin >> n;
		}
	}
	citire(n,m);
	system("pause");
	return 0;
}
