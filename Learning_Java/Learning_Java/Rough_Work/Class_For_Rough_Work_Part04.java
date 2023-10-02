package com.Learning_Java.Rough_Work;

import java.util.Scanner;

class prime {

    protected prime() {
        Scanner sc = new Scanner(System.in);
        long n = 0, length = 0;
        System.out.print("Enter the nth number to print first n prime number: ");
        n = sc.nextLong();
        sc.close();
        System.out.println("first " + n + " prime numbers are: ");
        for (long i = 1; length < n; i++) {
            if (isPrime(i)) {
                System.out.println(i);
                length++;
            }
        }
    }

    boolean isPrime(long n) {
        if (n == 1) {
            return false;
        }
        for (long i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

public class Class_For_Rough_Work_Part04 {

    public static void main(String[] args) {
        prime p = new prime();
    }
}
