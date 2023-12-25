#include<stdio.h>

int previous = 7;
int main() {
    char player1[10],player2[10];
    printf("Tic Tac Game \n");
    printf("Player1 Enter your name\n");
    scanf("%s",&player1);
    printf("Player2 Enter your name\n");
    scanf("%s",&player2);
    printf("\n");
    printf("\n");
    printf("%s your mark is 0 and you have first turn\n",player1);
    printf("\n");
    printf("%s your mark is 1\n",player2);
    printf("You have following indexes\n1  2  3\n4  5  6\n7  8  9\n");
    int  array[3][3];
    int index = 0;
    int mark = 1;
    
    int current = 5;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++ )
        {
            array[i][j] = 9;
        }
    }
    int flag = 0;
    while(1){
    flag = checker(array,player1,player2);
    if (flag == 1){break;}   //Little Bit of  error here
    printf("Enter the index in which you want to enter your mark \n");
    scanf("%d",&index); 
    // printf("Enter your mark\n");
    // scanf("%d",&mark);
    mark = swapper(mark);
    current = mark;
    if(current != previous){
    if(mark == 0 || mark == 1){
        
        int counter = converter(array,index,mark);
	if(counter == 0){
		printf("Match is drawn");
		break;
	}
    }
    else{
        printf("Mark should be 0 or 1\n");
    }
    
    }
    else{
        printf("You already took your turn\n");
    }
        
    }
    
}


converter(int myName[3][3],int index,int mark)
{
   
    
    if(index == 1){
        if(myName[0][0] == 9){
        myName[0][0] = mark;
        previous = mark;
        }
        else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 2){
        if(myName[0][1] == 9){
        myName[0][1] = mark;
        previous = mark;
        }
         else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 3){
        if(myName[0][2] == 9){
        myName[0][2] = mark;
        previous = mark;
    }
         else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 4){
        if(myName[1][0] == 9){
        myName[1][0] = mark;
        previous = mark;
    }
         else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 5){
        if(myName[1][1] == 9){
        myName[1][1] = mark;
        previous = mark;
        }
         else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 6){
        if(myName[1][2] == 9){
        myName[1][2] = mark;
        previous = mark;
        }
         else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 7){
        if(myName[2][0] == 9){
        myName[2][0] = mark;
        previous = mark;
    }
         else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 8){
        if(myName[2][1] == 9){
        myName[2][1] = mark;
        previous = mark;
    }
         else{
            printf("Already Occupied try again\n");
        }
    }
    else if(index == 9){
        if(myName[2][2] == 9){
        myName[2][2] = mark;
        previous = mark;
            
        }
        else{
            printf("Already Occupied try again\n");
        }
    }
	int counter = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++ )
        {
            
            printf("%d  ",myName[i][j]);
	    if(myName[i][j] == 9){
		counter++;	
	}
        }
        printf("\n");
    }
	return counter;
    
}



checker(int array[3][3],char player1[10],char player2[10])
{
    if(array[0][0] == array[0][1] && array[0][1] == array[0][2]){
        if(array[0][0] != 9){
            if(array[0][0] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
            printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
    if(array[1][0] == array[1][1] && array[1][1] == array[1][2]){
        if(array[1][0] != 9){
        if(array[1][0] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
            printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
    if(array[2][0] == array[2][1] && array[2][1] == array[2][2]){
        if(array[2][0] != 9){
        if(array[2][0] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
            printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
    if(array[0][0] == array[1][0] && array[1][0] == array[2][0]){
        if(array[0][0] != 9){
        if(array[0][0] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
            printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
    if(array[0][1] == array[1][1] && array[1][1] == array[2][1]){
        if(array[0][1] != 9){
        if(array[0][1] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
            printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
    if(array[0][2] == array[1][2] && array[1][2] == array[2][2]){
        if(array[0][2] != 9){
        if(array[0][2] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
            printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
    if(array[0][0] == array[1][1] && array[1][1] == array[2][2]){
        if(array[0][0] != 9){
        if(array[0][0] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
           printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
    if(array[0][2] == array[1][1] && array[1][1] == array[2][0]){
        if(array[0][2] != 9){
        if(array[0][2] == 1){
        printf("%s is a Winner\n",player2);
        return 1;}
        else {
            printf("%s is a Winner\n",player1);
            return 1;
        }
        }
        
    }
}

int swapper(int mark){
    if( mark == 0){
        return 1;
    }
    else if( mark == 1){
        return 0;
    }
}