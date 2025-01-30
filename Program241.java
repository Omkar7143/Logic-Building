import java.util.*;

class int MultiplicationDigits(int iNo)
{
  int iDigits = 0;
  int iMult = 1;

  while (iNo != 0) 
  {
    iDigits = iNo % 10;
    iMult = iMult * iDigit;
    iNo = iNo / 10;
  }
  return iMult;
}


class Program241

{
    public static void main(String A[])
    {
        //find factor is even
        Scanner sobj = new Scanner(System.in)
        int iVale = 0, iRet = 0;

        System.out.println("Enter Nnumber :");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.MultiplicationDigits(iValue);

        System.out.println("Multiplication of digits :",+Ret);
    }
}

/* 
i = 456
o = 


 */
