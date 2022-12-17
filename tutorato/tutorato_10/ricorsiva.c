int ricorsiva(int *a,int n, int i){
    if(i==n){
        return 0;
    }
    else if(a[i] > 0){
        return 1 + ricorsiva(a,n,i+1);
    }
    else{
        return 0 + ricorsiva(a,n,i+1);
    }
}