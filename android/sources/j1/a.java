package j1;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final byte[] f12373e = new byte[1792];
    public final CharSequence a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12374b;

    /* renamed from: c, reason: collision with root package name */
    public int f12375c;

    /* renamed from: d, reason: collision with root package name */
    public char f12376d;

    static {
        for (int i5 = 0; i5 < 1792; i5++) {
            f12373e[i5] = Character.getDirectionality(i5);
        }
    }

    public a(CharSequence charSequence) {
        this.a = charSequence;
        this.f12374b = charSequence.length();
    }

    public final byte a() {
        int i5 = this.f12375c - 1;
        CharSequence charSequence = this.a;
        char charAt = charSequence.charAt(i5);
        this.f12376d = charAt;
        if (Character.isLowSurrogate(charAt)) {
            int codePointBefore = Character.codePointBefore(charSequence, this.f12375c);
            this.f12375c -= Character.charCount(codePointBefore);
            return Character.getDirectionality(codePointBefore);
        }
        this.f12375c--;
        char c6 = this.f12376d;
        return c6 < 1792 ? f12373e[c6] : Character.getDirectionality(c6);
    }
}
