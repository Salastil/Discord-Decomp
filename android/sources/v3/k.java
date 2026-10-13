package v3;

/* loaded from: classes.dex */
public final class k extends n {
    public final f a = f.f19202c;

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || k.class != obj.getClass()) {
            return false;
        }
        return this.a.equals(((k) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode() + (k.class.getName().hashCode() * 31);
    }

    public final String toString() {
        return "Failure {mOutputData=" + this.a + '}';
    }
}
