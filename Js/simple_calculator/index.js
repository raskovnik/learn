let num1 = 8;
let num2 = 2;

document.getElementById("num1-el").textContent = num1
document.getElementById("num2-el").textContent = num2



function add() {
    document.getElementById("eval-el").textContent = "Eval: " + (num1 + num2)
}

function sub() {
    document.getElementById("eval-el").textContent = "Eval: " + (num1 - num2)
}

function mul() {
    document.getElementById("eval-el").textContent = "Eval: " + (num1 * num2)
}

function divide() {
    document.getElementById("eval-el").textContent = "Eval: " + (num1 / num2)
}