package com.Learning_Java.Rough_Work;

public class Class_For_Rough_Work_Part12 {

    public static long returnHashValue(long hashCode[], int index) {
        long random = (long) (Math.random() * 9999999999L) + 1111111111L;

        for (int i = 0; i < index; i++) {
            if (hashCode[i] == random) {
                random = returnHashValue(hashCode, index);
            }
        }

        return random;
    }

    public static void generate() {
        long[] hashCode = new long[95];

        for (int index = 0; index < hashCode.length; index++) {
            hashCode[index] = returnHashValue(hashCode, index);
        }

        for (int i = 0; i < hashCode.length; i++) {
            System.out.printf(hashCode[i] + " ");
            if ((i + 1) % 2 == 0) {
                System.out.println();
            }
        }

        System.out.print("\n\n");
    }

    public static void main(String[] args) {

        for (int i = 0; i < 3; i++) {
            generate();
        }
    }
}
