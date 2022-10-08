using System;

class Program
{
    public static void Main(string[] args)
    {
        double num
       double numero2;
    double divisao, potencia1, potencia2;

    Console.WriteLine("Digite um número: ");
    numero1 = double.Parse(Console.ReadLine());
    Console.WriteLine("Digite um número: ");
    numero2 = double.Parse(Console.ReadLine());

    potencia1 = Math.Pow(numero1,5);
    potencia2 = Math.Pow(numero2,7);

    if(numero1>=numero2){
      divisao = numero1/numero2;
      Console.WriteLine("A divisão de {0} por {1} é {2}!\n", numero1, numero2, divisao);
    }else
{
    divisao = numero2 / numero1;
    Console.WriteLine("A divisão de {0} por {1} é {2}!\n", numero2, numero1, divisao);
}

Console.WriteLine("{0} elevado à quinta potência é {1} e {2} elevado à sétima potência é {3}", numero1, potencia1, numero2, potencia2);

Console.ReadKey();

    
    
  }
}
