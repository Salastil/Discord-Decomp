package ks;

/* loaded from: classes3.dex */
public enum l implements d {
    UTC(2441317),
    UNIX(2440587),
    MODIFIED_JULIAN_DATE(2400000),
    /* JADX INFO: Fake field, exist only in values array */
    EXCEL(2415019),
    /* JADX INFO: Fake field, exist only in values array */
    ANSI(2305812),
    /* JADX INFO: Fake field, exist only in values array */
    RATA_DIE(1721424),
    /* JADX INFO: Fake field, exist only in values array */
    JULIAN_DAY_NUMBER(-1),
    /* JADX INFO: Fake field, exist only in values array */
    LILIAN_DAY_NUMBER(2299159);

    private final int offset;

    l(int i5) {
        this.offset = i5 - 2441317;
    }

    @Override // ks.d
    public final Object a() {
        return Long.valueOf(365241779741L - this.offset);
    }

    public final long b(long j, l lVar) {
        try {
            return w3.q.z(j, lVar.offset - this.offset);
        } catch (ArithmeticException e9) {
            throw new IllegalArgumentException(e9);
        }
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        return ((Long) ((e) obj).d(this)).compareTo((Long) ((e) obj2).d(this));
    }

    @Override // ks.d
    public final Class getType() {
        return Long.class;
    }

    @Override // ks.d
    public final boolean h() {
        return false;
    }

    @Override // ks.d
    public final boolean i() {
        return true;
    }

    @Override // ks.d
    public final Object v() {
        return Long.valueOf((-365243219892L) - this.offset);
    }

    @Override // ks.d
    public final boolean w() {
        return false;
    }
}
