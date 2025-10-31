#!/bin/bash

echo "🔧 Compilazione dei file .cpp in corso..."

for file in exercises/*.cpp; do
    echo "Compilo $file..."
    if g++ -c "$file" -o /dev/null; then
        echo "✅ $file compilato correttamente"
    else
        echo "❌ Errore di compilazione in $file"
    fi
done