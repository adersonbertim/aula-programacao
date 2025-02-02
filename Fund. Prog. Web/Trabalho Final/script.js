document.getElementById('gradeForm').addEventListener('submit', function(event) {
    event.preventDefault();

    // Arrays para armazenar notas e pesos
    const grades = [];
    const weights = [];

    // Coletar notas e pesos dos campos
    for (let i = 1; i <= 4; i++) {
        const grade = parseFloat(document.getElementById(`grade${i}`).value);
        const weight = parseFloat(document.getElementById(`weight${i}`).value);

        // Verificar se a nota e o peso são válidos
        if (!isNaN(grade) && !isNaN(weight) && weight > 0) {
            grades.push(grade);
            weights.push(weight);
        }
    }

    // Verificar se pelo menos uma nota e peso foram fornecidos
    if (grades.length === 0) {
        alert('Por favor, insira pelo menos uma nota e um peso.');
        return;
    }

    // Calcular a soma dos pesos e a soma ponderada das notas
    let totalWeight = 0;
    let weightedSum = 0;

    for (let i = 0; i < grades.length; i++) {
        totalWeight += weights[i];
        weightedSum += grades[i] * weights[i];
    }

    // Calcular a média ponderada
    const weightedAverage = weightedSum / totalWeight;

    // Determinar o status do aluno
    let status;
    let additionalInfo = '';

    if (weightedAverage >= 7) {
        status = 'Aprovado';
    } else if (weightedAverage >= 1.7) {
        status = 'Apto para Exame';
        // Calcular a nota necessária no exame para passar
        const requiredExamGrade = (14 - weightedAverage).toFixed(2);
        additionalInfo = `Você precisa de ${requiredExamGrade} no exame para ser aprovado.`;
    } else {
        status = 'Reprovado';
    }

    // Exibir o resultado
    document.getElementById('result').innerHTML = `
        Média: ${weightedAverage.toFixed(2)}<br>
        Status: ${status}<br>
        ${additionalInfo}
    `;
});
