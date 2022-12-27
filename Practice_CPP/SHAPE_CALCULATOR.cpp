#include <iostream>
using namespace std;

class shape
{
  public:
  string a = "ERASE";
  int p = 2;
    void erase()
    {
      while(p != 0)
      {
          cout << "Type ERASE to erase the shape..." << endl;
      cin >> a ;
      if (a == "ERASE")
      {
      cout << " " << endl;
      cout << "The shape has been erased. " << endl;
      p=0;
      }
      else
      {
          cout << "Failed to erase, Try Again!" << endl;
      }
      };
      cout << " " << endl;
    };
//     public: 
// void qsn(int n)
// {
//      cout << "finished? press 0 ---- to continue press 1" << endl;
//      cin >> n;
// }
};

class circle : public shape
{

 private:
   double radius;

   public:
  void Val(double radius)
  {
    this->radius=radius;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the circle is ---- " << 3.1416*(radius*radius)<<endl;
      cout << " "<< endl;
    };

    public:
    void drawn()
    {
        string b = "DRAW";
        int q=2;

        while(q != 0)
      {
          cout << "Type DRAW to draw the circle..." << endl;
      cin >> b ;
      if (b == "DRAW")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      };

    };
};
class square : public shape
{
    private:
    int side;

    public:
  void Val(double side)
  {
    this->side=side;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the Square is ---- " << side * side <<endl;
      cout << " "<< endl;
    };

    public:
    void drawn()
    {
       string b = "DRAW";
        int q=2;

        while(q != 0)
      {
          cout << "Type DRAW to draw the square..." << endl;
      cin >> b ;
      if (b == "DRAW")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      };
    };
};
class rectangle : public shape
{
       private:
    int length, width;

    public:
  void Val(int length, int width)
  {
    this->length = length;
    this->width = width;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the RECTANGLE is ---- " << length * width <<endl;
      cout << " "<< endl;
    };

    public:
    void drawn()
    {
       string b = "DRAW";
        int q=2;

        while(q != 0)
      {
          cout << "Type DRAW to draw the rectangle..." << endl;
      cin >> b ;
      if (b == "DRAW")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      };
    };
};
class triangle : public shape
{
      protected:
    double base, hight;

    public:
  void Val(double base, double hight)
  {
    this->base = base;
    this->hight = hight;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the TRIANGLE is ---- " << 0.5 * base * hight <<endl;
      cout << " "<< endl;
    };

    public:
    void drawn()
    {
       string b = "DRAW";
        int q=2;

        while(q != 0)
      {
          cout << "Type DRAW to draw the triangle..." << endl;
      cin >> b ;
      if (b == "DRAW")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      };
    };
};
class parallelogram : public shape
{
  private:
    double base, hight;

    public:
    void Val(double base, double hight)
    {
      this-> base = base;
      this -> hight = hight;
    }

  public:
    void shape_calc()
    {
      cout << "The area of the PARALLELOGRAM is ---- " << base * hight << endl;
    }

    public:
    void drawn()
    {
       string b = "DRAW";
        int q=2;

        while(q != 0)
      {
          cout << "Type DRAW to draw the parallelogram..." << endl;
      cin >> b ;
      if (b == "DRAW")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      }
    }
};

class trapezium: public shape
{
    private:
    double length1;
    double length2;
    double hight;

   public:
    void Val( double length1, double length2, double hight)
    {
    this-> length1=length1;
    this->length2=length2;
    this-> hight=hight;
    }

    public:
    void shape_calc()
    {
      cout << "The area of the TRAPEZIUM is ---- " << 0.5 * (length1+length2) * hight << endl;
    }

    public:
    void drawn()
    {
       string b = "TRPZ";
        int q=2;

        while(q != 0)
      {
          cout << "Type TRPZ to draw the parallelogram..." << endl;
      cin >> b ;
      if (b == "TRPZ")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      }
    }


};

class ellipse : public shape
{
    private:
    double majorAxis;
    double minorAxis;

    public:
    void Val(double majorAxis, double minorAxis)
    {
        this->majorAxis = majorAxis;
        this->minorAxis = minorAxis;
    }

    public:
    void shape_calc()
    {
        cout << "The are of the ELLIPSE is ---- " << 3.1416 * majorAxis * minorAxis <<endl;
    }
    public:
    void drawn()
    {
       string b = "ELLIPSE";
        int q=2;

        while(q != 0)
      {
          cout << "Type ELLIPSE to draw the parallelogram..." << endl;
      cin >> b ;
      if (b == "ELLIPSE")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      }
    }
};

class sector : public shape
{
    private:
    double radious;
    double theta;

    public:
    void Val(double radious, double theta)
    {
        this-> radious = radious;
        this-> theta = theta;
    }

