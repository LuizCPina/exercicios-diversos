#include <iostream>
#include <string>

using namespace std;

class Cachorro {
  // Tudo que seja declarado fora de algum bloco de acesso
  // é considerado privado
public:
  int getIdade(){
    return idade;
  }

  Cachorro(int idade, string nome) {
    this->idade = idade;
    this->nome = nome;
  }

  virtual string latir(string latido) {
    return nome + " está latindo: " + latido;
  }

private:
  int idade;
  string nome;
  
};

class Yorkshire : public Cachorro {
public:
  Yorkshire(int idade, string nome) : Cachorro(idade, nome) {}
  string latir(string latido) override {
    return Cachorro::latir(latido); // Chamando o método da classe base Cachorro
  }
};

int main() {
  Yorkshire dog(15, "Campeao");

  cout << dog.latir("auau") << endl;

  cout << dog.getIdade() << endl;

  return 0;
}
