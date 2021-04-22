#include "iostream.h"
main()
{int matrix[3][3],i,acu,j;
 cout<<"digite 9 valores"<<endl;
 for (i=0;i<3; i++)

     for (j=0;j<3; j++)
      {cin>>matrix[i][j];
           cout<<"\t";
      }
     // cout<<endl;
      for(i=0;i<3; i++)
         {acu=0;
          for (j=0;j<3; j++)
              {acu=acu+matrix[j][i];
              }cout<<acu<<"\t";
          }
          system ("pause");
}
