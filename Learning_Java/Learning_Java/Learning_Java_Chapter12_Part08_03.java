package Nothing;

class World1 extends Learning_Java_Chapter12_Part08_01 {}

class World2 extends Hello {
  public World2(String name) {
    super(name);
  }
}

class World3 extends Using {
  public World3() {
    meth2();
  }
}

class World4 extends n {
  public World4() {
    super();
  }
}

public class Learning_Java_Chapter12_Part08_03 {

  public static void main(String[] args) {
    World2 world2 = new World2("Manish Kumar");
    World3 world3 = new World3();
    World4 world4 = new World4();
  }
}
