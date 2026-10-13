package nd;

/* loaded from: classes3.dex */
public final class a1 implements hc.g {

    /* renamed from: v, reason: collision with root package name */
    public static final a1 f15063v = new a1(new z0[0]);

    /* renamed from: w, reason: collision with root package name */
    public static final String f15064w;

    /* renamed from: d, reason: collision with root package name */
    public final int f15065d;

    /* renamed from: e, reason: collision with root package name */
    public final fi.r0 f15066e;

    /* renamed from: i, reason: collision with root package name */
    public int f15067i;

    static {
        int i5 = ke.d0.a;
        f15064w = Integer.toString(0, 36);
    }

    public a1(z0... z0VarArr) {
        fi.r0 m5 = fi.e0.m(z0VarArr);
        this.f15066e = m5;
        this.f15065d = z0VarArr.length;
        int i5 = 0;
        while (i5 < m5.f8706v) {
            int i6 = i5 + 1;
            for (int i10 = i6; i10 < m5.f8706v; i10++) {
                if (((z0) m5.get(i5)).equals(m5.get(i10))) {
                    ke.b.s("TrackGroupArray", "", new IllegalArgumentException("Multiple identical TrackGroups added to one TrackGroupArray."));
                }
            }
            i5 = i6;
        }
    }

    public final z0 a(int i5) {
        return (z0) this.f15066e.get(i5);
    }

    public final int b(z0 z0Var) {
        int indexOf = this.f15066e.indexOf(z0Var);
        if (indexOf >= 0) {
            return indexOf;
        }
        return -1;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || a1.class != obj.getClass()) {
            return false;
        }
        a1 a1Var = (a1) obj;
        return this.f15065d == a1Var.f15065d && this.f15066e.equals(a1Var.f15066e);
    }

    public final int hashCode() {
        if (this.f15067i == 0) {
            this.f15067i = this.f15066e.hashCode();
        }
        return this.f15067i;
    }
}
