float calcolaDelta(float a,float b, float c){
    float r;
    r=b*b-(4*a*c);
    return r;
}


int esistonoSoluzioniReali(float a, float b,float c){
    float delta;
    delta=calcolaDelta(a,b,c);
    if(delta>=0)
        return 1;
    else 
        return 0;
}


float soluzione1(float a, float b, float c){
    float risultato;
    float delta=calcolaDelta(a,b,c);
    delta=sqrt(delta);
    risultato=((b*-1)+delta)/(2*a);
    return risultato;
}


float soluzione2(float a, float b, float c){
    float risultato;
    float delta=calcolaDelta(a,b,c);
    delta=sqrt(delta);
    risultato=((b*-1)-delta)/(2*a);
    return risultato;
}

