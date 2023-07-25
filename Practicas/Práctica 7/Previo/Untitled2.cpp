using System;
public class FuncionContarEspacios
{
    public static void Main(string[] args)
    {
        string texto = Console.ReadLine();
 
        int totalEspacios = ContarEspacios(texto);
        Console.WriteLine(totalEspacios);
    }
 
    public static int ContarEspacios(string texto)
    {
        int contador = 0;
        string letra;
 
        for (int i = 0; i < texto.Length; i++)
        {
            letra = texto.Substring(i, 1);
 
            if (letra == " ")
            {
                contador++;
            }
        }
 
        return contador;
    }
}
