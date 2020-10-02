int problem_1(){
    int sum = 0;
    int i;
    for(i=0; i < 1000; i++){
        if(i%3==0 || i%5 ==0) sum+=i;
    }
    return sum;
}

int problem_5(){
    int i = 100;
    int k;
    int check = 1;
    while (check){
        for(k = 2; k <= 20; k++)
        {
            if(i%k != 0) break;
            if(k == 20){
            check = 0;
            return i;}
        }
        i++;
    }
    return -1;
}