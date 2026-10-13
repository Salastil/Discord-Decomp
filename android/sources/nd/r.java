package nd;

/* loaded from: classes3.dex */
public class r {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public final int f15167b;

    /* renamed from: c, reason: collision with root package name */
    public final int f15168c;

    /* renamed from: d, reason: collision with root package name */
    public final long f15169d;

    /* renamed from: e, reason: collision with root package name */
    public final int f15170e;

    public r(Object obj) {
        this(-1L, obj);
    }

    public final boolean a() {
        return this.f15167b != -1;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof r)) {
            return false;
        }
        r rVar = (r) obj;
        return this.a.equals(rVar.a) && this.f15167b == rVar.f15167b && this.f15168c == rVar.f15168c && this.f15169d == rVar.f15169d && this.f15170e == rVar.f15170e;
    }

    public final int hashCode() {
        return ((((((((this.a.hashCode() + 527) * 31) + this.f15167b) * 31) + this.f15168c) * 31) + ((int) this.f15169d)) * 31) + this.f15170e;
    }

    public r(long j, Object obj) {
        this(obj, -1, -1, j, -1);
    }

    public r(r rVar) {
        this.a = rVar.a;
        this.f15167b = rVar.f15167b;
        this.f15168c = rVar.f15168c;
        this.f15169d = rVar.f15169d;
        this.f15170e = rVar.f15170e;
    }

    public r(Object obj, int i5, int i6, long j, int i10) {
        this.a = obj;
        this.f15167b = i5;
        this.f15168c = i6;
        this.f15169d = j;
        this.f15170e = i10;
    }
}
