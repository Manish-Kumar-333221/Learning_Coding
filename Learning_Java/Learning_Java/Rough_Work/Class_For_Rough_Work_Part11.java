package com.Learning_Java.Rough_Work;

import java.util.Arrays;
import java.util.Scanner;

class UniqueId {
    int i = 0;
    int size = 10000;
    String[] ID = new String[size];
}

class UserData {

    String uniqueId;
    String name;
    int[] dateOfBirth = new int[3];
    long[] phoneNumber = new long[1];
    long[] userHashCode = new long[20];
    long[] hashCode = new long[95];
}

class HashingAlgorithm {
    Scanner sc = new Scanner(System.in);

    void displayHashCode(long[] hashCode) {
        System.out.print("\nYour Password's HashCode is: ");

        for (long element : hashCode) {
            System.out.print(element);
        }
        System.out.println();
    }

    long returnHashCode(char c, long hashCode[]) {
        String a =
                "dmp(Qln K:26|zEJ4gOj]>x&\"qTLZ\\1^N#%}[{_w+<~0SfH75\'!yPD,`RkrUb)$i=W9CoAFM?saX/.G@e3v*;Vt8-hcIuBY";

        return hashCode[a.indexOf(c)];
    }

    void createHashCode(String c, long userHashCode[], long hashCode[]) {
        for (int i = 0; i < 20; i++) {
            userHashCode[i] = returnHashCode(c.charAt(i), hashCode);
        }
    }

    String storeUserPassword() {
        String c;
        String fill = "l]Jt)rd4!u";

        do {
            System.out.printf("(Password length should be of 10 to 20 character): ");
            c = sc.nextLine();
        } while (c.length() < 10 || c.length() > 20);

        if (c.length() < 20) {
            c = c + fill.substring(0, 20 - c.length());
        }
        return c;
    }

    void getUserPassword(long userHashCode[], long hashCode[]) {
        System.out.print("Create Your Password ");
        String c = storeUserPassword();

        createHashCode(c, userHashCode, hashCode);
    }

    int logIn(long userHashCode[], long hashCode[]) {
        System.out.print("\nEnter the Password to Login ");
        String c = storeUserPassword();
        long newHashCode[] = new long[20];
        createHashCode(c, newHashCode, hashCode);

        if (!Arrays.equals(userHashCode, newHashCode)) {
            System.out.print("Password is incorrect.");
            return 0;
        }
        System.out.print("You have successfully Logged in!\n");
        return 1;
    }

    void UserLogIn(long userHashCode[], long hashCode[]) {
        int login;
        do {
            login = logIn(userHashCode, hashCode);
        } while (login != 1);
    }

    long returnHashValue(long hashCode[], int index) {
        long random = (long) (Math.random() * 9999999999L) + 1111111111L;
        for (int i = 0; i < index; i++) {
            if (hashCode[i] == random) {
                random = returnHashValue(hashCode, index);
            }
        }

        return random;
    }

    void generate(long hashCode[]) {
        for (int index = 0; index < 95; index++) {
            hashCode[index] = returnHashValue(hashCode, index);
        }
    }

    boolean isUniqueId(String userUniqueId, UniqueId uniqueId) {
        for (int i = 0; i < uniqueId.i; i++) {
            if (uniqueId.ID[i].equalsIgnoreCase(userUniqueId)) {
                return false;
            }
        }
        uniqueId.ID[uniqueId.i++] = userUniqueId;
        return true;
    }

    void getUserData(UserData user, UniqueId uniqueId) {
        System.out.print("Enter Your Name: ");
        user.name = sc.nextLine();

        System.out.print("Enter Your Date Of Birth(in ('DD' 'MM' 'YYYY') formate): ");
        user.dateOfBirth[0] = sc.nextByte();
        user.dateOfBirth[1] = sc.nextByte();
        user.dateOfBirth[2] = sc.nextShort();

        System.out.print("Enter Your Phone Number: ");
        user.phoneNumber[0] = sc.nextLong();

        System.out.print("Create Your Unique ID (Ex. abcd@uniqueid.in): ");
        String userUniqueId;
        Scanner s = new Scanner(System.in);
        while (true) {
            userUniqueId = s.nextLine();
            boolean isUniqueId = isUniqueId(userUniqueId, uniqueId);
            if (!isUniqueId) {
                System.out.print(userUniqueId + " have been already used: ");
                continue;
            }
            break;
        }
        s.close();
        user.uniqueId = userUniqueId;

        generate(user.hashCode);
    }

    void setUserData(UserData user, UniqueId Id) {

        getUserData(user, Id);
        getUserPassword(user.userHashCode, user.hashCode);
    }

    void getLogIn(UserData user) {
        UserLogIn(user.userHashCode, user.hashCode);
        displayHashCode(user.userHashCode);
    }
}

public class Class_For_Rough_Work_Part11 {

    public static void main(String[] args) {

        HashingAlgorithm algorithm = new HashingAlgorithm();

        UniqueId uniqueId = new UniqueId();

        UserData one = new UserData(), two = new UserData(), three = new UserData();

        algorithm.setUserData(one, uniqueId);
        algorithm.getLogIn(one);
        System.out.println("\n\n");

        algorithm.setUserData(two, uniqueId);
        algorithm.getLogIn(two);
        System.out.println("\n\n");

        algorithm.setUserData(three, uniqueId);
        algorithm.getLogIn(three);
        System.out.println("\n\n");
    }
}
