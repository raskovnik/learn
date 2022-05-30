import 'dart:async';
import 'dart:isolate';
import "dart:io";

var isolate;

void start() async {
  ReceivePort receivePort = ReceivePort();
  isolate = await Isolate.spawn(runTimer, receivePort.sendPort);
  receivePort.listen((data) {
    stdout.write("Receiving: " + data + " ");
  });
}

void runTimer(SendPort sendport) {
  int counter  = 0;
  Timer.periodic(new Duration(seconds: 1), (Timer t) {
    counter++;
    String msg = 'notification' + counter.toString();
    stdout.write("Sending: " + msg + " -");
    sendport.send(msg);
  });
}

void stop() {
  if (isolate != null) {
    stdout.writeln("Stopping isolate...");
    isolate.kill(priority: Isolate.immediate);
    isolate = null;
  }
}

void main() async {
  stdout.writeln("Starting isolate...");
  start();
  stdout.writeln("Press enter key to quit");
  await stdin.first;
  stop();
  stdout.writeln("Bye!");
  exit(0);
}