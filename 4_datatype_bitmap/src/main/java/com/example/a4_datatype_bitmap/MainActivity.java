package com.example.a4_datatype_bitmap;

import androidx.appcompat.app.AppCompatActivity;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ImageView srcIv = findViewById(R.id.iv_src);
        ImageView dstIv = findViewById(R.id.iv_det);
        Bitmap bitmap = BitmapFactory.decodeResource(getResources(), R.mipmap.google);
        if (gray(bitmap) == 1) {
            dstIv.setImageBitmap(bitmap);
        }
    }

    static {
        //加载静态库
        System.loadLibrary("native-lib");
    }


    public native int gray(Bitmap bitmap);
}
