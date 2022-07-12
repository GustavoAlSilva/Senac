function insert(num) {
    let numero = document.getElementById('visor').innerHTML;
    document.getElementById('visor').innerHTML = numero + num;
}

function insertOperator(simbol) {
    calculate()
    insert(simbol)
}

function reset() {
    document.getElementById('visor').innerHTML = "";
}

function calculate() {
    let calculo = document.getElementById('visor').innerHTML;
    if (calculo) {
        document.getElementById('visor').innerHTML = eval(calculo)
    } else {
        document.getElementById('visor').innerHTML = ""
    }
}