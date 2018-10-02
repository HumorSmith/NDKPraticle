package com.example.a3_cmake;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Bitmap;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView contentTv = findViewById(R.id.tv_content);
        contentTv.setText("int = " + convertInt(10) + "\t long = " + convertLong(11L) + "  string = " + convertString("hello world"));
    }
    static {
        //加载静态库
        System.loadLibrary("native-lib");
    }
    public native int convertInt(int src);
    public native long convertLong(long src);
    public native String convertString(String srcString);

}
