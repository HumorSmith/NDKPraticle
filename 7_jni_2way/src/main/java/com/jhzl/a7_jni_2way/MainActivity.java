package com.jhzl.a7_jni_2way;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView addTv = findViewById(R.id.add_tv);
        TextView subTv = findViewById(R.id.sub_tv);
        addTv.setText("加法计算:"+add(10,20));
        subTv.setText("减法计算:"+sub(10,20));
    }

    static {
        //加载静态库
        System.loadLibrary("native-lib");
    }

    public native int add(int a,int b);

    public native  int sub(int a,int b);

}