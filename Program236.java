import java.util.*;


class Arithematic
{
    public int Power(int A,int B)
    {
        int iCnt = 0;
        int iMult = 1;
        

        for(iCnt = 0; iCnt <= B; iCnt++)
        {
            iMult = iMult * A;
        }
        return iMult;
    }
}
class Program236
{
    public static void main(String A[])
    {
       int iNo1 = 0, iNo2 = 0, iAns = 0;
    

       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter base : ");
       iNo1 = sobj.nextInt();

       System.out.println("Enter index : ");
       iNo2 = sobj.nextInt();

       
       Arithematic aobj  = new Arithematic();
       iAns = aobj.Power(iNo1, iNo2);
       
       System.out.println("Addition is : "+iAns);
    }
}

/**     
 A = 10;
 B = 5;

 Ans 

 10 * 10 * 10 * 10 * 10

 Ans = Ans * 10;
 Ans = Ans * 10;
 Ans = Ans * 10;
 Ans = Ans * 10;
 Ans = Ans * 10;
  
 */