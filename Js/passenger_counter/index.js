// document.getElementById("count-el").innerText=5
let count = 0
function increment() {
    count += 1
    document.getElementById("count-el").innerText=count
};

let saveEl = document.getElementById("save-el")

function save() {
    let entries = saveEl.textContent +" - " + count
    saveEl.innerText = entries
    count = 0
    document.getElementById("count-el").innerText = count
}