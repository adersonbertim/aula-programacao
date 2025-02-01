document.getElementById('gradeForm').addEventListener('submit', function(event) {
    event.preventDefault();

    // Coletar notas e pesos
    const grades = [
        parseFloat(document.getElementById('grade1').value),
        parseFloat(document.getElementById('grade2').value),
        parseFloat(document.getElementById('grade3').value),
        parseFloat(document.getElementById('grade4').value)
    ];

    const weights = [
        parseFloat(document.getElementById('weight1').value),
        parseFloat(document.getElementById('weight2').value),
        parseFloat(document.getElementById('weight3').value),
        parseFloat(document.getElementById('weight4').value)
    ];

    // Filtrar apenas as notas e pesos que foram fornecidos
    const validGradesAndWeights = grades.map((grade, index) => ({
        grade: grade,
        weight: weights[index]
    })).filter(item => !isNaN(item.grade) && !isNaN(item.weight) && item.weight > 0);

    // Calcular a soma dos pesos fornecidos
    const totalWeight = validGradesAndWeights.reduce((sum, item) => sum + item.weight, 0);

    // Verificar se a soma dos pesos fornecidos é 10
    if (totalWeight !== 10) {
        alert('A soma dos pesos fornecidos deve ser igual a 10.');
        return;
    }

    // Calcular a média ponderada
    const weightedSum = validGradesAndWeights.reduce((sum, item) => sum + item.grade * item.weight, 0);
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
