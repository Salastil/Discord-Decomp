package hc;

import com.facebook.imageutils.JfifUtil;

/* loaded from: classes3.dex */
public final class s1 implements g {
    public static final String E;
    public static final String F;
    public static final String G;
    public static final String H;
    public static final String I;

    /* renamed from: d, reason: collision with root package name */
    public Object f9869d;

    /* renamed from: e, reason: collision with root package name */
    public Object f9870e;

    /* renamed from: i, reason: collision with root package name */
    public int f9871i;

    /* renamed from: v, reason: collision with root package name */
    public long f9872v;

    /* renamed from: w, reason: collision with root package name */
    public long f9873w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f9874x;

    /* renamed from: y, reason: collision with root package name */
    public od.b f9875y = od.b.f15830x;

    static {
        int i5 = ke.d0.a;
        E = Integer.toString(0, 36);
        F = Integer.toString(1, 36);
        G = Integer.toString(2, 36);
        H = Integer.toString(3, 36);
        I = Integer.toString(4, 36);
    }

    public final long a(int i5, int i6) {
        od.a a = this.f9875y.a(i5);
        if (a.f15824e != -1) {
            return a.f15828x[i6];
        }
        return -9223372036854775807L;
    }

    /* JADX WARN: Code restructure failed: missing block: B:21:0x0047, code lost:
    
        return r1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int b(long j) {
        od.a a;
        int i5;
        od.b bVar = this.f9875y;
        long j5 = this.f9872v;
        int i6 = bVar.f15832d;
        if (j != Long.MIN_VALUE && (j5 == -9223372036854775807L || j < j5)) {
            int i10 = bVar.f15835v;
            while (i10 < i6 && ((bVar.a(i10).f15823d != Long.MIN_VALUE && bVar.a(i10).f15823d <= j) || ((i5 = (a = bVar.a(i10)).f15824e) != -1 && a.a(-1) >= i5))) {
                i10++;
            }
        }
        return -1;
    }

    public final int c(long j) {
        int i5;
        od.b bVar = this.f9875y;
        long j5 = this.f9872v;
        int i6 = bVar.f15832d - 1;
        int i10 = i6 - (bVar.b(i6) ? 1 : 0);
        while (i10 >= 0 && j != Long.MIN_VALUE) {
            od.a a = bVar.a(i10);
            long j7 = a.f15823d;
            if (j7 != Long.MIN_VALUE) {
                if (j >= j7) {
                    break;
                }
                i10--;
            } else {
                if (j5 != -9223372036854775807L && ((!a.E || a.f15824e != -1) && j >= j5)) {
                    break;
                }
                i10--;
            }
        }
        if (i10 >= 0) {
            od.a a10 = bVar.a(i10);
            int i11 = a10.f15824e;
            if (i11 != -1) {
                while (i5 < i11) {
                    int i12 = a10.f15827w[i5];
                    i5 = (i12 == 0 || i12 == 1) ? 0 : i5 + 1;
                }
            }
            return i10;
        }
        return -1;
    }

    public final long d(int i5) {
        return this.f9875y.a(i5).f15823d;
    }

    public final int e(int i5, int i6) {
        od.a a = this.f9875y.a(i5);
        if (a.f15824e != -1) {
            return a.f15827w[i6];
        }
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && s1.class.equals(obj.getClass())) {
            s1 s1Var = (s1) obj;
            if (ke.d0.a(this.f9869d, s1Var.f9869d) && ke.d0.a(this.f9870e, s1Var.f9870e) && this.f9871i == s1Var.f9871i && this.f9872v == s1Var.f9872v && this.f9873w == s1Var.f9873w && this.f9874x == s1Var.f9874x && ke.d0.a(this.f9875y, s1Var.f9875y)) {
                return true;
            }
        }
        return false;
    }

    public final int f(int i5) {
        return this.f9875y.a(i5).a(-1);
    }

    public final boolean g(int i5) {
        od.b bVar = this.f9875y;
        return i5 == bVar.f15832d - 1 && bVar.b(i5);
    }

    public final boolean h(int i5) {
        return this.f9875y.a(i5).E;
    }

    public final int hashCode() {
        Object obj = this.f9869d;
        int hashCode = (JfifUtil.MARKER_EOI + (obj == null ? 0 : obj.hashCode())) * 31;
        Object obj2 = this.f9870e;
        int hashCode2 = (((hashCode + (obj2 != null ? obj2.hashCode() : 0)) * 31) + this.f9871i) * 31;
        long j = this.f9872v;
        int i5 = (hashCode2 + ((int) (j ^ (j >>> 32)))) * 31;
        long j5 = this.f9873w;
        return this.f9875y.hashCode() + ((((i5 + ((int) (j5 ^ (j5 >>> 32)))) * 31) + (this.f9874x ? 1 : 0)) * 31);
    }

    public final void i(Object obj, Object obj2, int i5, long j, long j5, od.b bVar, boolean z5) {
        this.f9869d = obj;
        this.f9870e = obj2;
        this.f9871i = i5;
        this.f9872v = j;
        this.f9873w = j5;
        this.f9875y = bVar;
        this.f9874x = z5;
    }
}
