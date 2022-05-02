int somar(int x, int y){
    return(x + y);
}
int subitrair(int x, int y){
    return(x - y);
}
int multiplicar(int x, int y){
    return(x * y);
}
int dividir(int x, int y){
    if(y){
        return(x / y);
    }else{
        printf("Impossivel Calcular \n");
    }
}
