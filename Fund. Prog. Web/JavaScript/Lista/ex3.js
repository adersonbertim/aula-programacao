function verificaPalindromo(){
    let palavra = document.getElementById("palavra").value;
    let palavraReversa = palavra.split('').reverse().join('');
    let resultado = document.getElementById("res");


    if(palavra == palavraReversa){
        resultado.textContent = "É palindromo!";
    }else{
        resultado.textContent = "Não é palindromo!";
    }
}