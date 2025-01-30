import java.util.*;

class Arithematic 
{
    public int iValue1;
    public int iValue2;

    Arithematic(int A,int B)
    {
        iValue1 = A;
        iValue2 = B;
    }

    public  int Addition(int A , int B)
    {
        int iResult = 0;
        iResult = iValue1 + iValue2;
        return iResult;
    }
}
class Program232
{
    public static void main(String A[])
    {
       int iNo1 = 0, iNo2 = 0, iAns = 0;

       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter First number : ");
       iNo1 = sobj.nextInt();

       System.out.println("Enter Second number : ");
       iNo2 = sobj.nextInt();
       
       Arithematic aobj = new Arithematic(iNo1,iNo2);
       Ans = aobj.Addition();
       
       System.out.println("Addition is : "+Ans);
    }
}

/**     
 
  
 */