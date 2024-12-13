 printf("enter the mark of math=");
    scanf("%d",&marks[0]);

    printf("enter the mark of phy=");
    scanf("%d",&marks[1]);

    printf("enter the mark of chem=");
    scanf("%d",&marks[2]);

    printf("math-%d, phy-%d, chem-%d\n",marks[0],marks[1],marks[2]);
    printf("percentage=%d",(marks[0]+marks[1]+marks[2])/3);