#include<stdio.h>
int main()
{
    int choice;
    char pr;
    converter_entry:
    printf("Welcome to Unit Convertor!\nHere is a list of conversions available!!\n1. Volume\n2. Length\n3. Mass\n4. Temperature\n5. Area\n6. Speed\n7. Power\nEnter corresponding number: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        int v_choice;
        float gal,ml,L;
        printf("Welcome to volume converter!\nHere is a list of volume conversions available!\n1. Milliliters to Gallon\n2. Milliliters to Liters\n3. Gallon to Milliliters\n4. Gallon to Liters\n5. Liters to Milliliters\n6. Liters to Gallon\nEnter the corresponding number: ");
        v_entry:
        scanf("%d",&v_choice);
        if(v_choice==1)
        {
            printf("Enter volume in Milliliters to be converted to Gallons: ");
            scanf("%f",&ml);
            gal=ml/3786.41;
            printf("Volume is %0.3f Gallons\n",gal);
        }
        else if(v_choice==2)
        {
            printf("Enter volume in Milliliters to be converted to Liters: ");
            scanf("%f",&ml);
            L=ml/1000;
            printf("Volume is %0.3f Liters\n",L);
        }
        else if(v_choice==3)
        {
            printf("Enter volume in Gallons to be converted to Milliliters:\n");
            scanf("%f",&gal);
            ml=gal*3785.41;
            printf("Volume is %0.3f Milliliters\n",ml);
        }
        else if(v_choice==4)
        {
            printf("Enter the volume in Gallons to be converted to Liters: ");
            scanf("%f",&gal);
            L=gal*3.785411784;
            printf("Volume is %0.3f Liters\n",L);
        }
        else if(v_choice==5)
        {
            printf("Enter the volume in Liters to be converted to Milliliters: ");
            scanf("%f",&L);
            ml=L*1000;
            printf("Volume is %0.3f Milliliters\n",ml);
        }
        else if(v_choice==6)
        {
            printf("Enter the volume in Liters to be converted to Gallons: ");
            scanf("%f",&L);
            gal=L/3.78541;
            printf("Volume is %0.3f Gallons\n",gal);
        }
        else
        {
            printf("Invalid Choice!! Enter a number between 1 to 6\n");
            goto v_entry;
        }
        printf("Do you wish to continue converting more quantities? (Y or N)\n");
        fflush(stdin);
        scanf("%c",&pr);
        if(pr == 'Y' || pr == 'y')
        goto converter_entry;
    }

    else if(choice==2)
    {
        int l_choice;
        float m,Km,M;
        printf("Welcome to length converter!!\nHere is a list of length conversions available!\n1. Meter to Kilometer\n2. Meter to Miles\n3. Kilometer to Meter\n4. Kilometer to Miles\n5. Miles to Meter\n6. Miles to Kilometer\nEnter the corresponding number: ");
        l_entry:
        scanf("%d",&l_choice);
        if(l_choice==1)
        {
            printf("Enter the length in Meters: ");
            scanf("%f",&m);
            Km=m/1000;
            printf("Length is %0.3f Kilometers\n",Km);
        }
        else if(l_choice==2)
        {
            printf("Enter the length in Meters: ");
            scanf("%f",&m);
            M=m/1609.04;
            printf("Length is %0.3f Miles\n",M);
        }
        else if(l_choice==3)
        {
            printf("Enter the length in Kilometers: ");
            scanf("%f",&Km);
            m=Km*1000;
            printf("Length is %0.3f Meters\n",m);

        }
        else if(l_choice==4)
        {
            printf("Enter the length in Kilometers: ");
            scanf("%f",&Km);
            M=Km/1.60904;
            printf("Length is %0.3f Miles\n",M);
        }
        else if(l_choice==5)
        {
            printf("Enter the length in Miles: ");
            scanf("%f",&M);
            m=M*1609.04;
            printf("Length is %0.3f Meters\n",m);
        }
        else if(l_choice==6)
        {
            printf("Enter the length in Miles: ");
            scanf("%f",&M);
            Km = M * 1.60904;
            printf("Length is %0.3f Kilometers\n",Km);
        }
        else
        {
            printf("Invalid Choice!! Enter a number between 1 to 6\n");
            goto l_entry;
        }
        printf("Do you wish to continue converting more quantities? (Y or N)\n");
        fflush(stdin);
        scanf("%c",&pr);
        if(pr == 'Y' || pr == 'y')
        goto converter_entry;
    }

    else if(choice==3)
    {
        int m_choice;
        float g,kg,p;
        printf("Welcome to Mass converter!!\nHere is a list of mass conversions available!\n1. Grams to Pounds\n2. Grams to Kilograms\n3. Pounds to Grams\n4. Pounds to Kilograms\n5. Kilograms to Grams\n6. Kilograms to Pounds\nEnter the corresponding number: ");
        m_entry:
        scanf("%d",&m_choice);
        if(m_choice==1)
        {
            printf("Enter the mass in Grams: ");
            scanf("%f",&g);
            p=g*0.002205;
            printf("Mass is %0.3f Pounds\n",p);
        }
        else if(m_choice==2)
        {
            printf("Enter the mass in Grams: ");
            scanf("%f",&g);
            kg=g/1000;
            printf("Mass is %0.3f Kilograms\n",kg);
        }
        else if(m_choice==3)
        {
            printf("Enter the mass in Pounds: ");
            scanf("%f",&p);
            g=p*453.592;
            printf("Mass is %0.3f Grams\n",g);
        }
        else if(m_choice==4)
        {
            printf("Enter the mass in Pounds: ");
            scanf("%f",&p);
            kg=p/2.2205;
            printf("Mass is %0.3f Kilograms\n",kg);
        }
        else if(m_choice==5)
        {
            printf("Enter the mass in Kilograms: ");
            scanf("%f",&kg);
            g=kg*1000;
            printf("Mass is %0.3f Grams\n",g);
        }
        else if(m_choice==6)
        {
            printf("Enter the mass in Kilograms: ");
            scanf("%f",&kg);
            p=kg*2.2205;
            printf("Mass is %0.3f Pounds\n",p);
        }
        else
        {
            printf("Invalid Choice!! Enter a number between 1 to 6\n");
            goto m_entry;
        }
        printf("Do you wish to continue converting more quantities? (Y or N)\n");
        fflush(stdin);
        scanf("%c",&pr);
        if(pr == 'Y' || pr == 'y')
        goto converter_entry;
    }

    else if(choice==4)
    {
        int t_choice;
        float cel,far,kel;
        printf("Welcome to temperature converter!\nHere is a list of temperature conversions available!\n1. Celsius to Fahrenheit\n2. Celsius to Kelvin\n3. Fahrenheit to Celsius\n4. Fahrenheit to Kelvin\n5. Kelvin to Celsius\n6. Kelvin to Fahrenheit\nEnter the corresponding number: ");
        t_entry:
        scanf("%d",&t_choice);
        if(t_choice==1)
        {
            cel_far_input:
            printf("Enter temperature in °Celsius to be converted to °Fahrenheit: ");
            scanf("%f",&cel);
            if(cel>=-273.15)
            {
                far=(9*cel/5)+32;
                printf("Temperature is %0.2f °Farenheit\n",far);
            }
            else
            {
                printf("Temperature not in range of celsius scale!! Enter temperature above -273.15°C\n");
                goto cel_far_input;
            }
        }
        else if(t_choice==2)
        {
            cel_kel_input:
            printf("Enter temperature in °Celsius to be converted to Kelvin: ");
            scanf("%f",&cel);
            if(cel>=-273.15)
            {
                kel=cel+273.15;
                printf("Temperature is %0.2f Kelvin\n",kel);
            }
            else
            {
                printf("Temperature not in range of celsius scale!! Enter temperature above -273.15°C!!\n");
                goto cel_kel_input;
            }
        }
        else if(t_choice==3)
        {
            far_cel_input:
            printf("Enter temperature in °Fahrenheit to be converted to °Celsius: ");
            scanf("%f",&far);
            if(far>=-459.67)
            {
                cel=(far-32)*5/9;
                printf("Temperature is %0.2f °Celsius\n",cel);
            }
            else
            {
                printf("Temperature not in range of fahrenheit scale!! Enter temperature above -459.67°F!!\n");
                goto far_cel_input;
            }
        }
        else if(t_choice==4)
        {
            far_kel_input:
            printf("Enter temperature in °Fahrenheit to be converted to Kelvin: ");
            scanf("%f",&far);
            if(far>=-459.67)
            {
                kel=((far-32)*5/9)+273.15;
                printf("Temperature is %0.2f Kelvin\n",kel);
            }
            else
            {
                printf("Temperature not in range of fahrenheit scale!! Enter temperature above -459.67°F!!\n");
                goto far_kel_input;
            }
        }
        else if(t_choice==5)
        {
            kel_cel_input:
            printf("Enter the temperature in Kelvin to be converted to °Celsius: ");
            scanf("%f",&kel);
            if(kel>=0)
            {
                cel=kel-273.15;
                printf("The temperature is %0.2f °Celsius\n",cel);
            }
            else
            {
                printf("Temperature not in range of kelvin scale!! Enter temperature above 0 K!!\n");
                goto kel_cel_input;
            }
        }
        else if(t_choice==6)
        {
            kel_far_input:
            printf("Enter the temperature in Kelvin to be converted to °Fahrenheit: ");
            scanf("%f",&kel);
            if(kel>=0)
            {
                far=(((kel-273.15)*9/5)+32);
                printf("The temperature is %0.2f °Fahrenheit\n",far);
            }
            else
            {
                printf("Temperature not in range of fahrenheit scale!! Enter temperature above 0 K!!\n");
                goto kel_far_input;
            }
        }
        else
        {
            printf("Invalid Choice!! Enter a number between 1 to 6\n");
            goto t_entry;
        }
        printf("Do you wish to continue converting more quantities? (Y or N)\n");
        fflush(stdin);
        scanf("%c",&pr);
        if(pr == 'Y' || pr == 'y')
        goto converter_entry;
    }

    else if(choice==5)
    {
        int a_choice;
        float sqm,sqft,acr;
        printf("Welcome to Area converter!!\nHere is a list of area conversions available!\n1. Square Feet to Square Meter\n2. Square Feet to Acre\n3. Square Meter to Square Feet\n4. Square Meter to Acre\n5. Acre to Square Feet\n6. Acre to Square Meter\nEnter the corresponding number: ");
        a_entry:
        scanf("%d",&a_choice);
        if(a_choice==1)
        {
            printf("Enter the area in Sqaure Feet: ");
            scanf("%f",&sqft);
            sqm=sqft/10.764;
            printf("Area is %0.3f Sqaure Meters\n",sqm);
        }
        else if(a_choice==2)
        {
            printf("Enter the area in Square Feet: ");
            scanf("%f",&sqft);
            acr=sqft/43560;
            printf("Area is %0.3f Acres\n",acr);
        }
        else if(a_choice==3)
        {
            printf("Enter the area in Square Meter: ");
            scanf("%f",&sqm);
            sqft=sqm*10.764;
            printf("The area is %0.3f Square Feet\n",sqft);
        }
        else if(a_choice==4)
        {
            printf("Enter the area in Square Meter: ");
            scanf("%f",&sqm);
            acr=sqm/4047;
            printf("The area is %0.3f Acres\n",acr);
        }
        else if(a_choice==5)
        {
            printf("Enter the area in Acre: ");
            scanf("%f",&acr);
            sqft=acr*43560;
            printf("The area is %0.3f Feet\n",sqft);
        }
        else if(a_choice==6)
        {
            printf("Enter the area in Acre: ");
            scanf("%f",&acr);
            sqm=acr*4047;
            printf("The area is %0.3f Square Meters\n",sqm);
        }
        else
        {
            printf("Invalid Choice!! Enter a number between 1 to 6\n");
            goto a_entry;
        }
        printf("Do you wish to continue converting more quantities? (Y or N)\n");
        fflush(stdin);
        scanf("%c",&pr);
        if(pr == 'Y' || pr == 'y')
        goto converter_entry;        
    }

    else if(choice==6)
    {
        int s_choice;
        float mps,kmph,mph;
        printf("Welcome to speed converter!!\nHere is a list of speed conversions!!\n1. m/s to Kmph\n2. m/s to Mph\n3. Kmph to m/s\n4. Kmph to Mph\n5. Mph to m/s\n6. Mph to Kmph\nEnter the corresponding number: ");
        s_entry:
        scanf("%d",&s_choice);
        if(s_choice==1)
        {
            printf("Enter speed in m/s to be converted to Kmph: ");
            scanf("%f",&mps);
            kmph=mps*3.6;
            printf("The speed is %0.3f Kmph\n",kmph);
        }
        else if(s_choice==2)
        {
            printf("Enter speed in m/s to be converted to Mph: ");
            scanf("%f",&mps);
            mph=mps*2.237;
            printf("The speed is %0.3f Mph\n",mph);
        }
        else if(s_choice==3)
        {
            printf("Enter the speed in Kmph to be converted to m/s: ");
            scanf("%f",&kmph);
            mps=kmph/3.6;
            printf("The speed is %0.3f m/s\n",mps);
        }
        else if(s_choice==4)
        {
            printf("Enter the speed in Kmph to be converted to Mph: ");
            scanf("%f",&kmph);
            mph=kmph/1.609;
            printf("The speed is %0.3f Mph\n",mph);            
        }
        else if(s_choice==5)
        {
            printf("Enter the speed in Mph to be converted to m/s: ");
            scanf("%f",&mph);
            mps=mph/2.237;
            printf("The speed is %0.3f m/s\n",mps);
        }
        else if(s_choice==6)
        {
            printf("Enter the speed in Mph to be converted to Kmph: ");
            scanf("%f",&mph);
            kmph=mph*1.609;
            printf("The speed is %0.3f Kmph\n",kmph);
        }
        else
        {
            printf("Invalid Choice!! Enter a number between 1 to 6\n");
            goto s_entry;
        }
        printf("Do you wish to continue converting more quantities? (Y or N)\n");
        fflush(stdin);
        scanf("%c",&pr);
        if(pr == 'Y' || pr == 'y')
        goto converter_entry;
    }

    else if(choice==7)
    {
        int p_choice;
        float w,kw,hp;
        printf("Welcome to power converter!!\nHere is a list of conversions available!!\n1. Watt to Horsepower\n2. Watt to Kilowatt\n3. Horsepower to Watt\n4. Horsepower to Kilowatt\n5. Kilowatt to Watt\n6. Kilowatt to Horsepower\nEnter the corresponding number: ");
        p_entry:
        scanf("%d",&p_choice);
        if(p_choice==1)
        {
            printf("Enter power in Watts to be converted to Horsepower: ");
            scanf("%f",&w);
            hp=w/745.7;
            printf("Power is %0.3f Horsepower\n",hp);
        }
        else if(p_choice==2)
        {
            printf("Enter power in Watts to be converted to Kilowatts: ");
            scanf("%f",&w);
            kw=w/1000;
            printf("Power is %0.3f Kilowatts\n",kw);
        }
        else if(p_choice==3)
        {
            printf("Enter power in Horsepower to be converted to Watts: ");
            scanf("%f",&hp);
            w=hp*745.7;
            printf("Power is %0.3f Watts\n",w);
        }
        else if(p_choice==4)
        {
            printf("Enter power in Horsepower to be converted to Kilowatts: ");
            scanf("%f",&hp);
            kw=hp*0.7457;
            printf("Power is %0.3f Kilowatts\n",kw);
        }
        else if(p_choice==5)
        {
            printf("Enter power in Kilowatts to be converted to Watts: ");
            scanf("%f",&kw);
            w=kw*1000;
            printf("Power is %0.3f Watts\n",w);
        }
        else if(p_choice==6)
        {
            printf("Enter power in Kilowatts to be converted to Horsepower: ");
            scanf("%f",&kw);
            hp=kw/0.7457;
            printf("Power is %0.3f Horsepower\n",hp);
        }
        else
        {
            printf("Invalid Choice!! Enter a number between 1 to 6\n");
            goto p_entry;
        }
        printf("Do you wish to continue converting more quantities? (Y or N)\n");
        fflush(stdin);
        scanf("%c",&pr);
        if(pr == 'Y' || pr == 'y')
        goto converter_entry;
    }
    getchar();
}