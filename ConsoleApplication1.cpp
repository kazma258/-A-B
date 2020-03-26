#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std; 

int main(void){
	char ans[4] = {'1','2','3','4'}; //在此輸入解答 
	char input[4];
	int conA=0 , conB=0;
	while(conA != 4){  //若A數量不=4，則繼續嘗試 
		conA=0 , conB=0;
	    cin >>  input;
	    for(int checkA=0;checkA<4;checkA++){ //判斷A數量 
	    	if(input[checkA]==ans[checkA]){
	    		conA++;
	    		input[checkA]='#'; //將A值修改避免B數量再判斷一次 
	    	}
	    }
	    
	    for(int a=0;a<4;a++){ //判斷B數量 
	    	for(int b=0;b<4;b++){
	    		if (input[a] == ans[b]){
	    			if(a!=b){
	    				conB++;
					}
				break;
				}
			}
		}
	cout << conA << "A" << conB << "B" <<endl;
	}
	
    return 0;
}
