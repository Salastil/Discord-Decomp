package ij;

/* loaded from: classes3.dex */
public final class p0 {
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final String f10915b;

    /* renamed from: c, reason: collision with root package name */
    public final Object[] f10916c;

    /* renamed from: d, reason: collision with root package name */
    public final int f10917d;

    public p0(b bVar, String str, Object[] objArr) {
        this.a = bVar;
        this.f10915b = str;
        this.f10916c = objArr;
        char charAt = str.charAt(0);
        if (charAt < 55296) {
            this.f10917d = charAt;
            return;
        }
        int i5 = charAt & 8191;
        int i6 = 13;
        int i10 = 1;
        while (true) {
            int i11 = i10 + 1;
            char charAt2 = str.charAt(i10);
            if (charAt2 < 55296) {
                this.f10917d = i5 | (charAt2 << i6);
                return;
            } else {
                i5 |= (charAt2 & 8191) << i6;
                i6 += 13;
                i10 = i11;
            }
        }
    }

    public final int a() {
        int i5 = this.f10917d;
        if ((i5 & 1) != 0) {
            return 1;
        }
        return (i5 & 4) == 4 ? 3 : 2;
    }
}
