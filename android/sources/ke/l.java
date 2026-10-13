package ke;

import a5.h0;

/* loaded from: classes3.dex */
public final class l {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public h0 f13314b = new h0(8, (byte) 0);

    /* renamed from: c, reason: collision with root package name */
    public boolean f13315c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f13316d;

    public l(Object obj) {
        this.a = obj;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || l.class != obj.getClass()) {
            return false;
        }
        return this.a.equals(((l) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}
