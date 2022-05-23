void main() {
  var a = 10;
  var res =
      a > 12 ? "Value greater than 10" : "Value lesser than or equal to 10";
  print(res);

  var b = null;
  var c = 12;
  var res1 = b ?? c;
  print(res1);
}
