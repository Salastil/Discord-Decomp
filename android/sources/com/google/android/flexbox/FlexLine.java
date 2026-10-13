package com.google.android.flexbox;

import android.view.View;
import java.util.ArrayList;
import oe.b;

/* loaded from: classes3.dex */
public final class FlexLine {

    /* renamed from: e, reason: collision with root package name */
    public int f5583e;

    /* renamed from: f, reason: collision with root package name */
    public int f5584f;

    /* renamed from: g, reason: collision with root package name */
    public int f5585g;

    /* renamed from: h, reason: collision with root package name */
    public int f5586h;

    /* renamed from: i, reason: collision with root package name */
    public int f5587i;
    public float j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public int f5588l;

    /* renamed from: m, reason: collision with root package name */
    public int f5589m;

    /* renamed from: o, reason: collision with root package name */
    public int f5591o;

    /* renamed from: p, reason: collision with root package name */
    public int f5592p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f5593q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f5594r;
    public int a = Integer.MAX_VALUE;

    /* renamed from: b, reason: collision with root package name */
    public int f5580b = Integer.MAX_VALUE;

    /* renamed from: c, reason: collision with root package name */
    public int f5581c = Integer.MIN_VALUE;

    /* renamed from: d, reason: collision with root package name */
    public int f5582d = Integer.MIN_VALUE;

    /* renamed from: n, reason: collision with root package name */
    public final ArrayList f5590n = new ArrayList();

    public final int a() {
        return this.f5586h - this.f5587i;
    }

    public final void b(View view, int i5, int i6, int i10, int i11) {
        b bVar = (b) view.getLayoutParams();
        this.a = Math.min(this.a, (view.getLeft() - bVar.j()) - i5);
        this.f5580b = Math.min(this.f5580b, (view.getTop() - bVar.k()) - i6);
        this.f5581c = Math.max(this.f5581c, bVar.p() + view.getRight() + i10);
        this.f5582d = Math.max(this.f5582d, bVar.g() + view.getBottom() + i11);
    }
}
