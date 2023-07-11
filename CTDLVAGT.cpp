#include<stdio.h>
#include<stdlib.h>
struct node{
	node *link;
	int n;
}*T, *p, *q;
int main(){
    int x[10], i, n;
    printf("Nhap so nut: ");
    scanf("%d",&n);
    printf("Nhap gia tri cua cac nut:\n");
    for(i=0;i<n;i++){
    	printf("x[%d] = ", i+1);
    	scanf("%d", &x[i]);
	}
    //Tao danh sach lien ket don
    T = NULL;
    for(i=0;i<n;i++){
       q = new node;
       q->link = T;
       q->n = x[i];
       T = q;
	}
    p = T;
    while(p!=NULL){
    	printf("%d <= ", p->n);
    	p = p->link;
    }
    //Tao danh sach theo chieu nguoc lai
    T = NULL;
    for(i=0;i<n;i++){
    	q = new node;
    	q->link = NULL;
    	q->n =x[i];
    	if(T == NULL)
    	    T = q;
    	else{
    		p = T;
    		while(p->link != NULL) p = p->link;
    		p->link = q;
		}
	}
	printf("\n");
	p = T;
	while(p != NULL){
	    printf("%d => ", p->n);
	    p = p->link;
	}
	return 0;
}

