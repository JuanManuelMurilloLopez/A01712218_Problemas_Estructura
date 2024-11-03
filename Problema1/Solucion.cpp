/*
 * Autor: Juan Manuel Murillo López A01712218
*/

class Solution {
public:
    bool is_vowel(char c){
        char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(unsigned int i = 0; i < 10; i++){
            if(c == vowels[i]){
                return true;
            }
        }
        return false;
    }

    string sortVowels(string s) {
        //Creamos un vector para guardar las vocales a encontrar en nuestro string
        vector<char> vowels;

        //Recorremos el string en busca de vocales
        for(unsigned int i = 0; i < s.length(); i++){
            if(is_vowel(s[i])){
                //Añadimos las vocales encontradas a nuestro vector
                vowels.push_back(s[i]);
            }
        }

        //Ordenamos las vocales encontradas
        sort(vowels.begin(), vowels.end());

        //Inicializamos el índice del que vamos a partir en nuestro vector 
        int index = 0;

        //Recorremos el string en busca de vocales
        for(unsigned int i = 0; i < s.length(); i++){
            if(is_vowel(s[i])){
                //Al encontrar una vocal, se actualiza su valor a la vocal ordenada
                s[i] = vowels[index];
                //Aumentamos el índice para recorrer el vector de vocales ordenadas
                index++;
            }
        }

        //Regresamos el string actualizado
        return s;
    }
};
