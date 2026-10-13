package ds;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public int f7691b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f7692c;

    /* renamed from: d, reason: collision with root package name */
    public Object f7693d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7694e;

    public a(qc.c cVar, qc.e eVar, long j, long j5, long j7, long j10, long j11, int i5) {
        this.f7693d = eVar;
        this.f7691b = i5;
        this.f7692c = new qc.a(cVar, j, j5, j7, j10, j11);
    }

    public static int B(qc.k kVar, long j, qc.m mVar) {
        if (j == kVar.getPosition()) {
            return 0;
        }
        mVar.a = j;
        return 1;
    }

    public static /* synthetic */ void q(a aVar, String str, int i5, String str2, int i6) {
        if ((i6 & 2) != 0) {
            i5 = aVar.f7691b;
        }
        if ((i6 & 4) != 0) {
            str2 = "";
        }
        aVar.p(i5, str, str2);
        throw null;
    }

    public static /* synthetic */ void s(a aVar, byte b10) {
        aVar.r(b10, true);
        throw null;
    }

    public static boolean w(char c6) {
        return (c6 == ',' || c6 == ':' || c6 == ']' || c6 == '}') ? false : true;
    }

    public abstract int A(int i5);

    public void C(long j) {
        qc.b bVar = (qc.b) this.f7694e;
        if (bVar == null || bVar.a != j) {
            qc.a aVar = (qc.a) this.f7692c;
            this.f7694e = new qc.b(j, aVar.a.b(j), aVar.f16751c, aVar.f16752d, aVar.f16753e, aVar.f16754f);
        }
    }

    public abstract int D();

    public String E(int i5, int i6) {
        return u().subSequence(i5, i6).toString();
    }

    public boolean F() {
        int D = D();
        CharSequence u5 = u();
        if (D >= u5.length() || D == -1 || u5.charAt(D) != ',') {
            return false;
        }
        this.f7691b++;
        return true;
    }

    public void G(char c6) {
        int i5 = this.f7691b;
        if (i5 > 0 && c6 == '\"') {
            try {
                this.f7691b = i5 - 1;
                String l6 = l();
                this.f7691b = i5;
                if (Intrinsics.areEqual(l6, "null")) {
                    p(this.f7691b - 1, "Expected string literal but 'null' literal was found", "Use 'coerceInputValues = true' in 'Json {}' builder to coerce nulls if property has a default value.");
                    throw null;
                }
            } catch (Throwable th2) {
                this.f7691b = i5;
                throw th2;
            }
        }
        s(this, s.h(c6));
        throw null;
    }

    public int a(int i5, CharSequence charSequence) {
        int i6 = i5 + 4;
        if (i6 < charSequence.length()) {
            ((StringBuilder) this.f7694e).append((char) (t(i5 + 3, charSequence) + (t(i5, charSequence) << 12) + (t(i5 + 1, charSequence) << 8) + (t(i5 + 2, charSequence) << 4)));
            return i6;
        }
        this.f7691b = i5;
        n();
        if (this.f7691b + 4 < charSequence.length()) {
            return a(this.f7691b, charSequence);
        }
        q(this, "Unexpected EOF during unicode escape", 0, null, 6);
        throw null;
    }

    public void b(int i5, int i6) {
        ((StringBuilder) this.f7694e).append(u(), i5, i6);
    }

    public abstract boolean c();

    public void d(int i5, String str) {
        if (u().length() - i5 < str.length()) {
            q(this, "Unexpected end of boolean literal", 0, null, 6);
            throw null;
        }
        int length = str.length();
        for (int i6 = 0; i6 < length; i6++) {
            if (str.charAt(i6) != (u().charAt(i5 + i6) | ' ')) {
                q(this, "Expected valid boolean literal prefix, but had '" + l() + '\'', 0, null, 6);
                throw null;
            }
        }
        this.f7691b = str.length() + i5;
    }

    public abstract String e();

    public abstract byte f();

    public byte g(byte b10) {
        byte f2 = f();
        if (f2 == b10) {
            return f2;
        }
        s(this, b10);
        throw null;
    }

    public abstract void h(char c6);

    /* JADX WARN: Code restructure failed: missing block: B:100:0x0191, code lost:
    
        q(r21, "Can't convert " + r1 + " to Long", 0, null, 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:101:0x01aa, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:102:0x01ab, code lost:
    
        q(r21, "Numeric value overflow", 0, null, 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x01b1, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:105:0x0173, code lost:
    
        if (r8 != 1) goto L103;
     */
    /* JADX WARN: Code restructure failed: missing block: B:106:0x0175, code lost:
    
        r5 = java.lang.Math.pow(10.0d, r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:108:0x01b7, code lost:
    
        throw new fo.n();
     */
    /* JADX WARN: Code restructure failed: missing block: B:109:0x01b8, code lost:
    
        if (r13 == false) goto L107;
     */
    /* JADX WARN: Code restructure failed: missing block: B:110:0x01ba, code lost:
    
        return r14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:112:0x01bf, code lost:
    
        if (r14 == Long.MIN_VALUE) goto L111;
     */
    /* JADX WARN: Code restructure failed: missing block: B:114:0x01c2, code lost:
    
        return -r14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:115:0x01c3, code lost:
    
        q(r21, "Numeric value overflow", 0, null, 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:116:0x01c9, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:118:0x01ca, code lost:
    
        q(r21, "Expected numeric literal", 0, null, 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:119:0x01cf, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:120:0x0130, code lost:
    
        r2 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:69:0x010e, code lost:
    
        q(r21, "Unexpected symbol '" + r7 + "' in numeric literal", r6, null, 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x0127, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x012c, code lost:
    
        if (r11 == r1) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:74:0x012e, code lost:
    
        r2 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:75:0x0131, code lost:
    
        if (r1 == r11) goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:76:0x0133, code lost:
    
        if (r13 == false) goto L75;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x0137, code lost:
    
        if (r1 == (r11 - 1)) goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x013f, code lost:
    
        if (r19 == false) goto L84;
     */
    /* JADX WARN: Code restructure failed: missing block: B:80:0x0141, code lost:
    
        if (r2 == false) goto L82;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x014d, code lost:
    
        if (u().charAt(r11) != '\"') goto L80;
     */
    /* JADX WARN: Code restructure failed: missing block: B:83:0x014f, code lost:
    
        r11 = r11 + 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:84:0x0152, code lost:
    
        q(r21, "Expected closing quotation mark", 0, null, 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x015a, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:86:0x015b, code lost:
    
        q(r21, "EOF", 0, null, 6);
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x0161, code lost:
    
        throw null;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x0162, code lost:
    
        r21.f7691b = r11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x0164, code lost:
    
        if (r20 == false) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x0166, code lost:
    
        r1 = r14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x0169, code lost:
    
        if (r8 != 0) goto L89;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x016b, code lost:
    
        r5 = java.lang.Math.pow(10.0d, -r9);
     */
    /* JADX WARN: Code restructure failed: missing block: B:93:0x017a, code lost:
    
        r1 = r1 * r5;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x017f, code lost:
    
        if (r1 > 9.223372036854776E18d) goto L101;
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x0185, code lost:
    
        if (r1 < (-9.223372036854776E18d)) goto L101;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x018d, code lost:
    
        if (java.lang.Math.floor(r1) != r1) goto L99;
     */
    /* JADX WARN: Code restructure failed: missing block: B:99:0x018f, code lost:
    
        r14 = (long) r1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public long i() {
        boolean z5;
        boolean z6;
        boolean z7;
        int A = A(D());
        int i5 = 0;
        if (A < u().length() && A != -1) {
            if (u().charAt(A) == '\"') {
                A++;
                if (A == u().length()) {
                    q(this, "EOF", 0, null, 6);
                    throw null;
                }
                z5 = true;
            } else {
                z5 = false;
            }
            int i6 = A;
            int i10 = 0;
            boolean z8 = false;
            boolean z10 = false;
            long j = 0;
            long j5 = 0;
            while (true) {
                if (i6 == u().length()) {
                    z6 = z5;
                    z7 = z8;
                    break;
                }
                char charAt = u().charAt(i6);
                if ((charAt != 'e' && charAt != 'E') || z8) {
                    z6 = z5;
                    if (charAt == '-' && z8) {
                        if (i6 == A) {
                            q(this, "Unexpected symbol '-' in numeric literal", i5, null, 6);
                            throw null;
                        }
                        i6++;
                        i10 = i5;
                        z5 = z6;
                    } else if (charAt != '+' || !z8) {
                        z7 = z8;
                        if (charAt != '-') {
                            if (s.h(charAt) != 0) {
                                break;
                            }
                            i6++;
                            int i11 = charAt - '0';
                            if (i11 < 0 || i11 >= 10) {
                                break;
                            }
                            if (z7) {
                                j = (j * 10) + i11;
                                z5 = z6;
                                z8 = z7;
                            } else {
                                j5 = (j5 * 10) - i11;
                                if (j5 > 0) {
                                    q(this, "Numeric value overflow", 0, null, 6);
                                    throw null;
                                }
                                z5 = z6;
                                z8 = z7;
                                i5 = 0;
                            }
                        } else {
                            if (i6 != A) {
                                q(this, "Unexpected symbol '-' in numeric literal", i5, null, 6);
                                throw null;
                            }
                            i6++;
                            z5 = z6;
                            z8 = z7;
                            z10 = true;
                        }
                    } else {
                        if (i6 == A) {
                            q(this, "Unexpected symbol '+' in numeric literal", i5, null, 6);
                            throw null;
                        }
                        i6++;
                        z5 = z6;
                        i10 = 1;
                    }
                } else {
                    if (i6 == A) {
                        q(this, "Unexpected symbol " + charAt + " in numeric literal", i5, null, 6);
                        throw null;
                    }
                    i6++;
                    i10 = 1;
                    z8 = true;
                }
            }
        } else {
            q(this, "EOF", 0, null, 6);
            throw null;
        }
    }

    public String j() {
        String str = (String) this.f7693d;
        if (str == null) {
            return e();
        }
        Intrinsics.checkNotNull(str);
        this.f7693d = null;
        return str;
    }

    public String k(CharSequence source, int i5, int i6) {
        Intrinsics.checkNotNullParameter(source, "source");
        char charAt = source.charAt(i6);
        boolean z5 = false;
        while (charAt != '\"') {
            if (charAt == '\\') {
                b(i5, i6);
                int A = A(i6 + 1);
                if (A == -1) {
                    q(this, "Expected escape sequence to continue, got EOF", 0, null, 6);
                    throw null;
                }
                int i10 = A + 1;
                char charAt2 = u().charAt(A);
                if (charAt2 == 'u') {
                    i10 = a(i10, u());
                } else {
                    char c6 = charAt2 < 'u' ? i.a[charAt2] : (char) 0;
                    if (c6 == 0) {
                        q(this, "Invalid escaped char '" + charAt2 + '\'', 0, null, 6);
                        throw null;
                    }
                    ((StringBuilder) this.f7694e).append(c6);
                }
                i5 = A(i10);
                if (i5 == -1) {
                    q(this, "Unexpected EOF", i5, null, 4);
                    throw null;
                }
            } else {
                i6++;
                if (i6 >= source.length()) {
                    b(i5, i6);
                    i5 = A(i6);
                    if (i5 == -1) {
                        q(this, "Unexpected EOF", i5, null, 4);
                        throw null;
                    }
                } else {
                    continue;
                    charAt = source.charAt(i6);
                }
            }
            i6 = i5;
            z5 = true;
            charAt = source.charAt(i6);
        }
        String E = !z5 ? E(i5, i6) : m(i5, i6);
        this.f7691b = i6 + 1;
        return E;
    }

    public String l() {
        String str = (String) this.f7693d;
        if (str != null) {
            Intrinsics.checkNotNull(str);
            this.f7693d = null;
            return str;
        }
        int D = D();
        if (D >= u().length() || D == -1) {
            q(this, "EOF", D, null, 4);
            throw null;
        }
        byte h6 = s.h(u().charAt(D));
        if (h6 == 1) {
            return j();
        }
        if (h6 != 0) {
            q(this, "Expected beginning of the string, but got " + u().charAt(D), 0, null, 6);
            throw null;
        }
        boolean z5 = false;
        while (s.h(u().charAt(D)) == 0) {
            D++;
            if (D >= u().length()) {
                b(this.f7691b, D);
                int A = A(D);
                if (A == -1) {
                    this.f7691b = D;
                    return m(0, 0);
                }
                D = A;
                z5 = true;
            }
        }
        String E = !z5 ? E(this.f7691b, D) : m(this.f7691b, D);
        this.f7691b = D;
        return E;
    }

    public String m(int i5, int i6) {
        b(i5, i6);
        StringBuilder sb2 = (StringBuilder) this.f7694e;
        String sb3 = sb2.toString();
        Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
        sb2.setLength(0);
        return sb3;
    }

    public void o() {
        if (f() == 10) {
            return;
        }
        q(this, "Expected EOF after parsing, but had " + u().charAt(this.f7691b - 1) + " instead", 0, null, 6);
        throw null;
    }

    public void p(int i5, String message, String hint) {
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(hint, "hint");
        String concat = hint.length() == 0 ? "" : ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE.concat(hint);
        StringBuilder p3 = k0.d.p(message, " at path: ");
        p3.append(((a1.d) this.f7692c).h());
        p3.append(concat);
        throw s.d(i5, u(), p3.toString());
    }

    public void r(byte b10, boolean z5) {
        String t5 = s.t(b10);
        int i5 = z5 ? this.f7691b - 1 : this.f7691b;
        q(this, s4.h.g("Expected ", t5, ", but had '", (this.f7691b == u().length() || i5 < 0) ? "EOF" : String.valueOf(u().charAt(i5)), "' instead"), i5, null, 4);
        throw null;
    }

    public int t(int i5, CharSequence charSequence) {
        char charAt = charSequence.charAt(i5);
        if ('0' <= charAt && charAt < ':') {
            return charAt - '0';
        }
        if ('a' <= charAt && charAt < 'g') {
            return charAt - 'W';
        }
        if ('A' <= charAt && charAt < 'G') {
            return charAt - '7';
        }
        q(this, "Invalid toHexChar char '" + charAt + "' in unicode escape", 0, null, 6);
        throw null;
    }

    public String toString() {
        switch (this.a) {
            case 0:
                StringBuilder sb2 = new StringBuilder("JsonReader(source='");
                sb2.append((Object) u());
                sb2.append("', currentPosition=");
                return com.discord.chat.bridge.botuikit.a.i(sb2, this.f7691b, ')');
            default:
                return super.toString();
        }
    }

    public abstract CharSequence u();

    /* JADX WARN: Code restructure failed: missing block: B:38:0x00d2, code lost:
    
        return B(r28, r9, r29);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public int v(qc.k kVar, qc.m mVar) {
        qc.e eVar = (qc.e) this.f7693d;
        while (true) {
            qc.b bVar = (qc.b) this.f7694e;
            ke.b.l(bVar);
            long j = bVar.f16759f;
            long j5 = bVar.f16760g;
            long j7 = bVar.f16761h;
            if (j5 - j <= this.f7691b) {
                this.f7694e = null;
                eVar.H0();
                return B(kVar, j, mVar);
            }
            long position = j7 - kVar.getPosition();
            if (position < 0 || position > 262144) {
                break;
            }
            kVar.u((int) position);
            kVar.t();
            qc.d d02 = eVar.d0(kVar, bVar.f16755b);
            int i5 = d02.a;
            long j10 = d02.f16763b;
            long j11 = d02.f16764c;
            if (i5 == -3) {
                this.f7694e = null;
                eVar.H0();
                return B(kVar, j7, mVar);
            }
            if (i5 == -2) {
                bVar.f16757d = j10;
                bVar.f16759f = j11;
                bVar.f16761h = qc.b.a(bVar.f16755b, j10, bVar.f16758e, j11, bVar.f16760g, bVar.f16756c);
            } else {
                if (i5 != -1) {
                    if (i5 != 0) {
                        throw new IllegalStateException("Invalid case");
                    }
                    long position2 = j11 - kVar.getPosition();
                    if (position2 >= 0 && position2 <= 262144) {
                        kVar.u((int) position2);
                    }
                    this.f7694e = null;
                    eVar.H0();
                    return B(kVar, j11, mVar);
                }
                bVar.f16758e = j10;
                bVar.f16760g = j11;
                bVar.f16761h = qc.b.a(bVar.f16755b, bVar.f16757d, j10, bVar.f16759f, j11, bVar.f16756c);
            }
        }
    }

    public abstract String x(String str);

    public byte y() {
        CharSequence u5 = u();
        int i5 = this.f7691b;
        while (true) {
            int A = A(i5);
            if (A == -1) {
                this.f7691b = A;
                return (byte) 10;
            }
            char charAt = u5.charAt(A);
            if (charAt != '\t' && charAt != '\n' && charAt != '\r' && charAt != ' ') {
                this.f7691b = A;
                return s.h(charAt);
            }
            i5 = A + 1;
        }
    }

    public String z() {
        if (y() != 1) {
            return null;
        }
        String j = j();
        this.f7693d = j;
        return j;
    }

    public a() {
        a1.d dVar = new a1.d(6, (byte) 0);
        dVar.f15i = new Object[8];
        int[] iArr = new int[8];
        for (int i5 = 0; i5 < 8; i5++) {
            iArr[i5] = -1;
        }
        dVar.f16v = iArr;
        dVar.f14e = -1;
        this.f7692c = dVar;
        this.f7694e = new StringBuilder();
    }

    public void n() {
    }
}
