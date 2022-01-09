/******************************************************************************

                    WHAT'S YOU FAVOURITE SHAPE 
*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{   
    // Storing shape_option
    char shape_option[12][30]=
    {
        "Left Triangle",
        "Right Triangle",
        "L.Downward Triangle",
        "R.Downward Triangle",
        "Left Pascal's Triangle",
        "Right Pascal's Triangle",
        "Pyramid",
        "Reverse Pyramid",
        "Diamond",
        "Double Hill",
        "Sandglass",
        "Butterfly",
        
    };
    
    
    
    //Declaring
    
    int i, j;
    int found =0;
    int rows =0;
    char input[30];
    
   /*
    char str1[30] ="Left Triangle";
    char str2[30] ="Right Triangle";
    char str3[30] ="L.Downward Triangle";
    char str4[30] ="R.Downward Triangle";
    char str5[30] ="Left Pascal's Triangle";
    char str6[30] ="Right Pascal's Triangle";
    
    char str7[30] ="Pyramid";
    char str8[30] ="Reverse Pyramid";
    
    char str9[30] ="Diamond";
    char str10[30] ="Double Hill";
    char str11[30] ="Sandglass";
    char str12[30] ="Butterfly";
    
    
    
    
    
    */
    
    // What do you want 
    printf("Howdy , What Shape are you looking for today??\n\n");
    printf("These are our offerings :\n");
    printf("%s | %s | %s | %s \n", shape_option[0], shape_option[1], shape_option[2], shape_option[3]);
    printf("%s | %s | %s | %s \n", shape_option[4], shape_option[5], shape_option[6], shape_option[7]);
    printf("%s | %s | %s | %s \n", shape_option[8], shape_option[9], shape_option[10],shape_option[11]);
    printf("\nFeel free to pick your favourite shape!:\n");

   gets(input);


    //Check input Shape
    for(i=0;i<12;i++)
    {
       
        if(strcmp(input, shape_option[i]) ==0)
        {
            found = 1;
            printf("%s Right Away !\n", input);
            break;
        }
        
       
        
    }
    

     // Start Printing Shape
    if(found==1){
  
        printf("How big do You want your %s ?\n",shape_option[i]);


    // Check Number aviod int too small / large
        do{  
            scanf("%d", &rows);
            if(rows<2 || rows >51){
                if(rows<2){
                    printf("Sorry that's too SMALL, We are unable to print that\n");
                }
                else if(rows>51){
                    printf("Sorry that's too BiG, We are unable to print that\n");
                }
               printf("Please Choose the size of %s between 3 and 50\n", shape_option) ;
            }
            else {
                break;
            }
            
        }while(1);
        
        printf("Cool,here is your %d Rows %s: \n",rows ,shape_option[i]); 
        printf("Grabing Shape Option %d: %s\n", i ,shape_option[i]);
       
       
       int shape_number=i;
        
        switch(shape_number) {
            
            
         case 0 :
         {        // Left Triangle
             
            for(i=1;i<=rows;i++){
            for(j=i;j<=rows;j++){
               printf("  ");
           }
           for(j=1;j<=i;j++){
               printf("* ");
           }
            
            printf("\n");
        }
        
         printf("%s, There you have it !\n",shape_option[0]);
    
        break;
             
         }   
         
         case 1 :   
             {     // Right Triangle
    
                for(i=1;i<=rows;i++){
                for(j=1;j<=i;j++){
                   printf("* ");
               }
                printf("\n");
            }
            
             printf("%s, There you have it !\n",shape_option[1]);
        
            break;
      
                 
             }   
         
         case 2 :{ // L Downward Triangle
                 
                for(i=1;i<=rows;i++){
                for(j=1;j<=i;j++){
                   printf("  ");
               }
               for(j=i;j<=rows;j++){
                   printf("* ");
               }
                printf("\n");
            }
            
             printf("%s,There you have it !\n",shape_option[2]);
             
             break;
             }
        case 3 :{ // R Downward Triangle
    
                for(i=1;i<=rows;i++){
                   for(j=rows;j>=i;j--){
                       printf("* ");
                   }
                    printf("\n");
                }
                
            printf("%s, There you have it !\n",shape_option[3]);
             
             break;
            }
        
        case 4: { //Left Pascal's Triangle
                       for(i=1;i<rows;i++){
               for(j=1;j<=i;j++){
                   printf("* ");
               }
               
         
                printf("\n");
            
           
            }
            for(i=1;i<=rows;i++){
    
               for(j=i;j<=rows;j++){
                   printf("* ");
               }
               
         
                printf("\n");
            
           
            }
            printf("%s, here you have it !\n",shape_option[4]);
             
             break;
            
            }
            
        case 5: {  //Right Pascal's Triangle
                       for(i=1;i<rows;i++){
    
               for(j=i;j<=rows;j++){
                   printf("  ");
               }
               for(j=1;j<=i;j++){
                   printf("* ");
               }           
         
                printf("\n");
            
           
            }
            
            for(i=1;i<=rows;i++){
    
               for(j=1;j<=i;j++){
                   printf("  ");
               }
               for(j=rows;j>=i;j--){
                   printf("* ");
               }
               
         
                printf("\n");
            
           
            }
                
            printf("%s, There you have it !\n",shape_option[5]);
             
             break;    
                
            }
            
        case 6: { //Pyramid
            for(i=1;i<=rows;i++){
               for(j=rows;j>=i;j--){
                   printf("  ");
               }
               for(j=1;j<i;j++){
                   printf("* ");
               }
               for(j=1;j<=i;j++){
                   printf("* ");
               }
                printf("\n");
            }            
             printf("%s, There you have it !\n",shape_option[6]);
                 
                 break;      
                
            }
        case 7:{  // Reverse Pyramid
            
                       for(i=1;i<=rows;i++){  
               for(j=1;j<=i;j++){
                   printf(" ");
               }
               for(j=i;j<=rows;j++){
                   printf("* ");
               }
    
              
                printf("\n");
            }
                 printf("%s,There you have it !\n",shape_option[7]);
                 
                break;      
            
            }
               

        
        
        case 8: { //Diamond
                for(i=1;i<rows;i++)
            {   
                for(j=rows;j>=i;j--){
                    printf("  ");
                }
                for(j=1;j<i;j++){
                    printf("* ");
                }
                for(j=1;j<=i;j++){
                    printf("* ");
                }
        
             
              printf("\n");
            }
            
            for(i=1;i<=rows;i++){
                for(j=1;j<=i;j++){
                    printf("  ");
                }
                for(j=i;j<rows;j++){
                    printf("* ");
                }
                for(j=rows;j>=i;j--){
                    printf("* ");
                }
                printf("\n");
            }
                printf("%s,There you have it !\n",shape_option[8]);
                 
                break; 
                
                }
                
        
        case 9: { // Double Hill 
        
             for(i=1;i<=rows;i++){    //First Hill
           for(j=rows;j>=i;j--){
               printf("  ");
           }
           for(j=1;j<i;j++){
               printf("* ");
           }
           for(j=1;j<=i;j++){
               printf("* ");
           }
           
           
           
           for(j=i+2;j<=rows;j++){ // Void Triangle aka reverse Hill
               printf("  ");
           }
           
           
           for(j=rows;j>i;j--){ // Second Hill
               printf("  ");
           }

           for(j=1;j<i;j++){
               printf("* ");
           }
           for(j=1;j<=i;j++){
               printf("* ");
           }
           
           
           
            printf("\n");
        }
            printf("%s,There you have it !\n",shape_option[9]);
                 
            break;   
        
        }
        
    case 10: {  // Snadglass
              for(i=1;i<rows;i++){  // Upper Sandglass  Print Less Row
            for(j=1;j<=i;j++){
            printf(" ");
        }
        
        for(j=i;j<=rows;j++){
            printf("* ");
        }
           
            printf("\n");
        }
        
      
        
      for(i=1;i<=rows;i++){  // Bottom Sandglass
            for(j=i;j<=rows;j++){
                printf(" ");
            }
        
        
             for(j=1;j<=i;j++){
            printf("* ");
        }

            printf("\n");
        
       
        }
            printf("%s,There you have it !\n",shape_option[10]);
                 
            break;   
        
        
    }
    
    case 11: { //Butterfly
                for(i=1;i<rows;i++){ 
           for(j=1;j<=i;j++){   //Upper L Triangle
               printf("* ");
           }
           for(j=i;j<rows;j++){ //Void for Left Upper
               printf("  ");
           }
           
           
            for(j=i;j<rows;j++){  // Viod for Right Upper // <rows = -1
               printf("  ");
           }
           for(j=1;j<=i;j++){  // Upper R Triangle
               printf("* ");
           }           
           
           
     
            printf("\n");
       
        }
        
        
        
        
        for(i=1;i<=rows;i++){  //Bot L Triangle

           for(j=i;j<=rows;j++){
               printf("* ");
           }
           
 
           for(j=1;j<i;j++){ // Bot Viod Left // <rows = -1
               printf("  ");
           }
           
           for(j=1;j<i;j++){ // Bot Viod Right
               printf("  ");
           }
           

           for(j=rows;j>=i;j--){ //Bot R Triangle
               printf("* ");
           } 
           
     
            printf("\n");
        
       
        }
            printf("%s,There you have it !\n",shape_option[11]);
                 
            break;   
    }
        
        
        
        
        // ALL Case Option Finished 
    } 
        
        
        
}
    
    
    //Fucked
        
     else{
            printf("Can't Run %s Shape , You can restart the program to try again.\n", input);
            
            return 0;
        }
    return 0;
}