package com.example.a6_opencv2;

import android.os.Bundle;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView contentTv = findViewById(R.id.tv_content);
        contentTv.setText(getVersion());
    }
    static {
        System.loadLibrary("native-lib");
    }
    public native String getVersion();
}
