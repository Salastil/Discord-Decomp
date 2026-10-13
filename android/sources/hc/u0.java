package hc;

import android.net.Uri;
import android.os.Bundle;

/* loaded from: classes3.dex */
public final class u0 {
    public Integer A;
    public Integer B;
    public CharSequence C;
    public CharSequence D;
    public CharSequence E;
    public Integer F;
    public Bundle G;
    public CharSequence a;

    /* renamed from: b, reason: collision with root package name */
    public CharSequence f9894b;

    /* renamed from: c, reason: collision with root package name */
    public CharSequence f9895c;

    /* renamed from: d, reason: collision with root package name */
    public CharSequence f9896d;

    /* renamed from: e, reason: collision with root package name */
    public CharSequence f9897e;

    /* renamed from: f, reason: collision with root package name */
    public CharSequence f9898f;

    /* renamed from: g, reason: collision with root package name */
    public CharSequence f9899g;

    /* renamed from: h, reason: collision with root package name */
    public n1 f9900h;

    /* renamed from: i, reason: collision with root package name */
    public n1 f9901i;
    public byte[] j;
    public Integer k;

    /* renamed from: l, reason: collision with root package name */
    public Uri f9902l;

    /* renamed from: m, reason: collision with root package name */
    public Integer f9903m;

    /* renamed from: n, reason: collision with root package name */
    public Integer f9904n;

    /* renamed from: o, reason: collision with root package name */
    public Integer f9905o;

    /* renamed from: p, reason: collision with root package name */
    public Boolean f9906p;

    /* renamed from: q, reason: collision with root package name */
    public Boolean f9907q;

    /* renamed from: r, reason: collision with root package name */
    public Integer f9908r;

    /* renamed from: s, reason: collision with root package name */
    public Integer f9909s;

    /* renamed from: t, reason: collision with root package name */
    public Integer f9910t;

    /* renamed from: u, reason: collision with root package name */
    public Integer f9911u;

    /* renamed from: v, reason: collision with root package name */
    public Integer f9912v;

    /* renamed from: w, reason: collision with root package name */
    public Integer f9913w;

    /* renamed from: x, reason: collision with root package name */
    public CharSequence f9914x;

    /* renamed from: y, reason: collision with root package name */
    public CharSequence f9915y;

    /* renamed from: z, reason: collision with root package name */
    public CharSequence f9916z;

    public final void a(byte[] bArr, int i5) {
        if (this.j != null) {
            Integer valueOf = Integer.valueOf(i5);
            int i6 = ke.d0.a;
            if (!valueOf.equals(3) && ke.d0.a(this.k, 3)) {
                return;
            }
        }
        this.j = (byte[]) bArr.clone();
        this.k = Integer.valueOf(i5);
    }
}
