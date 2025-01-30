import java.util.*;


class Rectangle 
{
    public int CalculateArea(int A, int  B)
    int  iArea = 0;
    iArea = A * B;
    return iArea;
}
class Program234
{
    public static void main(String A[])
    {
       int iNo1 = 0, iNo2 = 0;
       float fAns = 0.0f;

       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter obtained marks : ");
       iNo1 = sobj.nextInt();

       System.out.println("Enter total marks : ");
       iNo2 = sobj.nextInt();

       
       Rectangle robj  = new Rectangle();
       fAns = robj.CalculatePercentage(iNO1, iNo2);
       
       System.out.println("Addition is : "+Ans);
    }
}

/**     
 
  
 */