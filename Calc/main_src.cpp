
#include "main_calc.h"
#include "fstream"

using namespace Calc;
using namespace System;
using namespace System::Windows::Forms;



[STAThreadAttribute]
void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calc::MyForm form;
	Application::Run(% form);

}


double a = 0.;
double b = 0.;
int l = 0;
double* c = new double[l];
double result = 0.;
int action;
int percent;
int percent_num;
int result_stat;
double percent_result;

int getting_result(double, double, double[], int);
int devide(double, double, double);
int multiply(double, double, double);
int reduce(double, double, double);
int summ(double, double, double []);




int getting_result(double a, double b, double c[],  int action) {
   /** if (action == 1) {
        return devide(a, b, c);
    } else if (action == 2) {
        return multiply(a, b, c);
    } else if (action == 3) {
        return reduce(a, b, c);
    } else **/
        if (action == 4) {
        return summ(a, b, c);
       
    } 
   
}
int devide(double a, double b, double c) {
    if (c > 0 && result > 0) {
        result /= c;
    }
    else {
        result = a / b;

    }
    return result;
}
int multiply(double a, double b, double c) {
    if (c > 0 && result > 0) {
        result *= c;
    }
    else {
        result = a * b;

    }
    return result;
}
int reduce(double a, double b, double c) {
    if (c > 0 && result > 0) {
        result -= c;
    }
    else {
        result = a - b;

    }
    return result;
}
int summ(double a, double b, double c[]) {
    if (result > 0) {
        for (int i = 0; l >= i; i++) {
            result += c[i];
            
        }
        
      
    } else {
        result = a + b;
        
       
       }
   
    return result;
}



 System::Void Calc::MyForm::num_dot_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text = System::Convert::ToString((form->Text) + ",");
     return System::Void();
 }


 System::Void Calc::MyForm::num_0_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("0");
     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     } 

     return System::Void();
 }

 System::Void Calc::MyForm::num_1_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("1");
     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
     return System::Void();
 }

 System::Void Calc::MyForm::num_2_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("2");
      if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
     
     return System::Void();
 }

 System::Void Calc::MyForm::num_3_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("3");
      if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
    
    
     return System::Void();
 }

 System::Void Calc::MyForm::num_4_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("4");
     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
    
     return System::Void();
 }

 System::Void Calc::MyForm::num_5_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("5");
     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
    
     return System::Void();
 }

 System::Void Calc::MyForm::num_6_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("6");
     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
    
     return System::Void();
 }

 System::Void Calc::MyForm::num_7_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("7");
     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
 
     return System::Void();
 }

 System::Void Calc::MyForm::num_8_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("8");
     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
    
     return System::Void();
 }

 System::Void Calc::MyForm::num_9_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text += System::Convert::ToString("9");

     if (a > 0) {
         b = Convert::ToDouble(form->Text);
     }
     return System::Void();
 }

 System::Void Calc::MyForm::clear_Click(System::Object^ sender, System::EventArgs^ e)
 {
     form->Text = System::Convert::ToString("");
     a = 0;
     b = 0;
     c = 0;
     result = 0;
     action = 0;

     return System::Void();
 }

 System::Void Calc::MyForm::num_devide_Click(System::Object^ sender, System::EventArgs^ e)
 {
     action = 1;
     if (result != 0) {
         c[l + 1] = Convert::ToDouble(form->Text);
         form->Text = System::Convert::ToString("");
         // getting_result(a, b, c, action);


     }
     else if (b != 0) {
         form->Text = System::Convert::ToString("");
         getting_result(a, b, c, action);


     }
     else  if (result == 0) {
         a = Convert::ToDouble(form->Text);

     }
    
     form->Text = System::Convert::ToString(""); 
     return System::Void();
 }

 System::Void Calc::MyForm::num_multiply_Click(System::Object^ sender, System::EventArgs^ e)
 {
     action = 2;
     if (result != 0) {
         c[l + 1] = Convert::ToDouble(form->Text);
         form->Text = System::Convert::ToString("");
         // getting_result(a, b, c, action);


     }
     else if (b != 0) {
         form->Text = System::Convert::ToString("");
         getting_result(a, b, c, action);


     }
     else  if (result == 0) {
         a = Convert::ToDouble(form->Text);

     }
    
     form->Text = System::Convert::ToString("");
     return System::Void();
 }

 System::Void Calc::MyForm::num_reduce_Click(System::Object^ sender, System::EventArgs^ e)
 {
     action = 3;

     if (result != 0) {
         c[l + 1] = Convert::ToDouble(form->Text);
         form->Text = System::Convert::ToString("");
         // getting_result(a, b, c, action);


     }
     else if (b != 0) {
         form->Text = System::Convert::ToString("");
         getting_result(a, b, c, action);


     }
     else  if (result == 0) {
         a = Convert::ToDouble(form->Text);

     }
    
    
     form->Text = System::Convert::ToString("");
     return System::Void();
 }

 System::Void Calc::MyForm::num_plus_Click(System::Object^ sender, System::EventArgs^ e)
 {
     action = 4;
      if (result != 0 && result_stat != 1) {
        
         c[l] = Convert::ToDouble(form->Text);
         form->Text = System::Convert::ToString("");
         l++;
        // getting_result(a, b, c, action);
       
      
     } else if (b != 0) {
         form->Text = System::Convert::ToString("");
         getting_result(a, b, c, action);
         a = 0;
         b = 0;


     } else  if (result == 0) {
         a = Convert::ToDouble(form->Text);

     }

     form->Text = System::Convert::ToString("");
     
         return System::Void();
 }


 System::Void Calc::MyForm::num_result_Click(System::Object^ sender, System::EventArgs^ e)
 {
     if (result_stat == 1) {
         c[0] = Convert::ToDouble(form->Text);
         form->Text = System::Convert::ToString("");
         getting_result(a, b, c, action);
         form->Text = System::Convert::ToString(result);
         action = 0;
         c[0] = 0;
         l = 0;
     } else if (result != 0) {
       l++;
       c[l] = Convert::ToDouble(form->Text);
       form->Text = System::Convert::ToString("");
       getting_result(a, b, c, action);
       form->Text = System::Convert::ToString(result);
       action = 0;
       for (int i = 0; l >= i; i++) {
           c[i] = 0;

       }
       l = 0;
       result_stat = 1;



     } else if (a != 0 && b != 0 && result == 0 && l == 0) {
    
       getting_result(a, b, c, action);
       form->Text = System::Convert::ToString(result);
       a = 0;
       b = 0;
       action = 0;
       return System::Void();

   } 
     
    
 }



