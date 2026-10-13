package com.facebook.react.devsupport;

import android.graphics.Bitmap;
import android.view.View;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import com.yalantis.ucrop.UCropActivity;

/* loaded from: classes3.dex */
public final /* synthetic */ class t implements androidx.core.view.r {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4942d;

    public /* synthetic */ t(int i5) {
        this.f4942d = i5;
    }

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View view, WindowInsetsCompat windowInsetsCompat) {
        WindowInsetsCompat onCreate$lambda$0;
        switch (this.f4942d) {
            case 0:
                onCreate$lambda$0 = RedBoxDialogSurfaceDelegate$show$2.onCreate$lambda$0(647, view, windowInsetsCompat);
                return onCreate$lambda$0;
            default:
                Bitmap.CompressFormat compressFormat = UCropActivity.f6821b0;
                Insets f2 = windowInsetsCompat.a.f(519);
                view.setPaddingRelative(f2.a, f2.f1512b, f2.f1513c, 0);
                return windowInsetsCompat;
        }
    }
}
