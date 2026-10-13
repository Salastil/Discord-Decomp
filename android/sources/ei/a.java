package ei;

/* loaded from: classes3.dex */
public abstract class a implements g {
    public abstract boolean a(char c6);

    @Override // ei.g
    public final boolean apply(Object obj) {
        return a(((Character) obj).charValue());
    }
}
