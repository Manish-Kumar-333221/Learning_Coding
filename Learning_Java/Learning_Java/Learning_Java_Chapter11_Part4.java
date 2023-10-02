package com.Learning_Java;

interface sample{
  void meth1();
  void meth2();
}
interface mySample {
  void meth3();
}

interface childSampleInterface extends sample, mySample{
  void meth4();
  void meth5();
}

class mySampleClass implements childSampleInterface {
  public void meth1(){
    System.out.println("meth1");
  }
  public void meth2(){
    System.out.println("meth2");
  }
  public void meth3(){
    System.out.println("meth3");
  }
  public void meth4(){
    System.out.println("meth4");
  }
  public void meth5(){
    System.out.println("meth5");
  }
}

public class Learning_Java_Chapter11_Part4 {

  public static void main(String[] args) {
  mySampleClass ms = new mySampleClass();
  ms.meth1();
  ms.meth2();
  ms.meth3();
  ms.meth4();
  ms.meth5();

  }

}
