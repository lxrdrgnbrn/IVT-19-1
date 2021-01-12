float ForceGravity(float a,float b,float c)//Функция расчёта силы притяжения
{
    float g,f;
    g=6.67;//Гравитационная постоянная
    f=(a*b*g)/(c*c);
    return f;
}
