package com.example.a5_opencv;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Bundle;
import android.widget.ImageView;

import androidx.appcompat.app.AppCompatActivity;

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
        System.loadLibrary("call-lib");

    }

    public native int gray(Bitmap bitmap);
}
