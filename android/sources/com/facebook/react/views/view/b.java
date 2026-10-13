package com.facebook.react.views.view;

import android.view.View;
import android.view.WindowInsets;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements View.OnApplyWindowInsetsListener {
    @Override // android.view.View.OnApplyWindowInsetsListener
    public final WindowInsets onApplyWindowInsets(View view, WindowInsets windowInsets) {
        WindowInsets statusBarTranslucency$lambda$0;
        statusBarTranslucency$lambda$0 = WindowUtilKt.setStatusBarTranslucency$lambda$0(view, windowInsets);
        return statusBarTranslucency$lambda$0;
    }
}
