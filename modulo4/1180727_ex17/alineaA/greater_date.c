int greater_date(unsigned int date1, unsigned int date2){

    int diaDate1 = date1 >> 24;
    int mesDate1 = date1 << ((sizeof(date1) << 3) - 8 );
    mesDate1 = mesDate1 >> ((sizeof(date1) << 3) - 8 );
    int anoDate1 = date1 << 8;
    anoDate1 = anoDate1 >> 16;

    int diaDate2 = date2 >> 24;
    int mesDate2 = date2 << ((sizeof(date2) << 3) - 8 );
    mesDate2 = mesDate2 >> ((sizeof(date2) << 3) - 8 );
    int anoDate2 = date2 << 8;
    anoDate2 = anoDate2 >> 16;

    if(anoDate1 == anoDate2){
        if(mesDate1 == mesDate2){
            if(diaDate1 > diaDate2){
                return date1;
            }else{
                return date2;
            }
        }else{
            if(mesDate1 > mesDate2){
                return date1;
            }else{
                return date2;
            }
        }
    }else{
        if(anoDate1 > anoDate2){
            return date1;
        }else{
            return date2;
        }
    }
}