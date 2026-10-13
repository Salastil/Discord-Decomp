package re;

import bf.t;
import e4.e;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b implements ze.b {

    /* renamed from: i, reason: collision with root package name */
    public static final b f17276i;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17277d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17278e;

    static {
        e eVar = new e(20, false);
        eVar.f7943e = Boolean.FALSE;
        f17276i = new b(eVar);
    }

    public b(e eVar) {
        this.f17277d = ((Boolean) eVar.f7943e).booleanValue();
        this.f17278e = (String) eVar.f7944i;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return t.j(null, null) && this.f17277d == bVar.f17277d && t.j(this.f17278e, bVar.f17278e);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{null, Boolean.valueOf(this.f17277d), this.f17278e});
    }
}
