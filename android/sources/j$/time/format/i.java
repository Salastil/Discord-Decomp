package j$.time.format;

/* loaded from: classes2.dex */
public final class i implements f {

    /* renamed from: f, reason: collision with root package name */
    public static final long[] f12303f = {0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000L};
    public final j$.time.temporal.j a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12304b;

    /* renamed from: c, reason: collision with root package name */
    public final int f12305c;

    /* renamed from: d, reason: collision with root package name */
    public final u f12306d;

    /* renamed from: e, reason: collision with root package name */
    public final int f12307e;

    public i(j$.time.temporal.j jVar, int i5, int i6, u uVar) {
        this.a = jVar;
        this.f12304b = i5;
        this.f12305c = i6;
        this.f12306d = uVar;
        this.f12307e = 0;
    }

    public i(j$.time.temporal.j jVar, int i5, int i6, u uVar, int i10) {
        this.a = jVar;
        this.f12304b = i5;
        this.f12305c = i6;
        this.f12306d = uVar;
        this.f12307e = i10;
    }

    @Override // j$.time.format.f
    public final boolean a(p pVar, StringBuilder sb2) {
        j$.time.temporal.j jVar = this.a;
        Long a = pVar.a(jVar);
        if (a == null) {
            return false;
        }
        long longValue = a.longValue();
        s sVar = pVar.f12322b.f12297c;
        String l6 = longValue == Long.MIN_VALUE ? "9223372036854775808" : Long.toString(Math.abs(longValue));
        int length = l6.length();
        int i5 = this.f12305c;
        if (length > i5) {
            throw new j$.time.a("Field " + jVar + " cannot be printed as the value " + longValue + " exceeds the maximum print width of " + i5);
        }
        sVar.getClass();
        int i6 = this.f12304b;
        u uVar = this.f12306d;
        if (longValue >= 0) {
            int i10 = c.a[uVar.ordinal()];
            if (i10 != 1) {
                if (i10 == 2) {
                    sb2.append('+');
                }
            } else if (i6 < 19 && longValue >= f12303f[i6]) {
                sb2.append('+');
            }
        } else {
            int i11 = c.a[uVar.ordinal()];
            if (i11 == 1 || i11 == 2 || i11 == 3) {
                sb2.append('-');
            } else if (i11 == 4) {
                throw new j$.time.a("Field " + jVar + " cannot be printed as the value " + longValue + " cannot be negative according to the SignStyle");
            }
        }
        for (int i12 = 0; i12 < i6 - l6.length(); i12++) {
            sb2.append('0');
        }
        sb2.append(l6);
        return true;
    }

    public final String toString() {
        j$.time.temporal.j jVar = this.a;
        u uVar = this.f12306d;
        int i5 = this.f12305c;
        int i6 = this.f12304b;
        if (i6 == 1 && i5 == 19 && uVar == u.NORMAL) {
            return "Value(" + jVar + ")";
        }
        if (i6 == i5 && uVar == u.NOT_NEGATIVE) {
            return "Value(" + jVar + "," + i6 + ")";
        }
        return "Value(" + jVar + "," + i6 + "," + i5 + "," + uVar + ")";
    }
}
