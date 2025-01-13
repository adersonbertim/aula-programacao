function tabuada(){
    let num = parseInt(document.getElementById("numero").value);
    let resposta = document.getElementById("res");
    resposta.innerHTML = "";

    for(let i = 0; i <= 10; i++){
        resposta.innerHTML += num + " X " + i + " = " + (num * i) + "<br>";
    }
}