package com.Learning_Java;

interface myCamera {
  void takeSnap();

  void recordVideo();
  /*
  private void greet() {
    System.out.println("Good morning...");
  }
  */
  default void record4kVideo() {
    // greet();
    System.out.println("recording In 4k...");
  }
}

interface myWifi {
  String[] getNetworks();

  void connectNetworks(String Networks);
}

class myCellPhone {
  public void callNumber(int Number) {
    System.out.printf("Calling %d...\n", Number);
  }

  public void pickCall() {
    System.out.println("Connecting...");
  }
}

class mySmartPhone extends myCellPhone implements myCamera, myWifi {
  public void takeSnap() {
    System.out.println("taking snap...");
  }

  public void recordVideo() {
    System.out.println("recording Video...");
  }
  /*
  @Override
  public void record4kVideo() {
    System.out.println("taking snap and recording in 4k...");
  }
  */
  public String[] getNetworks() {
    String[] Networks = {"MotoE7plus...", "Bharat5Pro...", "SamsungM02..."};
    return Networks;
  }

  public void connectNetworks(String Network) {
    System.out.printf("Connecting to %s...", Network);
  }
}

public class Learning_Java_Chapter11_Part3 {

  public static void main(String[] args) {
    mySmartPhone ms = new mySmartPhone();

    // ms.greet; Not Allowed
    ms.record4kVideo();

    System.out.println();

    ms.callNumber(1234567890);

    System.out.println();

    ms.pickCall();

    System.out.println();

    ms.takeSnap();

    System.out.println();

    ms.recordVideo();

    System.out.println();

    String[] network = ms.getNetworks();
    for (String item : network) {
      System.out.println(item);
    }
    System.out.println();

    ms.connectNetworks("RealmeC12");
  }
}
