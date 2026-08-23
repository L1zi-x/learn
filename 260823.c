#include <stdio.h>
int main() {
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX;
    int numOf0;
    int result = -1;

    //读入3*3矩阵
    for(i = 0; i < size; i++){
        for(j = 0; j < size; j++){
            scanf("%d", &board[i][j]);
        }
    }

    //===== 检查所有行 =====
    for(i = 0; i < size && result == -1; i++){
        numOfX = 0;
        numOf0 = 0;
        for(j = 0; j < size; j++){
            if(board[i][j] == 1){
                numOfX++;
            } else {
                numOf0++;
            }
        }
        if(numOfX == size){
            result = 0;
        }else if(numOf0 == size){
            result = 1;
        }
    }

    //===== 检查所有列 =====
    if(result == -1){
        for(j = 0; j < size && result == -1; j++){
            numOfX = 0;
            numOf0 = 0;
            for(i = 0; i < size; i++){
                if(board[i][j] == 1){
                    numOfX++;
                } else {
                    numOf0++;
                }
            }
            if(numOfX == size){
                result = 0; 
            }else if(numOf0 == size){
                result = 1;
            }
        }
    }

    //===== 检查对角线(新增) =====
    if(result == -1){
        //主对角线 i==j
        numOfX = 0;
        numOf0 = 0;
        for(i = 0; i < size; i++){
            if(board[i][i]==1) numOfX++;
            else numOf0++;
        }
        if(numOfX == size) result = 0;
        else if(numOf0 == size) result = 1;

        //副对角线 i+j == size-1
        if(result == -1){
            numOfX = 0;
            numOf0 = 0;
            for(i = 0; i < size; i++){
                j = size - 1 - i;
                if(board[i][j]==1) numOfX++;
                else numOf0++;
            }
            if(numOfX == size) result = 0;
            else if(numOf0 == size) result = 1;
        }
    }

    //输出最终结果
    printf("%d\n", result);

    return 0;
}