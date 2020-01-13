using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace Stocks
{
    class Program
    {
        static void Main(string[] args)
        {
            StockPortfolio portfolio = new StockPortfolio();
 
            portfolio.Name = "'Sinar Dunia Portfolio'";
 
            portfolio.AddStock(55.81f);
            portfolio.AddStock(74.52f);
            portfolio.AddStock(92.88f);
 
            StockStatistics stats = portfolio.ComputeStatistics();
            Console.WriteLine("Nama Produk: " + portfolio.Name + "\n");
            CustomWriteLine("Average Stock Price", stats.AverageStock);
            CustomWriteLine("Highest Stock Price", stats.HighestStock);
            CustomWriteLine("Lowest Stock Price", stats.LowestStock);
        }
 
        static void CustomWriteLine(string description, float result)
        {
            Console.WriteLine($"{description}: {result:C} \n", description, result);
        }
    }
}