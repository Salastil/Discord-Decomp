package io.sentry.vendor.gson.stream;

import a3.e;
import bg.y0;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.Closeable;
import java.io.EOFException;
import java.io.Reader;
import java.util.Arrays;
import k0.d;

/* loaded from: classes3.dex */
public final class a implements Closeable {
    public long F;
    public int G;
    public String H;
    public int[] I;
    public String[] K;
    public int[] L;

    /* renamed from: d, reason: collision with root package name */
    public final Reader f12053d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f12054e = false;

    /* renamed from: i, reason: collision with root package name */
    public final char[] f12055i = new char[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];

    /* renamed from: v, reason: collision with root package name */
    public int f12056v = 0;

    /* renamed from: w, reason: collision with root package name */
    public int f12057w = 0;

    /* renamed from: x, reason: collision with root package name */
    public int f12058x = 0;

    /* renamed from: y, reason: collision with root package name */
    public int f12059y = 0;
    public int E = 0;
    public int J = 1;

    public a(Reader reader) {
        int[] iArr = new int[32];
        this.I = iArr;
        iArr[0] = 6;
        this.K = new String[32];
        this.L = new int[32];
        this.f12053d = reader;
    }

    public final boolean A() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 5) {
            this.E = 0;
            int[] iArr = this.L;
            int i6 = this.J - 1;
            iArr[i6] = iArr[i6] + 1;
            return true;
        }
        if (i5 != 6) {
            throw new IllegalStateException("Expected a boolean but was " + j0() + x());
        }
        this.E = 0;
        int[] iArr2 = this.L;
        int i10 = this.J - 1;
        iArr2[i10] = iArr2[i10] + 1;
        return false;
    }

    public final double C() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 15) {
            this.E = 0;
            int[] iArr = this.L;
            int i6 = this.J - 1;
            iArr[i6] = iArr[i6] + 1;
            return this.F;
        }
        if (i5 == 16) {
            this.H = new String(this.f12055i, this.f12056v, this.G);
            this.f12056v += this.G;
        } else if (i5 == 8 || i5 == 9) {
            this.H = X(i5 == 8 ? '\'' : '\"');
        } else if (i5 == 10) {
            this.H = d0();
        } else if (i5 != 11) {
            throw new IllegalStateException("Expected a double but was " + j0() + x());
        }
        this.E = 11;
        double parseDouble = Double.parseDouble(this.H);
        if (!this.f12054e && (Double.isNaN(parseDouble) || Double.isInfinite(parseDouble))) {
            throw new y0("JSON forbids NaN and infinities: " + parseDouble + x());
        }
        this.H = null;
        this.E = 0;
        int[] iArr2 = this.L;
        int i10 = this.J - 1;
        iArr2[i10] = iArr2[i10] + 1;
        return parseDouble;
    }

    public final int P() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 15) {
            long j = this.F;
            int i6 = (int) j;
            if (j != i6) {
                throw new NumberFormatException("Expected an int but was " + this.F + x());
            }
            this.E = 0;
            int[] iArr = this.L;
            int i10 = this.J - 1;
            iArr[i10] = iArr[i10] + 1;
            return i6;
        }
        if (i5 == 16) {
            this.H = new String(this.f12055i, this.f12056v, this.G);
            this.f12056v += this.G;
        } else {
            if (i5 != 8 && i5 != 9 && i5 != 10) {
                throw new IllegalStateException("Expected an int but was " + j0() + x());
            }
            if (i5 == 10) {
                this.H = d0();
            } else {
                this.H = X(i5 == 8 ? '\'' : '\"');
            }
            try {
                int parseInt = Integer.parseInt(this.H);
                this.E = 0;
                int[] iArr2 = this.L;
                int i11 = this.J - 1;
                iArr2[i11] = iArr2[i11] + 1;
                return parseInt;
            } catch (NumberFormatException unused) {
            }
        }
        this.E = 11;
        double parseDouble = Double.parseDouble(this.H);
        int i12 = (int) parseDouble;
        if (i12 != parseDouble) {
            throw new NumberFormatException("Expected an int but was " + this.H + x());
        }
        this.H = null;
        this.E = 0;
        int[] iArr3 = this.L;
        int i13 = this.J - 1;
        iArr3[i13] = iArr3[i13] + 1;
        return i12;
    }

    public final long Q() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 15) {
            this.E = 0;
            int[] iArr = this.L;
            int i6 = this.J - 1;
            iArr[i6] = iArr[i6] + 1;
            return this.F;
        }
        if (i5 == 16) {
            this.H = new String(this.f12055i, this.f12056v, this.G);
            this.f12056v += this.G;
        } else {
            if (i5 != 8 && i5 != 9 && i5 != 10) {
                throw new IllegalStateException("Expected a long but was " + j0() + x());
            }
            if (i5 == 10) {
                this.H = d0();
            } else {
                this.H = X(i5 == 8 ? '\'' : '\"');
            }
            try {
                long parseLong = Long.parseLong(this.H);
                this.E = 0;
                int[] iArr2 = this.L;
                int i10 = this.J - 1;
                iArr2[i10] = iArr2[i10] + 1;
                return parseLong;
            } catch (NumberFormatException unused) {
            }
        }
        this.E = 11;
        double parseDouble = Double.parseDouble(this.H);
        long j = (long) parseDouble;
        if (j != parseDouble) {
            throw new NumberFormatException("Expected a long but was " + this.H + x());
        }
        this.H = null;
        this.E = 0;
        int[] iArr3 = this.L;
        int i11 = this.J - 1;
        iArr3[i11] = iArr3[i11] + 1;
        return j;
    }

    public final String R() {
        String X;
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 14) {
            X = d0();
        } else if (i5 == 12) {
            X = X('\'');
        } else {
            if (i5 != 13) {
                throw new IllegalStateException("Expected a name but was " + j0() + x());
            }
            X = X('\"');
        }
        this.E = 0;
        this.K[this.J - 1] = X;
        return X;
    }

    public final int U(boolean z5) {
        char c6;
        int i5 = this.f12056v;
        int i6 = this.f12057w;
        while (true) {
            if (i5 == i6) {
                this.f12056v = i5;
                if (!q(1)) {
                    if (!z5) {
                        return -1;
                    }
                    throw new EOFException("End of input" + x());
                }
                i5 = this.f12056v;
                i6 = this.f12057w;
            }
            int i10 = i5 + 1;
            char[] cArr = this.f12055i;
            c6 = cArr[i5];
            if (c6 == '\n') {
                this.f12058x++;
                this.f12059y = i10;
            } else if (c6 != ' ' && c6 != '\r' && c6 != '\t') {
                if (c6 == '/') {
                    this.f12056v = i10;
                    if (i10 == i6) {
                        this.f12056v = i5;
                        boolean q5 = q(2);
                        this.f12056v++;
                        if (!q5) {
                            break;
                        }
                    }
                    g();
                    int i11 = this.f12056v;
                    char c8 = cArr[i11];
                    if (c8 == '*') {
                        this.f12056v = i11 + 1;
                        while (true) {
                            if (this.f12056v + 2 > this.f12057w && !q(2)) {
                                p0("Unterminated comment");
                                throw null;
                            }
                            int i12 = this.f12056v;
                            if (cArr[i12] != '\n') {
                                for (int i13 = 0; i13 < 2; i13++) {
                                    if (cArr[this.f12056v + i13] != "*/".charAt(i13)) {
                                        break;
                                    }
                                }
                                i5 = this.f12056v + 2;
                                i6 = this.f12057w;
                                break;
                            }
                            this.f12058x++;
                            this.f12059y = i12 + 1;
                            this.f12056v++;
                        }
                    } else {
                        if (c8 != '/') {
                            break;
                        }
                        this.f12056v = i11 + 1;
                        o0();
                        i5 = this.f12056v;
                        i6 = this.f12057w;
                    }
                } else {
                    if (c6 != '#') {
                        this.f12056v = i10;
                        return c6;
                    }
                    this.f12056v = i10;
                    g();
                    o0();
                    i5 = this.f12056v;
                    i6 = this.f12057w;
                }
            }
            i5 = i10;
        }
        return c6;
    }

    public final void V() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 != 7) {
            throw new IllegalStateException("Expected null but was " + j0() + x());
        }
        this.E = 0;
        int[] iArr = this.L;
        int i6 = this.J - 1;
        iArr[i6] = iArr[i6] + 1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:17:0x002d, code lost:
    
        r10.f12056v = r8;
        r8 = r8 - r3;
        r2 = r8 - 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x0032, code lost:
    
        if (r1 != null) goto L37;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0034, code lost:
    
        r1 = new java.lang.StringBuilder(java.lang.Math.max(r8 * 2, 16));
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x005b, code lost:
    
        if (r1 != null) goto L27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x005d, code lost:
    
        r1 = new java.lang.StringBuilder(java.lang.Math.max((r2 - r3) * 2, 16));
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x006b, code lost:
    
        r1.append(r7, r3, r2 - r3);
        r10.f12056v = r2;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String X(char c6) {
        char[] cArr;
        int i5;
        StringBuilder sb2 = null;
        do {
            int i6 = this.f12056v;
            int i10 = this.f12057w;
            while (true) {
                int i11 = i10;
                int i12 = i6;
                while (true) {
                    cArr = this.f12055i;
                    if (i6 >= i11) {
                        break;
                    }
                    int i13 = i6 + 1;
                    char c8 = cArr[i6];
                    if (c8 == c6) {
                        this.f12056v = i13;
                        int i14 = (i13 - i12) - 1;
                        if (sb2 == null) {
                            return new String(cArr, i12, i14);
                        }
                        sb2.append(cArr, i12, i14);
                        return sb2.toString();
                    }
                    if (c8 == '\\') {
                        break;
                    }
                    if (c8 == '\n') {
                        this.f12058x++;
                        this.f12059y = i13;
                    }
                    i6 = i13;
                }
                sb2.append(cArr, i12, i5);
                sb2.append(m0());
                i6 = this.f12056v;
                i10 = this.f12057w;
            }
        } while (q(1));
        p0("Unterminated string");
        throw null;
    }

    public final String b0() {
        String str;
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 10) {
            str = d0();
        } else if (i5 == 8) {
            str = X('\'');
        } else if (i5 == 9) {
            str = X('\"');
        } else if (i5 == 11) {
            str = this.H;
            this.H = null;
        } else if (i5 == 15) {
            str = Long.toString(this.F);
        } else {
            if (i5 != 16) {
                throw new IllegalStateException("Expected a string but was " + j0() + x());
            }
            str = new String(this.f12055i, this.f12056v, this.G);
            this.f12056v += this.G;
        }
        this.E = 0;
        int[] iArr = this.L;
        int i6 = this.J - 1;
        iArr[i6] = iArr[i6] + 1;
        return str;
    }

    public final void c() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 3) {
            l0(1);
            this.L[this.J - 1] = 0;
            this.E = 0;
        } else {
            throw new IllegalStateException("Expected BEGIN_ARRAY but was " + j0() + x());
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.E = 0;
        this.I[0] = 8;
        this.J = 1;
        this.f12053d.close();
    }

    /* JADX WARN: Code restructure failed: missing block: B:58:0x004a, code lost:
    
        g();
     */
    /* JADX WARN: Failed to find 'out' block for switch in B:54:0x0044. Please report as an issue. */
    /* JADX WARN: Removed duplicated region for block: B:13:0x007c  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0084  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String d0() {
        char[] cArr;
        String sb2;
        StringBuilder sb3 = null;
        int i5 = 0;
        do {
            int i6 = 0;
            while (true) {
                int i10 = this.f12056v;
                int i11 = i10 + i6;
                int i12 = this.f12057w;
                cArr = this.f12055i;
                if (i11 < i12) {
                    char c6 = cArr[i10 + i6];
                    if (c6 != '\t' && c6 != '\n' && c6 != '\f' && c6 != '\r' && c6 != ' ') {
                        if (c6 != '#') {
                            if (c6 != ',') {
                                if (c6 != '/' && c6 != '=') {
                                    if (c6 != '{' && c6 != '}' && c6 != ':') {
                                        if (c6 != ';') {
                                            switch (c6) {
                                                case '[':
                                                case ']':
                                                    break;
                                                case '\\':
                                                    break;
                                                default:
                                                    i6++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if (i6 >= cArr.length) {
                    if (sb3 == null) {
                        sb3 = new StringBuilder(Math.max(i6, 16));
                    }
                    sb3.append(cArr, this.f12056v, i6);
                    this.f12056v += i6;
                } else if (q(i6 + 1)) {
                }
            }
            i5 = i6;
            if (sb3 != null) {
                sb2 = new String(cArr, this.f12056v, i5);
            } else {
                sb3.append(cArr, this.f12056v, i5);
                sb2 = sb3.toString();
            }
            this.f12056v += i5;
            return sb2;
        } while (q(1));
        if (sb3 != null) {
        }
        this.f12056v += i5;
        return sb2;
    }

    public final void f() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 == 1) {
            l0(3);
            this.E = 0;
        } else {
            throw new IllegalStateException("Expected BEGIN_OBJECT but was " + j0() + x());
        }
    }

    public final void g() {
        if (this.f12054e) {
            return;
        }
        p0("Use JsonReader.setLenient(true) to accept malformed JSON");
        throw null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:116:0x0215, code lost:
    
        if (t(r1) != false) goto L121;
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x019d, code lost:
    
        r9 = 2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x0218, code lost:
    
        if (r7 != 2) goto L184;
     */
    /* JADX WARN: Code restructure failed: missing block: B:43:0x021a, code lost:
    
        if (r13 == false) goto L176;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x0220, code lost:
    
        if (r14 != Long.MIN_VALUE) goto L177;
     */
    /* JADX WARN: Code restructure failed: missing block: B:46:0x0222, code lost:
    
        if (r17 == 0) goto L176;
     */
    /* JADX WARN: Code restructure failed: missing block: B:48:0x0229, code lost:
    
        if (r14 != r21) goto L180;
     */
    /* JADX WARN: Code restructure failed: missing block: B:49:0x022b, code lost:
    
        if (r17 != 0) goto L176;
     */
    /* JADX WARN: Code restructure failed: missing block: B:50:0x022d, code lost:
    
        if (r17 == 0) goto L182;
     */
    /* JADX WARN: Code restructure failed: missing block: B:51:0x0230, code lost:
    
        r14 = -r14;
     */
    /* JADX WARN: Code restructure failed: missing block: B:52:0x0231, code lost:
    
        r23.F = r14;
        r23.f12056v += r11;
        r9 = 15;
        r23.E = 15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:61:0x0225, code lost:
    
        r9 = 2;
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x023d, code lost:
    
        if (r7 == r9) goto L189;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x0240, code lost:
    
        if (r7 == 4) goto L189;
     */
    /* JADX WARN: Code restructure failed: missing block: B:66:0x0243, code lost:
    
        if (r7 != 7) goto L121;
     */
    /* JADX WARN: Code restructure failed: missing block: B:68:0x0245, code lost:
    
        r23.G = r11;
        r9 = 16;
        r23.E = 16;
     */
    /* JADX WARN: Removed duplicated region for block: B:185:0x02c2  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x017d A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x017e  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x027c A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:55:0x027d  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x00e8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int i() {
        int U;
        int i5;
        int U2;
        int i6;
        String str;
        String str2;
        int i10;
        char c6;
        long j;
        int i11;
        int i12;
        int i13;
        int[] iArr = this.I;
        int i14 = 1;
        int i15 = this.J - 1;
        int i16 = iArr[i15];
        char[] cArr = this.f12055i;
        if (i16 == 1) {
            iArr[i15] = 2;
        } else if (i16 == 2) {
            int U3 = U(true);
            if (U3 != 44) {
                if (U3 != 59) {
                    if (U3 == 93) {
                        this.E = 4;
                        return 4;
                    }
                    p0("Unterminated array");
                    throw null;
                }
                g();
            }
        } else {
            if (i16 == 3 || i16 == 5) {
                iArr[i15] = 4;
                if (i16 == 5 && (U = U(true)) != 44) {
                    if (U != 59) {
                        if (U == 125) {
                            this.E = 2;
                            return 2;
                        }
                        p0("Unterminated object");
                        throw null;
                    }
                    g();
                }
                int U4 = U(true);
                if (U4 == 34) {
                    this.E = 13;
                    return 13;
                }
                if (U4 == 39) {
                    g();
                    this.E = 12;
                    return 12;
                }
                if (U4 == 125) {
                    if (i16 != 5) {
                        this.E = 2;
                        return 2;
                    }
                    p0("Expected name");
                    throw null;
                }
                g();
                this.f12056v--;
                if (t((char) U4)) {
                    this.E = 14;
                    return 14;
                }
                p0("Expected name");
                throw null;
            }
            if (i16 == 4) {
                iArr[i15] = 5;
                int U5 = U(true);
                if (U5 != 58) {
                    if (U5 != 61) {
                        p0("Expected ':'");
                        throw null;
                    }
                    g();
                    if (this.f12056v < this.f12057w || q(1)) {
                        int i17 = this.f12056v;
                        if (cArr[i17] == '>') {
                            this.f12056v = i17 + 1;
                        }
                    }
                }
            } else {
                if (i16 != 6) {
                    if (i16 == 7) {
                        i5 = 0;
                        if (U(false) == -1) {
                            this.E = 17;
                            return 17;
                        }
                        g();
                        this.f12056v--;
                    } else {
                        i5 = 0;
                        if (i16 == 8) {
                            throw new IllegalStateException("JsonReader is closed");
                        }
                    }
                    U2 = U(true);
                    if (U2 != 34) {
                        this.E = 9;
                        return 9;
                    }
                    if (U2 == 39) {
                        g();
                        this.E = 8;
                        return 8;
                    }
                    if (U2 == 44 || U2 == 59) {
                        i6 = 1;
                    } else {
                        if (U2 == 91) {
                            this.E = 3;
                            return 3;
                        }
                        if (U2 == 93) {
                            i6 = 1;
                            if (i16 == 1) {
                                this.E = 4;
                                return 4;
                            }
                        } else {
                            if (U2 == 123) {
                                this.E = 1;
                                return 1;
                            }
                            int i18 = this.f12056v - 1;
                            this.f12056v = i18;
                            char c8 = cArr[i18];
                            if (c8 == 't' || c8 == 'T') {
                                str = "true";
                                str2 = "TRUE";
                                i10 = 5;
                            } else if (c8 == 'f' || c8 == 'F') {
                                str = "false";
                                str2 = "FALSE";
                                i10 = 6;
                            } else {
                                if (c8 == 'n' || c8 == 'N') {
                                    str = "null";
                                    str2 = "NULL";
                                    i10 = 7;
                                }
                                i10 = i5;
                                if (i10 == 0) {
                                    return i10;
                                }
                                int i19 = this.f12056v;
                                int i20 = this.f12057w;
                                int i21 = i5;
                                int i22 = i21;
                                int i23 = i22;
                                boolean z5 = true;
                                long j5 = 0;
                                while (true) {
                                    if (i19 + i22 == i20) {
                                        if (i22 == cArr.length) {
                                            break;
                                        }
                                        if (!q(i22 + 1)) {
                                            j = 0;
                                            break;
                                        }
                                        int i24 = this.f12056v;
                                        i20 = this.f12057w;
                                        i19 = i24;
                                    }
                                    char c10 = cArr[i19 + i22];
                                    j = 0;
                                    if (c10 != '+') {
                                        if (c10 == 'E' || c10 == 'e') {
                                            i11 = i20;
                                            if (i21 != 2 && i21 != 4) {
                                                break;
                                            }
                                            i21 = 5;
                                            i22++;
                                            i20 = i11;
                                            i14 = 1;
                                        } else if (c10 == '-') {
                                            i11 = i20;
                                            i12 = 6;
                                            if (i21 == 0) {
                                                i21 = 1;
                                                i23 = 1;
                                                i22++;
                                                i20 = i11;
                                                i14 = 1;
                                            } else {
                                                if (i21 != 5) {
                                                    break;
                                                }
                                                i21 = i12;
                                                i22++;
                                                i20 = i11;
                                                i14 = 1;
                                            }
                                        } else if (c10 == '.') {
                                            i11 = i20;
                                            if (i21 != 2) {
                                                break;
                                            }
                                            i21 = 3;
                                            i22++;
                                            i20 = i11;
                                            i14 = 1;
                                        } else {
                                            if (c10 < '0' || c10 > '9') {
                                                break;
                                            }
                                            if (i21 == i14 || i21 == 0) {
                                                i11 = i20;
                                                j5 = -(c10 - '0');
                                                i21 = 2;
                                            } else if (i21 != 2) {
                                                i11 = i20;
                                                if (i21 == 3) {
                                                    i21 = 4;
                                                } else if (i21 == 5 || i21 == 6) {
                                                    i21 = 7;
                                                }
                                            } else {
                                                if (j5 == 0) {
                                                    break;
                                                }
                                                i11 = i20;
                                                long j7 = (10 * j5) - (c10 - '0');
                                                z5 &= j5 > -922337203685477580L || (j5 == -922337203685477580L && j7 < j5);
                                                j5 = j7;
                                            }
                                            i22++;
                                            i20 = i11;
                                            i14 = 1;
                                        }
                                        if (i13 == 0) {
                                            return i13;
                                        }
                                        if (!t(cArr[this.f12056v])) {
                                            p0("Expected value");
                                            throw null;
                                        }
                                        g();
                                        this.E = 10;
                                        return 10;
                                    }
                                    i11 = i20;
                                    i12 = 6;
                                    if (i21 != 5) {
                                        break;
                                    }
                                    i21 = i12;
                                    i22++;
                                    i20 = i11;
                                    i14 = 1;
                                }
                                i13 = 0;
                                if (i13 == 0) {
                                }
                            }
                            int length = str.length();
                            int i25 = 1;
                            while (true) {
                                if (i25 < length) {
                                    if ((this.f12056v + i25 >= this.f12057w && !q(i25 + 1)) || ((c6 = cArr[this.f12056v + i25]) != str.charAt(i25) && c6 != str2.charAt(i25))) {
                                        break;
                                    }
                                    i25++;
                                } else if ((this.f12056v + length >= this.f12057w && !q(length + 1)) || !t(cArr[this.f12056v + length])) {
                                    this.f12056v += length;
                                    this.E = i10;
                                }
                            }
                            i10 = i5;
                            if (i10 == 0) {
                            }
                        }
                    }
                    if (i16 != i6 && i16 != 2) {
                        p0("Unexpected value");
                        throw null;
                    }
                    g();
                    this.f12056v -= i6;
                    this.E = 7;
                    return 7;
                }
                if (this.f12054e) {
                    U(true);
                    int i26 = this.f12056v;
                    int i27 = i26 - 1;
                    this.f12056v = i27;
                    if ((i26 + 4 <= this.f12057w || q(5)) && cArr[i27] == ')' && cArr[i26] == ']' && cArr[i26 + 1] == '}' && cArr[i26 + 2] == '\'' && cArr[i26 + 3] == '\n') {
                        this.f12056v += 5;
                    }
                }
                this.I[this.J - 1] = 7;
            }
        }
        i5 = 0;
        U2 = U(true);
        if (U2 != 34) {
        }
    }

    public final b j0() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        switch (i5) {
            case 1:
                return b.BEGIN_OBJECT;
            case 2:
                return b.END_OBJECT;
            case 3:
                return b.BEGIN_ARRAY;
            case 4:
                return b.END_ARRAY;
            case 5:
            case 6:
                return b.BOOLEAN;
            case 7:
                return b.NULL;
            case 8:
            case 9:
            case 10:
            case 11:
                return b.STRING;
            case 12:
            case 13:
            case 14:
                return b.NAME;
            case 15:
            case 16:
                return b.NUMBER;
            case 17:
                return b.END_DOCUMENT;
            default:
                throw new AssertionError();
        }
    }

    public final void l() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 != 4) {
            throw new IllegalStateException("Expected END_ARRAY but was " + j0() + x());
        }
        int i6 = this.J;
        this.J = i6 - 1;
        int[] iArr = this.L;
        int i10 = i6 - 2;
        iArr[i10] = iArr[i10] + 1;
        this.E = 0;
    }

    public final void l0(int i5) {
        int i6 = this.J;
        int[] iArr = this.I;
        if (i6 == iArr.length) {
            int i10 = i6 * 2;
            this.I = Arrays.copyOf(iArr, i10);
            this.L = Arrays.copyOf(this.L, i10);
            this.K = (String[]) Arrays.copyOf(this.K, i10);
        }
        int[] iArr2 = this.I;
        int i11 = this.J;
        this.J = i11 + 1;
        iArr2[i11] = i5;
    }

    public final char m0() {
        int i5;
        if (this.f12056v == this.f12057w && !q(1)) {
            p0("Unterminated escape sequence");
            throw null;
        }
        int i6 = this.f12056v;
        int i10 = i6 + 1;
        this.f12056v = i10;
        char[] cArr = this.f12055i;
        char c6 = cArr[i6];
        if (c6 == '\n') {
            this.f12058x++;
            this.f12059y = i10;
            return c6;
        }
        if (c6 == '\"' || c6 == '\'' || c6 == '/' || c6 == '\\') {
            return c6;
        }
        if (c6 == 'b') {
            return '\b';
        }
        if (c6 == 'f') {
            return '\f';
        }
        if (c6 == 'n') {
            return '\n';
        }
        if (c6 == 'r') {
            return '\r';
        }
        if (c6 == 't') {
            return '\t';
        }
        if (c6 != 'u') {
            p0("Invalid escape sequence");
            throw null;
        }
        if (i6 + 5 > this.f12057w && !q(4)) {
            p0("Unterminated escape sequence");
            throw null;
        }
        int i11 = this.f12056v;
        int i12 = i11 + 4;
        char c8 = 0;
        while (i11 < i12) {
            char c10 = cArr[i11];
            char c11 = (char) (c8 << 4);
            if (c10 >= '0' && c10 <= '9') {
                i5 = c10 - '0';
            } else if (c10 >= 'a' && c10 <= 'f') {
                i5 = c10 - 'W';
            } else {
                if (c10 < 'A' || c10 > 'F') {
                    throw new NumberFormatException("\\u".concat(new String(cArr, this.f12056v, 4)));
                }
                i5 = c10 - '7';
            }
            c8 = (char) (i5 + c11);
            i11++;
        }
        this.f12056v += 4;
        return c8;
    }

    public final void n0(char c6) {
        do {
            int i5 = this.f12056v;
            int i6 = this.f12057w;
            while (i5 < i6) {
                int i10 = i5 + 1;
                char c8 = this.f12055i[i5];
                if (c8 == c6) {
                    this.f12056v = i10;
                    return;
                }
                if (c8 == '\\') {
                    this.f12056v = i10;
                    m0();
                    i5 = this.f12056v;
                    i6 = this.f12057w;
                } else {
                    if (c8 == '\n') {
                        this.f12058x++;
                        this.f12059y = i10;
                    }
                    i5 = i10;
                }
            }
            this.f12056v = i5;
        } while (q(1));
        p0("Unterminated string");
        throw null;
    }

    public final void o() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        if (i5 != 2) {
            throw new IllegalStateException("Expected END_OBJECT but was " + j0() + x());
        }
        int i6 = this.J;
        int i10 = i6 - 1;
        this.J = i10;
        this.K[i10] = null;
        int[] iArr = this.L;
        int i11 = i6 - 2;
        iArr[i11] = iArr[i11] + 1;
        this.E = 0;
    }

    public final void o0() {
        char c6;
        do {
            if (this.f12056v >= this.f12057w && !q(1)) {
                return;
            }
            int i5 = this.f12056v;
            int i6 = i5 + 1;
            this.f12056v = i6;
            c6 = this.f12055i[i5];
            if (c6 == '\n') {
                this.f12058x++;
                this.f12059y = i6;
                return;
            }
        } while (c6 != '\r');
    }

    public final void p0(String str) {
        StringBuilder o6 = d.o(str);
        o6.append(x());
        throw new y0(o6.toString());
    }

    public final boolean q(int i5) {
        int i6;
        int i10;
        int i11 = this.f12059y;
        int i12 = this.f12056v;
        this.f12059y = i11 - i12;
        int i13 = this.f12057w;
        char[] cArr = this.f12055i;
        if (i13 != i12) {
            int i14 = i13 - i12;
            this.f12057w = i14;
            System.arraycopy(cArr, i12, cArr, 0, i14);
        } else {
            this.f12057w = 0;
        }
        this.f12056v = 0;
        do {
            int i15 = this.f12057w;
            int read = this.f12053d.read(cArr, i15, cArr.length - i15);
            if (read == -1) {
                return false;
            }
            i6 = this.f12057w + read;
            this.f12057w = i6;
            if (this.f12058x == 0 && (i10 = this.f12059y) == 0 && i6 > 0 && cArr[0] == 65279) {
                this.f12056v++;
                this.f12059y = i10 + 1;
                i5++;
            }
        } while (i6 < i5);
        return true;
    }

    public final boolean r() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = i();
        }
        return (i5 == 2 || i5 == 4) ? false : true;
    }

    public final boolean t(char c6) {
        if (c6 == '\t' || c6 == '\n' || c6 == '\f' || c6 == '\r' || c6 == ' ') {
            return false;
        }
        if (c6 != '#') {
            if (c6 == ',') {
                return false;
            }
            if (c6 != '/' && c6 != '=') {
                if (c6 == '{' || c6 == '}' || c6 == ':') {
                    return false;
                }
                if (c6 != ';') {
                    switch (c6) {
                        case '[':
                        case ']':
                            return false;
                        case '\\':
                            break;
                        default:
                            return true;
                    }
                }
            }
        }
        g();
        return false;
    }

    public final String toString() {
        return a.class.getSimpleName() + x();
    }

    public final String x() {
        StringBuilder q5 = e.q(this.f12058x + 1, " at line ", (this.f12056v - this.f12059y) + 1, " column ", " path ");
        StringBuilder sb2 = new StringBuilder("$");
        int i5 = this.J;
        for (int i6 = 0; i6 < i5; i6++) {
            int i10 = this.I[i6];
            if (i10 == 1 || i10 == 2) {
                sb2.append('[');
                sb2.append(this.L[i6]);
                sb2.append(']');
            } else if (i10 == 3 || i10 == 4 || i10 == 5) {
                sb2.append('.');
                String str = this.K[i6];
                if (str != null) {
                    sb2.append(str);
                }
            }
        }
        q5.append(sb2.toString());
        return q5.toString();
    }
}
