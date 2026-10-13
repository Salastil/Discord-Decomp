package com.horcrux.svg;

import com.facebook.react.bridge.ReadableMap;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class z {
    public double[] A;
    public int B;
    public int C;
    public int D;
    public int E;
    public int F;
    public int G;
    public int H;
    public int I;
    public int J;
    public int K;
    public int L;
    public final float M;
    public final float N;
    public final float O;
    public final ArrayList a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f6458b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f6459c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f6460d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f6461e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f6462f;

    /* renamed from: g, reason: collision with root package name */
    public final ArrayList f6463g;

    /* renamed from: h, reason: collision with root package name */
    public final ArrayList f6464h;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f6465i;
    public final ArrayList j;
    public final ArrayList k;

    /* renamed from: l, reason: collision with root package name */
    public final ArrayList f6466l;

    /* renamed from: m, reason: collision with root package name */
    public final ArrayList f6467m;

    /* renamed from: n, reason: collision with root package name */
    public final ArrayList f6468n;

    /* renamed from: o, reason: collision with root package name */
    public final ArrayList f6469o;

    /* renamed from: p, reason: collision with root package name */
    public final ArrayList f6470p;

    /* renamed from: q, reason: collision with root package name */
    public double f6471q;

    /* renamed from: r, reason: collision with root package name */
    public x f6472r;

    /* renamed from: s, reason: collision with root package name */
    public double f6473s;

    /* renamed from: t, reason: collision with root package name */
    public double f6474t;

    /* renamed from: u, reason: collision with root package name */
    public double f6475u;

    /* renamed from: v, reason: collision with root package name */
    public double f6476v;

    /* renamed from: w, reason: collision with root package name */
    public r0[] f6477w;

    /* renamed from: x, reason: collision with root package name */
    public r0[] f6478x;

    /* renamed from: y, reason: collision with root package name */
    public r0[] f6479y;

    /* renamed from: z, reason: collision with root package name */
    public r0[] f6480z;

    public z(float f2, float f10, float f11) {
        ArrayList arrayList = new ArrayList();
        this.a = arrayList;
        ArrayList arrayList2 = new ArrayList();
        this.f6458b = arrayList2;
        ArrayList arrayList3 = new ArrayList();
        this.f6459c = arrayList3;
        ArrayList arrayList4 = new ArrayList();
        this.f6460d = arrayList4;
        ArrayList arrayList5 = new ArrayList();
        this.f6461e = arrayList5;
        ArrayList arrayList6 = new ArrayList();
        this.f6462f = arrayList6;
        ArrayList arrayList7 = new ArrayList();
        this.f6463g = arrayList7;
        ArrayList arrayList8 = new ArrayList();
        this.f6464h = arrayList8;
        ArrayList arrayList9 = new ArrayList();
        this.f6465i = arrayList9;
        ArrayList arrayList10 = new ArrayList();
        this.j = arrayList10;
        ArrayList arrayList11 = new ArrayList();
        this.k = arrayList11;
        this.f6466l = new ArrayList();
        this.f6467m = new ArrayList();
        this.f6468n = new ArrayList();
        this.f6469o = new ArrayList();
        this.f6470p = new ArrayList();
        this.f6471q = 12.0d;
        this.f6472r = x.f6437p;
        r0[] r0VarArr = new r0[0];
        this.f6477w = r0VarArr;
        this.f6478x = new r0[0];
        this.f6479y = new r0[0];
        this.f6480z = new r0[0];
        this.A = new double[]{0.0d};
        this.G = -1;
        this.H = -1;
        this.I = -1;
        this.J = -1;
        this.K = -1;
        this.M = f2;
        this.N = f10;
        this.O = f11;
        arrayList2.add(r0VarArr);
        arrayList3.add(this.f6478x);
        arrayList4.add(this.f6479y);
        arrayList5.add(this.f6480z);
        arrayList6.add(this.A);
        arrayList7.add(Integer.valueOf(this.G));
        arrayList8.add(Integer.valueOf(this.H));
        arrayList9.add(Integer.valueOf(this.I));
        arrayList10.add(Integer.valueOf(this.J));
        arrayList11.add(Integer.valueOf(this.K));
        arrayList.add(this.f6472r);
        e();
    }

    public static r0[] a(ArrayList arrayList) {
        int size = arrayList.size();
        r0[] r0VarArr = new r0[size];
        for (int i5 = 0; i5 < size; i5++) {
            r0VarArr[i5] = (r0) arrayList.get(i5);
        }
        return r0VarArr;
    }

    public static void b(int i5, ArrayList arrayList) {
        while (i5 >= 0) {
            arrayList.set(i5, Integer.valueOf(((Integer) arrayList.get(i5)).intValue() + 1));
            i5--;
        }
    }

    public final double c(double d6) {
        b(this.B, this.f6463g);
        int i5 = this.G + 1;
        r0[] r0VarArr = this.f6477w;
        if (i5 < r0VarArr.length) {
            this.f6475u = 0.0d;
            this.G = i5;
            this.f6473s = e4.f.r(r0VarArr[i5], this.N, this.M, this.f6471q);
        }
        double d7 = this.f6473s + d6;
        this.f6473s = d7;
        return d7;
    }

    public final double d() {
        b(this.C, this.f6464h);
        int i5 = this.H + 1;
        r0[] r0VarArr = this.f6478x;
        if (i5 < r0VarArr.length) {
            this.f6476v = 0.0d;
            this.H = i5;
            this.f6474t = e4.f.r(r0VarArr[i5], this.O, this.M, this.f6471q);
        }
        return this.f6474t;
    }

    public final void e() {
        this.f6466l.add(Integer.valueOf(this.B));
        this.f6467m.add(Integer.valueOf(this.C));
        this.f6468n.add(Integer.valueOf(this.D));
        this.f6469o.add(Integer.valueOf(this.E));
        this.f6470p.add(Integer.valueOf(this.F));
    }

    public final void f(a0 a0Var, ReadableMap readableMap) {
        x xVar;
        if (this.L > 0) {
            xVar = this.f6472r;
        } else {
            a0 parentTextRoot = a0Var.getParentTextRoot();
            while (true) {
                if (parentTextRoot == null) {
                    xVar = x.f6437p;
                    break;
                }
                x xVar2 = parentTextRoot.f6305e.f6472r;
                if (xVar2 != x.f6437p) {
                    xVar = xVar2;
                    break;
                }
                parentTextRoot = parentTextRoot.getParentTextRoot();
            }
        }
        this.L++;
        ArrayList arrayList = this.a;
        if (readableMap == null) {
            arrayList.add(xVar);
            return;
        }
        x xVar3 = new x(readableMap, xVar, this.M);
        this.f6471q = xVar3.a;
        arrayList.add(xVar3);
        this.f6472r = xVar3;
    }
}
