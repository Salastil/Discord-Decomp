package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public final class v0 {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final String f1818b;

    /* renamed from: c, reason: collision with root package name */
    public final Object[] f1819c;

    /* renamed from: d, reason: collision with root package name */
    public final int f1820d;

    public v0(t tVar, String str, Object[] objArr) {
        this.a = tVar;
        this.f1818b = str;
        this.f1819c = objArr;
        char charAt = str.charAt(0);
        if (charAt < 55296) {
            this.f1820d = charAt;
            return;
        }
        int i5 = charAt & 8191;
        int i6 = 13;
        int i10 = 1;
        while (true) {
            int i11 = i10 + 1;
            char charAt2 = str.charAt(i10);
            if (charAt2 < 55296) {
                this.f1820d = i5 | (charAt2 << i6);
                return;
            } else {
                i5 |= (charAt2 & 8191) << i6;
                i6 += 13;
                i10 = i11;
            }
        }
    }
}
