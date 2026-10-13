package com.facebook.react;

import android.content.Context;
import com.facebook.react.defaults.DefaultNewArchitectureEntryPoint;
import com.facebook.react.soloader.OpenSourceMergedSoMapping;
import com.facebook.soloader.SoLoader;
import java.io.IOException;

/* loaded from: classes3.dex */
public class ReactNativeApplicationEntryPoint {
    public static void loadReactNative(Context context) {
        try {
            OpenSourceMergedSoMapping openSourceMergedSoMapping = OpenSourceMergedSoMapping.INSTANCE;
            boolean z5 = SoLoader.a;
            synchronized (SoLoader.class) {
                SoLoader.f5084o = openSourceMergedSoMapping;
            }
            SoLoader.init(context, 0);
            DefaultNewArchitectureEntryPoint.load();
        } catch (IOException e9) {
            throw new RuntimeException(e9);
        }
    }
}
