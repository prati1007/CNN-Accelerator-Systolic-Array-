void matmul(int A[16][16], int B[16][16], int C[16][16]) {
#pragma HLS PIPELINE
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            int sum = 0;
            for(int k=0;k<16;k++){
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}
