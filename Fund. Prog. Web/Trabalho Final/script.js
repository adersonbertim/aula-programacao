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

    // Verificar se pelo menos uma nota e peso foram fornecidos
    if (validGradesAndWeights.length === 0) {
        alert('Por favor, insira pelo menos uma nota e um peso.');
        return;
    }

    // Calcular a soma dos pesos e a soma ponderada das notas
    const totalWeight = validGradesAndWeights.reduce((sum, item) => sum + item.weight, 0);
    const weightedSum = validGradesAndWeights.reduce((sum, item) => sum + item.grade * item.weight, 0);

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
