class HelloWorld {
  static void Main() {
    // IPerson p = new CPerson();
    // p.setName("Alice");
    // Console.WriteLine(p.getName());
    
    IList l = new Stack();
    Console.WriteLine(l.whoAmI());
  }
}

class Queue : IList {
    public string whoAmI(){
        return "Queue";
    }    
}


class Stack : IList {
    public string whoAmI(){
        return "Stack";
    }    
}

class LinkedList : IList {
    public string whoAmI(){
        return "LinkedList";
    }    
}

interface IList {
    string whoAmI();
}
