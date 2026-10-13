package de;

import android.text.Layout;

/* loaded from: classes3.dex */
public final class g {
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public int f7524b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f7525c;

    /* renamed from: d, reason: collision with root package name */
    public int f7526d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f7527e;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public String f7532l;

    /* renamed from: o, reason: collision with root package name */
    public Layout.Alignment f7535o;

    /* renamed from: p, reason: collision with root package name */
    public Layout.Alignment f7536p;

    /* renamed from: r, reason: collision with root package name */
    public b f7538r;

    /* renamed from: f, reason: collision with root package name */
    public int f7528f = -1;

    /* renamed from: g, reason: collision with root package name */
    public int f7529g = -1;

    /* renamed from: h, reason: collision with root package name */
    public int f7530h = -1;

    /* renamed from: i, reason: collision with root package name */
    public int f7531i = -1;
    public int j = -1;

    /* renamed from: m, reason: collision with root package name */
    public int f7533m = -1;

    /* renamed from: n, reason: collision with root package name */
    public int f7534n = -1;

    /* renamed from: q, reason: collision with root package name */
    public int f7537q = -1;

    /* renamed from: s, reason: collision with root package name */
    public float f7539s = Float.MAX_VALUE;

    public final void a(g gVar) {
        int i5;
        Layout.Alignment alignment;
        Layout.Alignment alignment2;
        String str;
        if (gVar != null) {
            if (!this.f7525c && gVar.f7525c) {
                this.f7524b = gVar.f7524b;
                this.f7525c = true;
            }
            if (this.f7530h == -1) {
                this.f7530h = gVar.f7530h;
            }
            if (this.f7531i == -1) {
                this.f7531i = gVar.f7531i;
            }
            if (this.a == null && (str = gVar.a) != null) {
                this.a = str;
            }
            if (this.f7528f == -1) {
                this.f7528f = gVar.f7528f;
            }
            if (this.f7529g == -1) {
                this.f7529g = gVar.f7529g;
            }
            if (this.f7534n == -1) {
                this.f7534n = gVar.f7534n;
            }
            if (this.f7535o == null && (alignment2 = gVar.f7535o) != null) {
                this.f7535o = alignment2;
            }
            if (this.f7536p == null && (alignment = gVar.f7536p) != null) {
                this.f7536p = alignment;
            }
            if (this.f7537q == -1) {
                this.f7537q = gVar.f7537q;
            }
            if (this.j == -1) {
                this.j = gVar.j;
                this.k = gVar.k;
            }
            if (this.f7538r == null) {
                this.f7538r = gVar.f7538r;
            }
            if (this.f7539s == Float.MAX_VALUE) {
                this.f7539s = gVar.f7539s;
            }
            if (!this.f7527e && gVar.f7527e) {
                this.f7526d = gVar.f7526d;
                this.f7527e = true;
            }
            if (this.f7533m != -1 || (i5 = gVar.f7533m) == -1) {
                return;
            }
            this.f7533m = i5;
        }
    }
}
