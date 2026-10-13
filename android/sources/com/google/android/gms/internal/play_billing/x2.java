package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class x2 {
    public final p1 a;

    /* renamed from: b, reason: collision with root package name */
    public final String f5885b;

    /* renamed from: c, reason: collision with root package name */
    public final Object[] f5886c;

    /* renamed from: d, reason: collision with root package name */
    public final int f5887d;

    public x2(p1 p1Var, String str, Object[] objArr) {
        this.a = p1Var;
        this.f5885b = str;
        this.f5886c = objArr;
        char charAt = str.charAt(0);
        if (charAt < 55296) {
            this.f5887d = charAt;
            return;
        }
        int i5 = charAt & 8191;
        int i6 = 1;
        int i10 = 13;
        while (true) {
            int i11 = i6 + 1;
            char charAt2 = str.charAt(i6);
            if (charAt2 < 55296) {
                this.f5887d = i5 | (charAt2 << i10);
                return;
            } else {
                i5 |= (charAt2 & 8191) << i10;
                i10 += 13;
                i6 = i11;
            }
        }
    }

    public final int a() {
        int i5 = this.f5887d;
        if ((i5 & 1) != 0) {
            return 1;
        }
        return (i5 & 4) == 4 ? 3 : 2;
    }
}
