import java.util.*;

class complex {
  int real, imag;

  complex(int real, int imag) {
    this.real = real;
    this.imag = imag;
  }

  complex add(complex c) {
    return new complex(this.real + c.real, this.imag + c.imag);
  }

  complex substract(complex c) {
    return new complex(this.real - c.real, this.imag - c.imag);
  }

  complex multiply(complex c) {
    int real = this.real * c.real - this.imag * c.imag;
    int imag = this.real * c.imag + this.imag * c.real;
    return new complex(real, imag);
  }

  void print() {
    if (imag >= 0) {
      System.out.println(real + " + " + imag + "i");
    } else {
      System.out.println(real + " - " + imag + "i");
    }
  }
}

class ComplexNumber {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter First Complex Number : ");
    int r1 = sc.nextInt();
    int i1 = sc.nextInt();
    complex c1 = new complex(r1, i1);
    System.out.println("Enter Second Complex Number : ");
    int r2 = sc.nextInt();
    int i2 = sc.nextInt();
    complex c2 = new complex(r2, i2);

    complex sum = c1.add(c2);  //c1 becomes this .
    complex diff = c1.substract(c2);
    complex mul = c1.multiply(c2);

    System.out.println("Sum : ");
    sum.print();
    System.out.println("Substraction : ");
    diff.print();
    System.out.println("Multiplication : ");
    mul.print();

    sc.close();

  }
}
