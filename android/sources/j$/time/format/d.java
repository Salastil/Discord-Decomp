package j$.time.format;

/* loaded from: classes2.dex */
public final class d implements f {
    public final char a;

    public d(char c6) {
        this.a = c6;
    }

    @Override // j$.time.format.f
    public final boolean a(p pVar, StringBuilder sb2) {
        sb2.append(this.a);
        return true;
    }

    public final String toString() {
        char c6 = this.a;
        if (c6 == '\'') {
            return "''";
        }
        return "'" + c6 + "'";
    }
}
