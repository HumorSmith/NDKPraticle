package com.example.a1_opencv_helloworld;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    public static final String TAG = MainActivity.class.getSimpleName();
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView contentTv = findViewById(R.id.tv_content);
        contentTv.setText(getHello());
    }

    static {
        //加载静态库
        System.loadLibrary("native-lib");
    }

    //添加native方法
    public native  String getHello();
}
