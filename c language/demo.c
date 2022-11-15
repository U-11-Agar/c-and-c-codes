float matA[];
 int rA, cA;
  float matB;
        int rB, cB;
         float matC;
          int rC, cC; {
    for (int i = 0; i <= rA; i++) {
        for (int j = 0; j <= cB; j++) {
            float sum = 0.0;
            for (int k = 0; k <= rB; k++)
                sum = sum + matA[i * cA + k] * matB[k * cB + j];
            matC[i * cC + j] = sum;