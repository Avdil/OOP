using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class B {
    private int[] mas = new int[20];
    public int this[int add]  //индексатор
    {
        get { return mas[add]; }
        set { mas[add] = value; }
    }
}

namespace Lab4_5
{
    class Program
    {
        static void Main(string[] args)
        {
        }
    }
}
