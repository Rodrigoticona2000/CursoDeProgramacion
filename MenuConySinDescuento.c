 {
    // Write C code here
    printf("******************MENU**********************\n");
    printf("PRODUCTO            *                PRECIO*\n");
    
    printf("*HAMBURGUESA        *                  $390*\n");
    printf("*PAPAS FRITAS       *                  $400*\n");
    printf("*GASEOSA            *                  $200*\n");
    printf("*HELADO             *                  $200*\n");
    printf("*ENSALADA           *                  $150*\n");
    printf("********************************************\n");
    
    
    
    int cantidadHamburguesa;
    int cantidadPapasfritas;
    int cantidadGaseosa;
    int cantidadHelado;
    int cantidadEnsalada;
    
    printf("\n\nINGRESE CANTIDAD DE HAMBURGUESA: ");
    scanf("%d",&cantidadHamburguesa);
    printf("INGRESE CANTIDAD DE PAPAS FRITAS: ");
    scanf("%d",&cantidadPapasfritas);
    printf("INGRESE CANTIDAD DE GASEOSA: ");
    scanf("%d",&cantidadGaseosa);
    printf("INGRESE CANTIDAD DE HELADO: ");
    scanf("%d",&cantidadHelado); 
    printf("INGRESE CANTIDAD DE ENSALADA: ");
    scanf("%d",&cantidadEnsalada);
    int precio= cantidadHamburguesa*390 + cantidadPapasfritas*400 + cantidadGaseosa*200 + cantidadHelado*200 + cantidadEnsalada*150; 
    printf("SU PRECIO FINAL ES %d",precio);
    
    
    int cantidadtotal=cantidadHamburguesa+cantidadPapasfritas+cantidadGaseosa+cantidadHelado+cantidadEnsalada;
printf("\nCANTIDAD TOTAL %d",cantidadtotal);
    
    if (cantidadtotal>=5){
        
       
      int descuento = 0.1 *precio;
      precio= precio-descuento;
       
        printf ("\nPRECIO FINAL CON DESCUENTO = %d",precio);
        
        }
        else {
            printf ("\n PRECIO FINAL=%d" ,precio);
        }
