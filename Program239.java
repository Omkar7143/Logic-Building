import java.util.*;

class int EvenFactors(int iNo)
{
   int iCnt = 0, iSum = 0;

   if(iNo % 2 != 0)
   {
    return 0;
   }

   for(iCnt = 0; iCnt<= (iNo / 2); iCnt++)
   {
    if(iNo % iCnt == 0)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
   }
}


class Program239

{
    public static void main(String A[])
    {
        //find factor is even
        Scanner sobj = new Scanner(System.in)
        int iVale = 0, iRet = 0;

        System.out.println("Enter Nnumber :");
        iValue = sobj.nextInt();

        Nexter nobj = new Nexter
        iRet = nobj. EvenFactor(iValue);
    }
}