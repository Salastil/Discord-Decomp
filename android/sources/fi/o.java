package fi;

/* loaded from: classes3.dex */
public abstract class o {

    /* renamed from: d, reason: collision with root package name */
    public transient e f8690d;

    /* renamed from: e, reason: collision with root package name */
    public transient n f8691e;

    /* renamed from: i, reason: collision with root package name */
    public transient d f8692i;

    public abstract d a();

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof o) {
            return ((n0) this).a().equals(((n0) ((o) obj)).a());
        }
        return false;
    }

    public final int hashCode() {
        return a().f8648i.hashCode();
    }

    public final String toString() {
        return a().f8648i.toString();
    }
}
