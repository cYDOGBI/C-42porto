#!/bin/bash

EXEC="test"

echo "🔍 Procurando ficheiros .c em subpastas..."

# Encontra todos os ficheiros .c a partir da pasta atual
find . -type f -name "*.c" | while read FILE; do
    echo "=============================="
    echo "📂 Ficheiro: $FILE"
    
    echo "🧪 1. Verificando Norminette..."
    norminette "$FILE"
    echo ""

    echo "🔧 2. Compilando..."
    gcc -Wall -Wextra -Werror "$FILE" -o "$EXEC"

    if [ $? -eq 0 ]; then
        echo "✅ Compilação bem-sucedida!"
        echo "🚀 3. Executando..."
        ./"$EXEC"
    else
        echo "❌ Falha na compilação"
    fi

    # Limpar
    rm -f "$EXEC"
    echo ""
done

