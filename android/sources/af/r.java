package af;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class r {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final ye.d f593b;

    public /* synthetic */ r(a aVar, ye.d dVar) {
        this.a = aVar;
        this.f593b = dVar;
    }

    public final boolean equals(Object obj) {
        if (obj != null && (obj instanceof r)) {
            r rVar = (r) obj;
            if (bf.t.j(this.a, rVar.a) && bf.t.j(this.f593b, rVar.f593b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, this.f593b});
    }

    public final String toString() {
        e4.r rVar = new e4.r(this);
        rVar.e(this.a, "key");
        rVar.e(this.f593b, "feature");
        return rVar.toString();
    }
}
