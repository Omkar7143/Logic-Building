    import java.util.*;

class ArrayX
{
    public int Arr[];
    
    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }
    public int Maximum()
    {
        int i = 0, iSum = 0;
        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] >iMax)
            {
                iMax = Arr[i];
            }
        }
        return iMax;
    }
}
class Program263

{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength = 0, i = 0;

        System.out.println("Enter the number of elements :");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();
        iRet = aobj.Maximum();


     

       
        }
}
/*  

call garbej collector for java finalize
i = 2 
10
20
30
40


*/