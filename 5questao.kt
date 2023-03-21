package com.example.myapplication

import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity


class MainActivity : AppCompatActivity() {
    
     fun invertString(){
        val stringToInvert= "abacate";
        val i = stringToInvert.length;
        var invertedString="";
        var cont=0;
        while (cont<i){
            invertedString+=stringToInvert[(i-1)-cont];

            cont++;

        }
        Toast.makeText(applicationContext,invertedString,Toast.LENGTH_LONG).show();

    }
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState);

invertString();

    }


    


}
