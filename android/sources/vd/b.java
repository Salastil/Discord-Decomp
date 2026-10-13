package vd;

import com.google.android.exoplayer2.Format;
import java.util.List;

/* loaded from: classes3.dex */
public final class b {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final String f19337b;

    /* renamed from: c, reason: collision with root package name */
    public final long f19338c;

    /* renamed from: d, reason: collision with root package name */
    public final String f19339d;

    /* renamed from: e, reason: collision with root package name */
    public final int f19340e;

    /* renamed from: f, reason: collision with root package name */
    public final int f19341f;

    /* renamed from: g, reason: collision with root package name */
    public final int f19342g;

    /* renamed from: h, reason: collision with root package name */
    public final int f19343h;

    /* renamed from: i, reason: collision with root package name */
    public final String f19344i;
    public final Format[] j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final String f19345l;

    /* renamed from: m, reason: collision with root package name */
    public final String f19346m;

    /* renamed from: n, reason: collision with root package name */
    public final List f19347n;

    /* renamed from: o, reason: collision with root package name */
    public final long[] f19348o;

    /* renamed from: p, reason: collision with root package name */
    public final long f19349p;

    public b(String str, String str2, int i5, String str3, long j, String str4, int i6, int i10, int i11, int i12, String str5, Format[] formatArr, List list, long[] jArr, long j5) {
        this.f19345l = str;
        this.f19346m = str2;
        this.a = i5;
        this.f19337b = str3;
        this.f19338c = j;
        this.f19339d = str4;
        this.f19340e = i6;
        this.f19341f = i10;
        this.f19342g = i11;
        this.f19343h = i12;
        this.f19344i = str5;
        this.j = formatArr;
        this.f19347n = list;
        this.f19348o = jArr;
        this.f19349p = j5;
        this.k = list.size();
    }

    public final b a(Format[] formatArr) {
        return new b(this.f19345l, this.f19346m, this.a, this.f19337b, this.f19338c, this.f19339d, this.f19340e, this.f19341f, this.f19342g, this.f19343h, this.f19344i, formatArr, this.f19347n, this.f19348o, this.f19349p);
    }

    public final long b(int i5) {
        if (i5 == this.k - 1) {
            return this.f19349p;
        }
        long[] jArr = this.f19348o;
        return jArr[i5 + 1] - jArr[i5];
    }
}
