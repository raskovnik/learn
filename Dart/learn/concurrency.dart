import "dart:isolate";

void sayHello(var msg) {
  print("Hello from: ${msg}");
}

void main() {
  Isolate.spawn(sayHello, "John!!");
  Isolate.spawn(sayHello, "Steve");
  Isolate.spawn(sayHello, "Keith");

  print("Hello from main1");
  print('Hello from main2');
  print("Hello from main3");
  
}