package ds;

import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public class e0 extends a {

    /* renamed from: f, reason: collision with root package name */
    public final String f7719f;

    public e0(String source) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.f7719f = source;
    }

    @Override // ds.a
    public final int A(int i5) {
        if (i5 < this.f7719f.length()) {
            return i5;
        }
        return -1;
    }

    @Override // ds.a
    public int D() {
        char charAt;
        int i5 = this.f7691b;
        if (i5 == -1) {
            return i5;
        }
        while (true) {
            String str = this.f7719f;
            if (i5 >= str.length() || !((charAt = str.charAt(i5)) == ' ' || charAt == '\n' || charAt == '\r' || charAt == '\t')) {
                break;
            }
            i5++;
        }
        this.f7691b = i5;
        return i5;
    }

    @Override // ds.a
    public boolean c() {
        int i5 = this.f7691b;
        if (i5 == -1) {
            return false;
        }
        while (true) {
            String str = this.f7719f;
            if (i5 >= str.length()) {
                this.f7691b = i5;
                return false;
            }
            char charAt = str.charAt(i5);
            if (charAt != ' ' && charAt != '\n' && charAt != '\r' && charAt != '\t') {
                this.f7691b = i5;
                return a.w(charAt);
            }
            i5++;
        }
    }

    @Override // ds.a
    public final String e() {
        h('\"');
        int i5 = this.f7691b;
        String str = this.f7719f;
        int I = StringsKt.I(str, '\"', i5, 4);
        if (I == -1) {
            l();
            r((byte) 1, false);
            throw null;
        }
        for (int i6 = i5; i6 < I; i6++) {
            if (str.charAt(i6) == '\\') {
                return k(str, this.f7691b, i6);
            }
        }
        this.f7691b = I + 1;
        String substring = str.substring(i5, I);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return substring;
    }

    @Override // ds.a
    public byte f() {
        String str;
        int i5 = this.f7691b;
        while (true) {
            str = this.f7719f;
            if (i5 == -1 || i5 >= str.length()) {
                break;
            }
            int i6 = i5 + 1;
            char charAt = str.charAt(i5);
            if (charAt != ' ' && charAt != '\n' && charAt != '\r' && charAt != '\t') {
                this.f7691b = i6;
                return s.h(charAt);
            }
            i5 = i6;
        }
        this.f7691b = str.length();
        return (byte) 10;
    }

    @Override // ds.a
    public void h(char c6) {
        int i5 = this.f7691b;
        if (i5 == -1) {
            G(c6);
            throw null;
        }
        while (true) {
            String str = this.f7719f;
            if (i5 >= str.length()) {
                this.f7691b = -1;
                G(c6);
                throw null;
            }
            int i6 = i5 + 1;
            char charAt = str.charAt(i5);
            if (charAt != ' ' && charAt != '\n' && charAt != '\r' && charAt != '\t') {
                this.f7691b = i6;
                if (charAt == c6) {
                    return;
                }
                G(c6);
                throw null;
            }
            i5 = i6;
        }
    }

    @Override // ds.a
    public final CharSequence u() {
        return this.f7719f;
    }

    @Override // ds.a
    public final String x(String keyToMatch) {
        Intrinsics.checkNotNullParameter(keyToMatch, "keyToMatch");
        int i5 = this.f7691b;
        try {
            if (f() == 6 && Intrinsics.areEqual(z(), keyToMatch)) {
                this.f7693d = null;
                if (f() == 5) {
                    return z();
                }
            }
            return null;
        } finally {
            this.f7691b = i5;
            this.f7693d = null;
        }
    }
}
