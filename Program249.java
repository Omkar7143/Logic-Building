import java.util.*;

class Digit

public void CountDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 9)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    System.out.println("Frequency of 7 is : "+iCount);
}




class Program243

{
    public static void main(String A[])
    {
       
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter Nnumber :");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.CountDigits(iValue);

    }
}

/* 
i = 55555
o = 5



 */
