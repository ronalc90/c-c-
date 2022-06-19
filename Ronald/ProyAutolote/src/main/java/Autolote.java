/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author ronit
 */
public class Autolote {

private String codAuto;
private String placa;
private String marca;
private String tipo;
private String color;
private int año;
private int precio;

//getters y setters

public String getCodAuto() {
return codAuto;
}

public void setCodAuto(String codAuto) {
this.codAuto = codAuto;
}

public String getPlaca() {
return placa;
}

public void setPlaca(String placa) {
this.placa = placa;
}

public String getMarca() {
return marca;
}

public void setMarca(String marca) {
this.marca = marca;
}

public String getTipo() {
return tipo;
}

public void setTipo(String tipo) {
this.tipo = tipo;
}

public String getColor() {
return color;
}

public void setColor(String color) {
this.color = color;
}

    public Autolote(String codAuto, String placa, String marca, String tipo, String color, int año, int precio) {
        this.codAuto = codAuto;
        this.placa = placa;
        this.marca = marca;
        this.tipo = tipo;
        this.color = color;
        this.año = año;
        this.precio = precio;
    }

    public int getAño() {
        return año;
    }

    public void setAño(int año) {
        this.año = año;
    }

    public int getPrecio() {
        return precio;
    }

    public void setPrecio(int precio) {
        this.precio = precio;
    }


    public Autolote() {
    }

    
    public void GuardarReg(String codAuto, String placa, String marca, String tipo, String color, int año, int precio) {
        setCodAuto(codAuto);
        setPlaca(placa);
        setMarca(marca);
        setTipo(tipo);
        setColor(color);
        setAño(año);
        setPrecio(precio);

    }

   

}