System::Void Calc::MyForm::percent_value_TextChanged(System::Object^ sender, System::EventArgs^ e) {    
    if ((percent_value->Text) != "" && (num->Text) != "") {
        percent = Convert::ToInt32(percent_value->Text);
        percent_num = Convert::ToInt32(num->Text);
        percent_result = (double)percent_num * ((double)percent / 100);
        p_result->Text = System::Convert::ToString(percent_result);
    } else {
        num->Text = System::Convert::ToString("");
        p_result->Text = System::Convert::ToString("");
    }

     return System::Void();
 }

System::Void Calc::MyForm::num_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    if ((num->Text) != "" && (percent_value->Text) != "") {
        percent = Convert::ToInt32(percent_value->Text);
        percent_num = Convert::ToInt32(num->Text);
        percent_result = (double)percent_num * ((double)percent / 100);
        p_result->Text = System::Convert::ToString(percent_result);
    }
    else {
        percent_value->Text = System::Convert::ToString("");
        p_result->Text = System::Convert::ToString("");
    }
    return System::Void();
}


System::Void Calc::MyForm::open_file_Click(System::Object^ sender, System::EventArgs^ e) {
   std::ifstream file("data.txt");
   action = 4;
   
       file >> a;
       file >> b;
       getting_result(a, b, c, action);
       form->Text = System::Convert::ToString(result);
       file.close();

   

    return System::Void();
}



