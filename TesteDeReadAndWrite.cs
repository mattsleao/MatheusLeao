using System;

class Program
{
    public static void Main(string[] args)
    {
        int n1, n2;
        double n3, n4;
        float n5;
        bool b1;
        // Leitura de Inteiros
        Console.Write("Digite um número inteiro: ");
        n1 = int.Parse(Console.ReadLine());
        Console.Write("Digite outro número inteiro: ");
        n2 = Convert.ToInt32(Console.ReadLine());
        // Leitura de valores ponto-flutuante
        Console.Write("Digite um número real: ");
        n3 = double.Parse(Console.ReadLine());
        Console.Write("Digite outro número real: ");
        n4 = Convert.ToDouble(Console.ReadLine());
        Console.Write("Digite mais um número real: ");
        n5 = float.Parse(Console.ReadLine());
        Console.Write("Digite um booleano (digite trueou false): ");
        b1 = bool.Parse(Console.ReadLine());

        Console.WriteLine("{0}, {1}, {2}, {3}, {4}, {5}", n1, n2, n3, n4, n5, b1); 
    Console.ReadKey();
  }
}
