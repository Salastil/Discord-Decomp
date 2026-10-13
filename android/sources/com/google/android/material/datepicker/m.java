package com.google.android.material.datepicker;

import android.view.View;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;

/* loaded from: classes3.dex */
public final class m implements androidx.core.view.r {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6033d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ View f6034e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f6035i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f6036v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f6037w;

    public m(View view, int i5, int i6, int i10, int i11) {
        this.f6033d = i5;
        this.f6034e = view;
        this.f6035i = i6;
        this.f6036v = i10;
        this.f6037w = i11;
    }

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View view, WindowInsetsCompat windowInsetsCompat) {
        Insets f2 = windowInsetsCompat.a.f(519);
        View view2 = this.f6034e;
        int i5 = this.f6033d;
        if (i5 >= 0) {
            view2.getLayoutParams().height = i5 + f2.f1512b;
            view2.setLayoutParams(view2.getLayoutParams());
        }
        view2.setPadding(this.f6035i + f2.a, this.f6036v + f2.f1512b, this.f6037w + f2.f1513c, view2.getPaddingBottom());
        return windowInsetsCompat;
    }
}
