package com.horcrux.svg;

import android.graphics.Matrix;
import android.graphics.Rect;
import com.facebook.react.bridge.ReadableArray;

/* loaded from: classes3.dex */
public final class a {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final r0[] f6297b;

    /* renamed from: c, reason: collision with root package name */
    public ReadableArray f6298c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f6299d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f6300e;

    /* renamed from: f, reason: collision with root package name */
    public Matrix f6301f;

    /* renamed from: g, reason: collision with root package name */
    public Rect f6302g;

    /* renamed from: h, reason: collision with root package name */
    public j0 f6303h;

    public a(int i5, r0[] r0VarArr, int i6) {
        this.a = i5;
        this.f6297b = r0VarArr;
        this.f6299d = i6 == 1;
    }

    public final double a(r0 r0Var, double d6, float f2, float f10) {
        return e4.f.r(r0Var, d6, (this.f6299d && r0Var.f6419b == SVGLength$UnitType.NUMBER) ? d6 : f2, f10);
    }
}
