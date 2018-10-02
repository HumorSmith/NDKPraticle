package com.example.a2_opencv_gray;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

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
