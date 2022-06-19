
import javax.swing.table.DefaultTableModel;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author ronit
 */
public class ProyAutolote extends javax.swing.JFrame{
    int max=25;//maximo de autos
    Autolote X[] = new Autolote[max];
    int i,NR;// NR= numero registro
    boolean ini = false;//Variable para detectar si ya se ha iniciado el arreglo
    boolean dat = false;//Variable para determinar si ya se ha mostrado la tabla
    DefaultTableModel dato = new DefaultTableModel();
    
    void Inicilizar(){
        for (int j = 0; j <max-1; j++) {
            X[j]= new Autolote();
            ini=true;
        }
    }

    public void setX(Autolote[] X) {
        this.X = X;
    }


    
    
    void Datos(){
        X[1].GuardarReg("A01","ABC4420","TOYOTA","TURISMO","AZUL",2007,120);
        X[2].GuardarReg("A02","XYZ7216","CHEVROLET","TRAKER","VERDE",1998,60);
        X[3].GuardarReg("A03","PBX1124","SUZUKI","TRAKER","CAFÉ",1995,65);
        X[4].GuardarReg("A04","PAL8820","HONDA","TURISMO","FUSIA",2008,110);
        X[5].GuardarReg("A05","PRT9021","MAZDA","TURISMO","VERDE",2000,80);
        X[6].GuardarReg("A06","UVY9374","TOYOTA","TURISMO","ROJO",2010,110);
        X[7].GuardarReg("A07","GTD8942","SUZUKI","TRAKER","CAFÉ",2004,90);
        X[8].GuardarReg("A08","PIT8467","HONDA","TURISMO","AZUL",2007,75);
        X[9].GuardarReg("A09","QER6477","HONDA","TURISMO","AZUL",2005,70);
        X[10].GuardarReg("A10","GFR3745","TOYOTA","PAILA","BLANCO",2014,150);
        X[11].GuardarReg("A11","PWR3412","NISSAN","CAMIONETA","AMARILLO",2012,140);
        X[12].GuardarReg("A12","RWT3084","CHEVROLET","CAMIONETA","NEGRO",2009,90);
        X[13].GuardarReg("A13","YTR4085","SUZUKI","PAILA","BLANCO",2013,140);
        X[14].GuardarReg("A14","WPG3884","TOYOTA","CAMIONETA","NEGRO",2016,180);
        X[15].GuardarReg("A15","POY9847","NISSAN","TURISMO","BLANCO",2013,125);
        X[16].GuardarReg("A16","PQR8374","HONDA","TURISMO","ROJO",2014,135);
        X[17].GuardarReg("A17","YTZ9865","SUZUKI","PAILA","AZUL",2011,120);
        X[18].GuardarReg("A18","RUY2845","MAZDA","TURISMO","FUSIA",2009,90);
        X[19].GuardarReg("A19","DOP3987","TOYOTA","TURISMO","AMARILLO",2007,80);
        X[20].GuardarReg("A20","PTE2398","CHEVROLET","PAILA","ROJO",2005,70);  
    }
    
        
    
}
