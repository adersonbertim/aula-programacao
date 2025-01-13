function verificaIdade(){
    let num = document.getElementById("idade").value;
    let resposta = document.getElementById("res");
    if(num <= 15){
        resposta.textContent = "Voto não permitido";
    }else if(num >= 16 && num <= 70){
        resposta.textContent = "Voto obrigatorio";
    }else{
        resposta.textContent = "Voto facultativo";
    }
}