    public:
    void shape_calc()
    {
        cout << "The area of the Sector is ---- " << (theta/360) * 3.1416 * ( radious * radious)  <<endl;
       cout << " " << endl;
     }

    public:
    void drawn()
    {
       string b = "SECTOR";
        int q=2;

        while(q != 0)
      {
          cout << "Type SECTOR to draw the parallelogram..." << endl;
      cin >> b ;
      if (b == "SECTOR")
      {
      cout << " " << endl;
     cout << "Successfully drawn" << endl;
      q=0;
      }
      else
      {
          cout << "Failed!" << endl;
      }
      }
    }

};



int main()
{
    double R;
    double S;
    double L1;
    double L2;
    double b;
    double h;
    double B;
    double H;
    double VH;
    double MA;
    double mA;
    double r;
    double T;
    int L;
    int W;
    int sel;
    int n=1;

    while (n!= 0)
    {
     cout << "Please choose to calculate" << endl;
     cout << " "<< endl;
     cout << "1. Circle" << endl;
     cout << "2. Square" << endl;
     cout << "3. Rectangle" << endl;
     cout << "4. Triangle" << endl;
     cout << "5. Parallelogram" << endl;
     cout << "6. Trapezium" << endl;
     cout << "7. Ellipse" << endl;
     cout << "8. Sector" << endl;
     cout << " " << endl;
     cin >> sel;

     if (sel == 1)
     {
        circle c;
        cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter RADIOUS of the circle" << endl;
    cin >> R;
    c.Val(R);
    c.shape_calc();
    c.drawn();
    cout << "..........................." << endl;
    c.erase();
    cout << "finished? press 0 ---- to continue press 1" << endl;
    cin >> n;
     }
    else if(sel == 2)
     {
        square s;
        cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter SIDE of the square" << endl;
    cin >> S;
    s.Val(S);
    s.shape_calc();
    s.drawn();
    cout << "..........................." << endl;
    s.erase();
    cout << "finished? press 0 ---- to continue press 1" << endl;
     cin >> n;
     }
     else if(sel == 3)
     {
        rectangle r;
        cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter Length of the rectangle" << endl;
    cin >> L ;
    cout << "Enter Width of the rectangle" << endl;
    cin >> W;
    r.Val(L,W);
    r.shape_calc();
    r.drawn();
    cout << "..........................." << endl;
    r.erase();
    cout << "finished? press 0 ---- to continue press 1" << endl;
     cin >> n;
     }
     else if(sel == 4)
     {
        triangle t;
        cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter Base of the triangle" << endl;
    cin >> B ;
    cout << "Enter Hight of the triangle" << endl;
    cin >> H;
    t.Val(B , H);
    t.shape_calc();
    t.drawn();
    cout << "..........................." << endl;
    t.erase();
    cout << "finished? press 0 ---- to continue press 1" << endl;
     cin >> n;
     }
     else if (sel==5)
     {
       parallelogram pr;
       cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter Base" << endl;
    cin >> b ;
    cout << "Enter Hight" << endl;
    cin >> h;
     pr.Val(b, h);
    pr.shape_calc();
    pr.drawn();
    cout << "..........................." << endl;
    pr.erase();
    cout << "finished? press 0 ---- to continue press 1" << endl;
     cin >> n;
     }
    else if (sel==6)
     {
       trapezium tr;
       cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter Length 1" << endl;
    cin >> L1;
    cout << "Enter Length 2" << endl;
    cin >> L2;
    cout<<"Enter vertical Hight"<<endl;
    cin >> VH;
    tr.Val(L1, L2, VH);
    tr.shape_calc();
    tr.drawn();
    cout << "..........................." << endl;
    tr.erase();
    cout << "finished? press 0 ---- to continue press 1" << endl;
     cin >> n;
     }
    else if(sel == 7)
     {
        ellipse el;
        cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter Major Axis of the ellipse" << endl;
    cin >> MA ;
    cout << "Enter Minor Axis of the ellipse" << endl;
    cin >> mA;
    el.Val(MA,mA);
    el.shape_calc();
    el.drawn();
    cout << "..........................." << endl;
    el.erase();
    el.qsn(n);
    cout << "finished? press 0 ---- to continue press 1" << endl;
     cin >> n;
    }
    else if(sel == 8)
     {
        sector sc;
        cout << "processing..." << endl;
        cout << " " << endl;
    cout << "Enter radious of the main circle which contains the sector" << endl;
    cin >> r;
    cout << "Enter theta or angle" << endl;
    cin >> T;
    sc.Val(r, T);
    sc.shape_calc();
    sc.drawn();
    cout << "..........................." << endl;
    sc.erase();
    cout << "finished? press 0 ---- to continue press 1" << endl;
     cin >> n;
     }
     else
     {
        cout << "==FAILED!==" << endl;
        cout << " " << endl;
     }
    }

    return 0;
};