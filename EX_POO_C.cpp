#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
  int idade;
  string nome;

public:
  int getIdade(){
    return idade;
  }
 

  Pessoa(int idade, string nome) {
    this->idade = idade;
    this->nome = nome;
  }

  virtual string dizerNome() {
    return "O nome é: " + this->nome;
  }


};

class Professor : public Pessoa {
public:
  Professor(int idade, string nome) : Pessoa(idade, nome) {}
  string dizerNome() override {
    return Pessoa::dizerNome(); 
  }
};

class Aluno : public Pessoa {

private:
  string matricula;

public:
  Aluno(int idade, string nome, string matricula) : Pessoa(idade, nome) {this->matricula=matricula; }
  string dizerNome() override {
    return Pessoa::dizerNome(); 
  }
    virtual string dizerMatricula(){
      return "registrada matricula do aluno : " + this->matricula;
    }

};

int main() {
  Pessoa pessoa(20,"Luiz");
  Professor prof(34,"Marcelo");
  Aluno aluno(18,"Joaozinho","278");

  cout << "Idade da pessoa: " << pessoa.getIdade() << endl;
  cout<<pessoa.dizerNome()<<endl;
  


  cout << "Idade do professor: " << prof.getIdade() << endl;
  cout<<prof.dizerNome()<<endl;
  


  cout << "Idade do aluno: " << aluno.getIdade() << endl;
  cout<< aluno.dizerNome()<<endl;
  cout<<aluno.dizerMatricula()<<endl;

  return 0;
}