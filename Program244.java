import java.util.*;

class int AdditionDigits(int iNo)
{
 
  int iSum = 0;

  while(iNo != 0) 
  {
     iNo % 10;


    iSum = iSum +( iNo % 10;);
    
    iNo = iNo / 10;
  }
  return iSum;
}



class Program243

{
    public static void main(String A[])
    {
       
        Scanner sobj = new Scanner(System.in);
        int iVale = 0, iRet = 0;

        System.out.println("Enter Nnumber :");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.AdditionDigits(iValue);

        System.out.println("Multiplication of digits :",+Ret);
    }
}

/* 
i = 450
o = 20


 */
