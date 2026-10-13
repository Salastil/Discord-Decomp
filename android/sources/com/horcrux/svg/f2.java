package com.horcrux.svg;

import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.Path;
import android.view.View;
import android.view.ViewParent;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableMap;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public class f2 extends a0 {
    public String E;
    public int F;
    public c2 G;
    public ArrayList H;
    public ArrayList I;
    public ArrayList J;
    public ArrayList K;
    public ArrayList L;
    public double M;

    /* renamed from: x, reason: collision with root package name */
    public r0 f6349x;

    /* renamed from: y, reason: collision with root package name */
    public r0 f6350y;

    public f2(ReactContext reactContext) {
        super(reactContext);
        this.f6349x = null;
        this.f6350y = null;
        this.E = null;
        this.F = 1;
        this.M = Double.NaN;
    }

    @Override // com.horcrux.svg.VirtualView
    public void clearCache() {
        this.M = Double.NaN;
        super.clearCache();
    }

    @Override // com.horcrux.svg.a0, com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public void draw(Canvas canvas, Paint paint, float f2) {
        i(canvas);
        clip(canvas, paint);
        j(canvas, paint);
        h();
        c(canvas, paint, f2);
        g();
    }

    @Override // com.horcrux.svg.a0
    public final Path e(Canvas canvas, Paint paint) {
        return getPath(canvas, paint);
    }

    @Override // com.horcrux.svg.a0, com.horcrux.svg.RenderableView, com.horcrux.svg.VirtualView
    public Path getPath(Canvas canvas, Paint paint) {
        Path path = this.mPath;
        if (path != null) {
            return path;
        }
        i(canvas);
        return j(canvas, paint);
    }

    @Override // com.horcrux.svg.a0
    public void h() {
        boolean z5 = ((this instanceof b2) || (this instanceof a2)) ? false : true;
        z f2 = f();
        ReadableMap readableMap = this.f6304d;
        ArrayList arrayList = this.H;
        ArrayList arrayList2 = this.I;
        ArrayList arrayList3 = this.K;
        ArrayList arrayList4 = this.L;
        ArrayList arrayList5 = this.J;
        if (z5) {
            f2.F = 0;
            f2.E = 0;
            f2.D = 0;
            f2.C = 0;
            f2.B = 0;
            f2.K = -1;
            f2.J = -1;
            f2.I = -1;
            f2.H = -1;
            f2.G = -1;
            f2.f6476v = 0.0d;
            f2.f6475u = 0.0d;
            f2.f6474t = 0.0d;
            f2.f6473s = 0.0d;
        }
        f2.f(this, readableMap);
        if (arrayList != null && arrayList.size() != 0) {
            f2.B++;
            f2.G = -1;
            f2.f6463g.add(-1);
            r0[] a = z.a(arrayList);
            f2.f6477w = a;
            f2.f6458b.add(a);
        }
        if (arrayList2 != null && arrayList2.size() != 0) {
            f2.C++;
            f2.H = -1;
            f2.f6464h.add(-1);
            r0[] a10 = z.a(arrayList2);
            f2.f6478x = a10;
            f2.f6459c.add(a10);
        }
        if (arrayList3 != null && arrayList3.size() != 0) {
            f2.D++;
            f2.I = -1;
            f2.f6465i.add(-1);
            r0[] a11 = z.a(arrayList3);
            f2.f6479y = a11;
            f2.f6460d.add(a11);
        }
        if (arrayList4 != null && arrayList4.size() != 0) {
            f2.E++;
            f2.J = -1;
            f2.j.add(-1);
            r0[] a12 = z.a(arrayList4);
            f2.f6480z = a12;
            f2.f6461e.add(a12);
        }
        if (arrayList5 != null && arrayList5.size() != 0) {
            f2.F++;
            f2.K = -1;
            f2.k.add(-1);
            int size = arrayList5.size();
            double[] dArr = new double[size];
            for (int i5 = 0; i5 < size; i5++) {
                dArr[i5] = ((r0) arrayList5.get(i5)).a;
            }
            f2.A = dArr;
            f2.f6462f.add(dArr);
        }
        f2.e();
    }

    @Override // com.horcrux.svg.VirtualView, android.view.View
    public void invalidate() {
        if (this.mPath == null) {
            return;
        }
        super.invalidate();
        ViewParent parent = getParent();
        f2 f2Var = this;
        while (parent instanceof f2) {
            f2Var = (f2) parent;
            parent = f2Var.getParent();
        }
        f2Var.clearChildCache();
    }

    public final Path j(Canvas canvas, Paint paint) {
        Path path = this.mPath;
        if (path != null) {
            return path;
        }
        h();
        this.mPath = super.getPath(canvas, paint);
        g();
        return this.mPath;
    }

    public double k(Paint paint) {
        if (!Double.isNaN(this.M)) {
            return this.M;
        }
        double d6 = 0.0d;
        for (int i5 = 0; i5 < getChildCount(); i5++) {
            View childAt = getChildAt(i5);
            if (childAt instanceof f2) {
                d6 = ((f2) childAt).k(paint) + d6;
            }
        }
        this.M = d6;
        return d6;
    }

    public void l(String str) {
        this.G = c2.a(str);
        invalidate();
    }
}
