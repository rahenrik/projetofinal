
/*minha proposta é um software que recebe, nome, tipo de medicação, data de inicio e data final do tratamento, 
quantidade de comprimidos  e etc. que permita pesquisar por nome do paciente e que traga todas as informações
anteriores, também gostaria que o mesmo informace o momento de tomar a medicação.*/

/*-----------------------------------------------------------------------------------------------------------*/
#include<string>
#include<iostream>

int main(int argc, char const *argv[])
{
    //declaração da variavél dia inicial do tratamento
    int dia_ini = 0;
    int mes_ini = 0;
    int ano_ini = 0;
    
    //declaração da variavél dia final do tratamento
    int dia_final = 0;
    int mes_final = 0;
    int ano_final = 0;

    //declaração da variavél para o nome do paciente
    std::string nome_paciente;

    //declara~ção da variavél para o nome da medicação
    std::string nome_medicamento;

    //declaração da variavel para tipo de medicação - será uma variavel d tipo inteiro para se usar switch
    int tipo_medicamento;

    /*declaração da variavel para quantidade de medicamento que será utilizado pelo paciente, pode ser
    comprimido ou volume eem ml*/
    float dosagem;

    //declaração de variavél para sexo vou usar switch
    int sexo;

    //declaração da varriavel para idade
    int idade;

    //declaração variavel escolha
    char escolha_loop;
 /*------------------------------------------------------------------------------------------------*/
    //limpando a memoria *VERIFICAR SE REALMENT ÉE NECESSÁRIO FAZER ISSO
   // std::cin.ignore();

    system("clear");
    std::cout<<"Enter para continuar";
    while (true)
{
    //system("clear");
    std::cin.ignore();
    //solicitando o nom do paciente
    std::cout<<"Digite o nome do paciente: "<<std::endl;
    std::getline(std::cin, nome_paciente);
    system("clear");
    /*-----------------------------------------------------------------------------------------------*/
    //limpando a memoria *VERIFICAR SE REALMENT ÉE NECESSÁRIO FAZER ISSO
   // std::cin.ignore();

    //solicitando idade
    std::cout<<"Digite a idade do paciente: "<<std::endl;
    std::cin>>idade;
    system("clear");
    //solicitado sexo do paciente
    std::cout<<"Informe o sexo do paciente - 1 para masculino  e 2 para feminino: "<<std::endl;
    std::cin>>sexo;
    system("clear");
 /*----------------------------------------------------------------------------------------------*/   
    //limpando a memoria *VERIFICAR SE REALMENT ÉE NECESSÁRIO FAZER ISSO
    std::cin.ignore();

    //solicitando o nome do medicamento
    std::cout<<"Digite o nome do medicamento: "<<std::endl;
    std::getline(std::cin, nome_medicamento);

    //limpando a memoria *VERIFICAR SE REALMENT ÉE NECESSÁRIO FAZER ISSO
    //std::cin.ignore();
    system("clear");
 /*--------------------------------------------------------------------------------------------------*/   
    //recebendo o tipo de medicamento
    std::cout<<"Informe a apresentação do medicamento - 1 para comprimido e 2 para liquido: "<<std::endl;
    std::cin>>tipo_medicamento;
    system("clear");
    switch (tipo_medicamento)
    {
    case 1:
        std::cout<<"Digita a quantidade de comprimidos em unidades: "<<std::endl;
        std::cin>>dosagem;
        
        break;
    case 2:
        std::cout<<"Digite o volume do medicamento em ml: "<<std::endl;
        std::cin>>dosagem;
        break;
        
    default:
        std::cout<<"Opção invalida"<<std::endl;
        break;
    }
    system("clear");
 /*------------------------------------------------------------------------------------------------------*/
    //recebendo as datas de inicio e de termino do tratamento
    std::cout<<"Por favor informe o dia, mês e ano do inicio do tratamento conforme seja solicitado:"<<std::endl;
    std::cout<<"Informe o dia: "<<std::endl;
    std::cin>>dia_ini;  
    system("clear"); 

    std::cout<<"Informe o mês: "<<std::endl;
    std::cin>>mes_ini; 
    system("clear");

    std::cout<<"Informe o ano: "<<std::endl;
    std::cin>>ano_ini; 
    system("clear");

    std::cout<<"Por favor informe o dia , mês e ano do final do tratamento conforme seja solicitado: "<<std::endl;
    std::cout<<"Informe o dia: "<<std::endl;
    std::cin>>dia_final;
    system("clear");

    std::cout<<"Informe o mês: "<<std::endl;
    std::cin>>mes_final;
    system("clear");

    std::cout<<"Informe o ano: "<<std::endl;
    std::cin>>ano_final;

  /*--------------------------------------------------------------------------------------------------------*/
    system("clear");
    //exibição
    //nome
    std::cout<<nome_paciente<<std::endl;    
    //idade
    std::cout<<idade<<std::endl;
    //sexo
    if (sexo==1)
    {
        std::cout<<"Masculino"<<std::endl;
    }
    else
    {
        std::cout<<"Feminino"<<std::endl;
    }
    //medicameno
    std::cout<<nome_medicamento<<std::endl;
    //tipo medicamneto
    if (tipo_medicamento==1)
    {
        std::cout<<"Comprimido "<<dosagem<<" unidades."<<std::endl;
    }
    else
    {
        std::cout<<"Liquido "<<dosagem<<" ml."<<std::endl;
    }
    //datas
    std::cout<<"Data de inicio do tratamento: "<<dia_ini<<"/"<<mes_ini<<"/"<<ano_ini<<std::endl;
    std::cout<<"Data de final do tratamento: "<<dia_final<<"/"<<mes_final<<"/"<<ano_final<<std::endl;
    system("Pause");
    system("clear");
}
}


