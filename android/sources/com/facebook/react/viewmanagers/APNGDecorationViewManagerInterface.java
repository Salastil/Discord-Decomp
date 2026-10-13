package com.facebook.react.viewmanagers;

import android.view.View;
import com.facebook.react.uimanager.ViewManagerWithGeneratedInterface;

/* loaded from: classes3.dex */
public interface APNGDecorationViewManagerInterface<T extends View> extends ViewManagerWithGeneratedInterface {
    void pause(T t5);

    void play(T t5);

    void seek(T t5, int i5);

    void setAutoplay(T t5, boolean z5);

    void setUrl(T t5, String str);
}
