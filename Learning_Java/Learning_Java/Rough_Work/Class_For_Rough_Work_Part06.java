package com.Learning_Java.Rough_Work;

public class Class_For_Rough_Work_Part06 {

  public static void main(String[] args) {

    String a = "* ", b = " ", c = "  ";

    System.out.println("// Problem 01\n");
    int A1 = 4;
    int A2 = 6;
    for (int i = 1; i <= A1; i++) {
      for (int j = 1; j <= A2; j++) {
        System.out.print(a);
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 02\n");
    int B1 = 9;
    int B2 = 14;
    for (int i = 1; i <= B1; i++) {
      for (int j = 1; j <= B2; j++) {
        if (i == 1 || i == B1 || j == 1 || j == B2) {
          System.out.print(a);
        } else {
          System.out.print(c);
        }
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 03\n");
    int C = 10;
    for (int i = 1; i <= C; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print(a);
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 04\n");
    int D = 10;
    for (int i = D; i >= 1; i--) {
      for (int j = i; j >= 1; j--) {
        System.out.print(a);
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 05\n");
    int E = 10;
    for (int i = E; i >= 1; i--) {
      for (int j = 1; j <= E; j++) {
        if (j < i) {
          System.out.print(c);
        } else {
          System.out.print(a);
        }
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 06\n");
    int F = 10;
    for (int i = 1; i <= F; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print(j + b);
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 07\n");
    int G = 10;
    for (int i = G; i >= 1; i--) {
      for (int j = 1; j <= i; j++) {
        System.out.print(j + b);
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 08\n");
    int H1 = 10;
    int H2 = 1;
    for (int i = 1; i <= H1; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print(H2++ + b);
      }
      System.out.println();
    }

    System.out.println();

    System.out.println("// Problem 09\n");
    int I = 10;
    for (int i = 1; i <= I; i++) {
      for (int j = 1; j <= i; j++) {
        if ((i + j) % 2 == 0) {
          System.out.print(1 + b);
        } else {
          System.out.print(0 + b);
        }
      }
      System.out.println();
    }
    System.out.println();

    System.out.println("// Problem 10\n");
    int J = 10;
    for (int i = 1; i <= J; i++) {
      // Upper Part
      if (i <= J / 2) {
        for (int j = 1; j <= J; j++) {
          // Stars
          if (j <= i) {
            System.out.print(a);
          } // Spaces
          else if (j <= J - i) {
            System.out.print(c);
          } // Stars
          else {
            System.out.print(a);
          }
        }
        System.out.println();
      } // Lower Part
      else {
        for (int k = J; k >= 1; k--) {
          // Stars
          if (k >= i) {
            System.out.print(a);
          } // Spaces
          else if (k > J - i + 1) {
            System.out.print(c);
          } // Stars
          else {
            System.out.print(a);
          }
        }
        System.out.println();
      }
    }
    System.out.println();

    System.out.println("// Problem 11\n");
    int K = 6;
    for (int i = K; i > 0; i--) {
      for (int j = 1; j < K + i; j++) {
        if (j < i) {
          System.out.print(c);
        } else {
          System.out.print(a);
        }
      }
      System.out.println();
    }
    System.out.println();

    System.out.println("// Problem 12\n");
    int L = 5;
    for (int i = 1; i <= L; i++) {
      for (int j = 1; j <= L; j++) {
        if (j <= L - i) {
          System.out.print(b);
        } else {
          System.out.print(i + b);
        }
      }
      System.out.println();
    }
    System.out.println();

    System.out.println("// Problem 13\n");
    int M = 5;
    for (int i = 1; i <= M; i++) {
      for (int j = 1; j <= (M + (i - 1)); j++) {
        if (j > M - i) {
          if (j <= M) {
            System.out.print(((M + 1) - j) + b);
          } else {
            System.out.print((j - (M - 1)) + b);
          }
        } else {
          System.out.print(c);
        }
      }
      System.out.println();
    }
    System.out.println();

    System.out.println("// Problem 14\n");
    int N1 = 19;
    int N = N1 / 2;
    for (int i = 1; i <= N1; i++) {
      if (i <= N) {
        for (int j = 1; j <= N + (i - 1); j++) {
          if (j <= N - i) {
            System.out.print(c);
          } else {
            System.out.print(a);
          }
        }
        System.out.println();
      } else {
        for (int k = 1; k <= i + (i - ((i - N) * 3)); k++) {
          if (k < i - N) {
            System.out.print(c);
          } else {
            System.out.print(a);
          }
        }
        System.out.println();
      }
    }
    System.out.println();

    System.out.println("// Problem 15\n");
    int O = 3;
    for (int i = O; i > 0; i--) {
      int k = O;
      for (int j = 1; j <= O * i; j++) {
        System.out.print(k + ", ");
        if (j % i == 0) {
          k--;
        }
      }
      System.out.println();
    }
    System.out.println();

    int P = 6;
    System.out.println("// Problem 16\n");
    for (int i = 0; i < P; i++) {
      for (int j = 0; j < P + i; j++) {
        if (j < i) {
          System.out.print(c);
        } else {
          System.out.print(a);
        }
      }
      System.out.println();
    }
    System.out.println();

    int Q = 10;
    System.out.println("// Problem 17\n");
    for (int i = Q; i > 0; i--) {
      for (int j = 0; j < Q; j++) {
        if (j < Q - i) {
          System.out.print(c);
        } else {
          System.out.print(a);
        }
      }
      System.out.println();
    }
    System.out.println();
  }
}
