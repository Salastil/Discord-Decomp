package v3;

/* loaded from: classes.dex */
public final class m extends n {
    public final f a;

    public m(f fVar) {
        this.a = fVar;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || m.class != obj.getClass()) {
            return false;
        }
        return this.a.equals(((m) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode() + (m.class.getName().hashCode() * 31);
    }

    public final String toString() {
        return "Success {mOutputData=" + this.a + '}';
    }
}
