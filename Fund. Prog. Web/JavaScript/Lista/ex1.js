function verificacao(){
    const num = document.getElementById('numero').value;
    let resultado = document.getElementById("res"); 

    if(num % 2 == 0){
        resultado.textContent = " O numero é par";
    }else{
        resultado.textContent = "O número é ímpar";
    }
}