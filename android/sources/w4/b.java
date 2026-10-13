package w4;

import ai.k;
import bg.y0;
import e4.e;
import et.o;
import et.r;
import io.sentry.hints.j;
import java.io.EOFException;
import kotlin.text.Charsets;
import okio.Buffer;
import okio.ByteString;
import s4.h;

/* loaded from: classes.dex */
public final class b extends a {
    public static final ByteString I;
    public static final ByteString J;
    public static final ByteString K;
    public int E;
    public long F;
    public int G;
    public String H;

    /* renamed from: x, reason: collision with root package name */
    public final r f19684x;

    /* renamed from: y, reason: collision with root package name */
    public final Buffer f19685y;

    static {
        ByteString byteString = ByteString.f16115v;
        I = j.D("'\\");
        J = j.D("\"\\");
        K = j.D("{}[]:, \n\t\r\f/\\;#=");
        j.D("\n\r");
        j.D("*/");
    }

    public b(r rVar) {
        this.f19681e = new int[32];
        this.f19682i = new String[32];
        this.f19683v = new int[32];
        this.E = 0;
        this.f19684x = rVar;
        this.f19685y = rVar.f8273e;
        C(6);
    }

    @Override // w4.a
    public final int A() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        switch (i5) {
            case 1:
                return 3;
            case 2:
                return 4;
            case 3:
                return 1;
            case 4:
                return 2;
            case 5:
            case 6:
                return 8;
            case 7:
                return 9;
            case 8:
            case 9:
            case 10:
            case 11:
                return 6;
            case 12:
            case 13:
            case 14:
            case 15:
                return 5;
            case 16:
            case 17:
                return 7;
            case 18:
                return 10;
            default:
                throw new AssertionError();
        }
    }

    @Override // w4.a
    public final int P(e eVar) {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 < 12 || i5 > 15) {
            return -1;
        }
        if (i5 == 15) {
            return b0(this.H, eVar);
        }
        int Y = this.f19684x.Y((o) eVar.f7944i);
        if (Y != -1) {
            this.E = 0;
            this.f19682i[this.f19680d - 1] = ((String[]) eVar.f7943e)[Y];
            return Y;
        }
        String str = this.f19682i[this.f19680d - 1];
        String j02 = j0();
        int b02 = b0(j02, eVar);
        if (b02 == -1) {
            this.E = 15;
            this.H = j02;
            this.f19682i[this.f19680d - 1] = str;
        }
        return b02;
    }

    @Override // w4.a
    public final void Q() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 14) {
            long g6 = this.f19684x.g(K);
            Buffer buffer = this.f19685y;
            if (g6 == -1) {
                g6 = buffer.f16114e;
            }
            buffer.skip(g6);
        } else if (i5 == 13) {
            p0(J);
        } else if (i5 == 12) {
            p0(I);
        } else if (i5 != 15) {
            throw new k("Expected a name but was " + h.n(A()) + " at path " + l());
        }
        this.E = 0;
        this.f19682i[this.f19680d - 1] = "null";
    }

    @Override // w4.a
    public final void R() {
        int i5 = 0;
        do {
            int i6 = this.E;
            if (i6 == 0) {
                i6 = X();
            }
            if (i6 == 3) {
                C(1);
            } else if (i6 == 1) {
                C(3);
            } else {
                if (i6 == 4) {
                    i5--;
                    if (i5 < 0) {
                        throw new k("Expected a value but was " + h.n(A()) + " at path " + l());
                    }
                    this.f19680d--;
                } else if (i6 == 2) {
                    i5--;
                    if (i5 < 0) {
                        throw new k("Expected a value but was " + h.n(A()) + " at path " + l());
                    }
                    this.f19680d--;
                } else {
                    Buffer buffer = this.f19685y;
                    if (i6 == 14 || i6 == 10) {
                        long g6 = this.f19684x.g(K);
                        if (g6 == -1) {
                            g6 = buffer.f16114e;
                        }
                        buffer.skip(g6);
                    } else if (i6 == 9 || i6 == 13) {
                        p0(J);
                    } else if (i6 == 8 || i6 == 12) {
                        p0(I);
                    } else if (i6 == 17) {
                        buffer.skip(this.G);
                    } else if (i6 == 18) {
                        throw new k("Expected a value but was " + h.n(A()) + " at path " + l());
                    }
                }
                this.E = 0;
            }
            i5++;
            this.E = 0;
        } while (i5 != 0);
        int[] iArr = this.f19683v;
        int i10 = this.f19680d - 1;
        iArr[i10] = iArr[i10] + 1;
        this.f19682i[i10] = "null";
    }

    public final void V() {
        U("Use JsonReader.setLenient(true) to accept malformed JSON");
        throw null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:101:0x01bc, code lost:
    
        if (r1 == 4) goto L153;
     */
    /* JADX WARN: Code restructure failed: missing block: B:103:0x01bf, code lost:
    
        if (r1 != 7) goto L113;
     */
    /* JADX WARN: Code restructure failed: missing block: B:104:0x01c1, code lost:
    
        r22.G = r2;
        r9 = 17;
        r22.E = 17;
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x0196, code lost:
    
        if (d0(r10) != false) goto L113;
     */
    /* JADX WARN: Code restructure failed: missing block: B:88:0x0198, code lost:
    
        if (r1 != 2) goto L148;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x019a, code lost:
    
        if (r4 == false) goto L148;
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x01a0, code lost:
    
        if (r8 != Long.MIN_VALUE) goto L141;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x01a2, code lost:
    
        if (r13 == false) goto L148;
     */
    /* JADX WARN: Code restructure failed: missing block: B:94:0x01a6, code lost:
    
        if (r8 != r17) goto L144;
     */
    /* JADX WARN: Code restructure failed: missing block: B:95:0x01a8, code lost:
    
        if (r13 != false) goto L148;
     */
    /* JADX WARN: Code restructure failed: missing block: B:96:0x01aa, code lost:
    
        if (r13 == false) goto L146;
     */
    /* JADX WARN: Code restructure failed: missing block: B:97:0x01ad, code lost:
    
        r8 = -r8;
     */
    /* JADX WARN: Code restructure failed: missing block: B:98:0x01ae, code lost:
    
        r22.F = r8;
        r7.skip(r2);
        r9 = 16;
        r22.E = 16;
     */
    /* JADX WARN: Code restructure failed: missing block: B:99:0x01b9, code lost:
    
        if (r1 == 2) goto L153;
     */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0116 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0117  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x01ee A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x01ef  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int X() {
        int i5;
        String str;
        String str2;
        long j;
        char o6;
        int i6;
        char c6;
        int[] iArr = this.f19681e;
        int i10 = this.f19680d - 1;
        int i11 = iArr[i10];
        Buffer buffer = this.f19685y;
        if (i11 == 1) {
            iArr[i10] = 2;
        } else if (i11 == 2) {
            int l02 = l0(true);
            buffer.readByte();
            if (l02 != 44) {
                if (l02 == 59) {
                    V();
                    throw null;
                }
                if (l02 == 93) {
                    this.E = 4;
                    return 4;
                }
                U("Unterminated array");
                throw null;
            }
        } else {
            if (i11 == 3 || i11 == 5) {
                iArr[i10] = 4;
                if (i11 == 5) {
                    int l03 = l0(true);
                    buffer.readByte();
                    if (l03 != 44) {
                        if (l03 == 59) {
                            V();
                            throw null;
                        }
                        if (l03 == 125) {
                            this.E = 2;
                            return 2;
                        }
                        U("Unterminated object");
                        throw null;
                    }
                }
                int l04 = l0(true);
                if (l04 == 34) {
                    buffer.readByte();
                    this.E = 13;
                    return 13;
                }
                if (l04 == 39) {
                    buffer.readByte();
                    V();
                    throw null;
                }
                if (l04 != 125) {
                    V();
                    throw null;
                }
                if (i11 == 5) {
                    U("Expected name");
                    throw null;
                }
                buffer.readByte();
                this.E = 2;
                return 2;
            }
            if (i11 == 4) {
                iArr[i10] = 5;
                int l05 = l0(true);
                buffer.readByte();
                if (l05 != 58) {
                    if (l05 != 61) {
                        U("Expected ':'");
                        throw null;
                    }
                    V();
                    throw null;
                }
            } else if (i11 == 6) {
                iArr[i10] = 7;
            } else {
                if (i11 == 7) {
                    if (l0(false) == -1) {
                        this.E = 18;
                        return 18;
                    }
                    V();
                    throw null;
                }
                if (i11 == 8) {
                    throw new IllegalStateException("JsonReader is closed");
                }
            }
        }
        int l06 = l0(true);
        if (l06 == 34) {
            buffer.readByte();
            this.E = 9;
            return 9;
        }
        if (l06 == 39) {
            V();
            throw null;
        }
        if (l06 != 44 && l06 != 59) {
            if (l06 == 91) {
                buffer.readByte();
                this.E = 3;
                return 3;
            }
            if (l06 != 93) {
                if (l06 == 123) {
                    buffer.readByte();
                    this.E = 1;
                    return 1;
                }
                byte o7 = buffer.o(0L);
                r rVar = this.f19684x;
                if (o7 == 116 || o7 == 84) {
                    i5 = 5;
                    str2 = "true";
                    str = "TRUE";
                } else if (o7 == 102 || o7 == 70) {
                    i5 = 6;
                    str2 = "false";
                    str = "FALSE";
                } else if (o7 == 110 || o7 == 78) {
                    i5 = 7;
                    str2 = "null";
                    str = "NULL";
                } else {
                    j = 0;
                    i5 = 0;
                    if (i5 == 0) {
                        return i5;
                    }
                    boolean z5 = true;
                    long j5 = j;
                    char c8 = 0;
                    int i12 = 0;
                    boolean z6 = false;
                    while (true) {
                        int i13 = i12 + 1;
                        if (!rVar.N(i13)) {
                            break;
                        }
                        byte o10 = buffer.o(i12);
                        if (o10 != 43) {
                            if (o10 == 69 || o10 == 101) {
                                c6 = 6;
                                if (c8 != 2 && c8 != 4) {
                                    break;
                                }
                                c8 = 5;
                                i12 = i13;
                            } else if (o10 == 45) {
                                c6 = 6;
                                if (c8 == 0) {
                                    c8 = 1;
                                    z6 = true;
                                    i12 = i13;
                                } else {
                                    if (c8 != 5) {
                                        break;
                                    }
                                    c8 = c6;
                                    i12 = i13;
                                }
                            } else if (o10 == 46) {
                                c6 = 6;
                                if (c8 != 2) {
                                    break;
                                }
                                c8 = 3;
                                i12 = i13;
                            } else {
                                if (o10 < 48 || o10 > 57) {
                                    break;
                                }
                                if (c8 == 1 || c8 == 0) {
                                    c6 = 6;
                                    j5 = -(o10 - 48);
                                    c8 = 2;
                                } else {
                                    if (c8 == 2) {
                                        if (j5 == j) {
                                            break;
                                        }
                                        long j7 = (10 * j5) - (o10 - 48);
                                        z5 &= j5 > -922337203685477580L || (j5 == -922337203685477580L && j7 < j5);
                                        j5 = j7;
                                    } else if (c8 == 3) {
                                        c8 = 4;
                                    } else {
                                        c6 = 6;
                                        if (c8 == 5 || c8 == 6) {
                                            c8 = 7;
                                        }
                                    }
                                    c6 = 6;
                                    i12 = i13;
                                }
                                i12 = i13;
                            }
                            if (i6 == 0) {
                                return i6;
                            }
                            if (d0(buffer.o(j))) {
                                V();
                                throw null;
                            }
                            U("Expected value");
                            throw null;
                        }
                        c6 = 6;
                        if (c8 != 5) {
                            break;
                        }
                        c8 = c6;
                        i12 = i13;
                    }
                    i6 = 0;
                    if (i6 == 0) {
                    }
                }
                int length = str2.length();
                j = 0;
                int i14 = 1;
                while (true) {
                    if (i14 < length) {
                        int i15 = i14 + 1;
                        if (!rVar.N(i15) || ((o6 = buffer.o(i14)) != str2.charAt(i14) && o6 != str.charAt(i14))) {
                            break;
                        }
                        i14 = i15;
                    } else if (!rVar.N(length + 1) || !d0(buffer.o(length))) {
                        buffer.skip(length);
                        this.E = i5;
                    }
                }
                i5 = 0;
                if (i5 == 0) {
                }
            } else if (i11 == 1) {
                buffer.readByte();
                this.E = 4;
                return 4;
            }
        }
        if (i11 == 1 || i11 == 2) {
            V();
            throw null;
        }
        U("Unexpected value");
        throw null;
    }

    public final int b0(String str, e eVar) {
        int length = ((String[]) eVar.f7943e).length;
        for (int i5 = 0; i5 < length; i5++) {
            if (str.equals(((String[]) eVar.f7943e)[i5])) {
                this.E = 0;
                this.f19682i[this.f19680d - 1] = str;
                return i5;
            }
        }
        return -1;
    }

    @Override // w4.a
    public final void c() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 3) {
            C(1);
            this.f19683v[this.f19680d - 1] = 0;
            this.E = 0;
        } else {
            throw new k("Expected BEGIN_ARRAY but was " + h.n(A()) + " at path " + l());
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.E = 0;
        this.f19681e[0] = 8;
        this.f19680d = 1;
        this.f19685y.c();
        this.f19684x.close();
    }

    public final boolean d0(int i5) {
        if (i5 == 9 || i5 == 10 || i5 == 12 || i5 == 13 || i5 == 32) {
            return false;
        }
        if (i5 != 35) {
            if (i5 == 44) {
                return false;
            }
            if (i5 != 47 && i5 != 61) {
                if (i5 == 123 || i5 == 125 || i5 == 58) {
                    return false;
                }
                if (i5 != 59) {
                    switch (i5) {
                        case 91:
                        case 93:
                            return false;
                        case 92:
                            break;
                        default:
                            return true;
                    }
                }
            }
        }
        V();
        throw null;
    }

    @Override // w4.a
    public final void f() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 1) {
            C(3);
            this.E = 0;
        } else {
            throw new k("Expected BEGIN_OBJECT but was " + h.n(A()) + " at path " + l());
        }
    }

    @Override // w4.a
    public final void g() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 != 4) {
            throw new k("Expected END_ARRAY but was " + h.n(A()) + " at path " + l());
        }
        int i6 = this.f19680d;
        this.f19680d = i6 - 1;
        int[] iArr = this.f19683v;
        int i10 = i6 - 2;
        iArr[i10] = iArr[i10] + 1;
        this.E = 0;
    }

    @Override // w4.a
    public final void i() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 != 2) {
            throw new k("Expected END_OBJECT but was " + h.n(A()) + " at path " + l());
        }
        int i6 = this.f19680d;
        int i10 = i6 - 1;
        this.f19680d = i10;
        this.f19682i[i10] = null;
        int[] iArr = this.f19683v;
        int i11 = i6 - 2;
        iArr[i11] = iArr[i11] + 1;
        this.E = 0;
    }

    public final String j0() {
        String str;
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 14) {
            str = n0();
        } else if (i5 == 13) {
            str = m0(J);
        } else if (i5 == 12) {
            str = m0(I);
        } else {
            if (i5 != 15) {
                throw new k("Expected a name but was " + h.n(A()) + " at path " + l());
            }
            str = this.H;
        }
        this.E = 0;
        this.f19682i[this.f19680d - 1] = str;
        return str;
    }

    public final int l0(boolean z5) {
        int i5 = 0;
        while (true) {
            int i6 = i5 + 1;
            r rVar = this.f19684x;
            if (!rVar.N(i6)) {
                if (z5) {
                    throw new EOFException("End of input");
                }
                return -1;
            }
            long j = i5;
            Buffer buffer = this.f19685y;
            byte o6 = buffer.o(j);
            if (o6 != 10 && o6 != 32 && o6 != 13 && o6 != 9) {
                buffer.skip(j);
                if (o6 == 47) {
                    if (rVar.N(2L)) {
                        V();
                        throw null;
                    }
                } else if (o6 == 35) {
                    V();
                    throw null;
                }
                return o6;
            }
            i5 = i6;
        }
    }

    public final String m0(ByteString byteString) {
        StringBuilder sb2 = null;
        while (true) {
            long g6 = this.f19684x.g(byteString);
            if (g6 == -1) {
                U("Unterminated string");
                throw null;
            }
            Buffer buffer = this.f19685y;
            if (buffer.o(g6) != 92) {
                if (sb2 == null) {
                    String C = buffer.C(g6, Charsets.UTF_8);
                    buffer.readByte();
                    return C;
                }
                sb2.append(buffer.C(g6, Charsets.UTF_8));
                buffer.readByte();
                return sb2.toString();
            }
            if (sb2 == null) {
                sb2 = new StringBuilder();
            }
            sb2.append(buffer.C(g6, Charsets.UTF_8));
            buffer.readByte();
            sb2.append(o0());
        }
    }

    public final String n0() {
        long g6 = this.f19684x.g(K);
        Buffer buffer = this.f19685y;
        if (g6 == -1) {
            return buffer.W();
        }
        buffer.getClass();
        return buffer.C(g6, Charsets.UTF_8);
    }

    @Override // w4.a
    public final boolean o() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        return (i5 == 2 || i5 == 4 || i5 == 18) ? false : true;
    }

    public final char o0() {
        int i5;
        r rVar = this.f19684x;
        if (!rVar.N(1L)) {
            U("Unterminated escape sequence");
            throw null;
        }
        Buffer buffer = this.f19685y;
        byte readByte = buffer.readByte();
        if (readByte == 10 || readByte == 34 || readByte == 39 || readByte == 47 || readByte == 92) {
            return (char) readByte;
        }
        if (readByte == 98) {
            return '\b';
        }
        if (readByte == 102) {
            return '\f';
        }
        if (readByte == 110) {
            return '\n';
        }
        if (readByte == 114) {
            return '\r';
        }
        if (readByte == 116) {
            return '\t';
        }
        if (readByte != 117) {
            U("Invalid escape sequence: \\" + ((char) readByte));
            throw null;
        }
        if (!rVar.N(4L)) {
            throw new EOFException("Unterminated escape sequence at path " + l());
        }
        char c6 = 0;
        for (int i6 = 0; i6 < 4; i6++) {
            byte o6 = buffer.o(i6);
            char c8 = (char) (c6 << 4);
            if (o6 >= 48 && o6 <= 57) {
                i5 = o6 - 48;
            } else if (o6 >= 97 && o6 <= 102) {
                i5 = o6 - 87;
            } else {
                if (o6 < 65 || o6 > 70) {
                    U("\\u".concat(buffer.C(4L, Charsets.UTF_8)));
                    throw null;
                }
                i5 = o6 - 55;
            }
            c6 = (char) (i5 + c8);
        }
        buffer.skip(4L);
        return c6;
    }

    public final void p0(ByteString byteString) {
        while (true) {
            long g6 = this.f19684x.g(byteString);
            if (g6 == -1) {
                U("Unterminated string");
                throw null;
            }
            Buffer buffer = this.f19685y;
            if (buffer.o(g6) != 92) {
                buffer.skip(g6 + 1);
                return;
            } else {
                buffer.skip(g6 + 1);
                o0();
            }
        }
    }

    @Override // w4.a
    public final boolean q() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 5) {
            this.E = 0;
            int[] iArr = this.f19683v;
            int i6 = this.f19680d - 1;
            iArr[i6] = iArr[i6] + 1;
            return true;
        }
        if (i5 == 6) {
            this.E = 0;
            int[] iArr2 = this.f19683v;
            int i10 = this.f19680d - 1;
            iArr2[i10] = iArr2[i10] + 1;
            return false;
        }
        throw new k("Expected a boolean but was " + h.n(A()) + " at path " + l());
    }

    @Override // w4.a
    public final double r() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 16) {
            this.E = 0;
            int[] iArr = this.f19683v;
            int i6 = this.f19680d - 1;
            iArr[i6] = iArr[i6] + 1;
            return this.F;
        }
        if (i5 == 17) {
            long j = this.G;
            Buffer buffer = this.f19685y;
            buffer.getClass();
            this.H = buffer.C(j, Charsets.UTF_8);
        } else if (i5 == 9) {
            this.H = m0(J);
        } else if (i5 == 8) {
            this.H = m0(I);
        } else if (i5 == 10) {
            this.H = n0();
        } else if (i5 != 11) {
            throw new k("Expected a double but was " + h.n(A()) + " at path " + l());
        }
        this.E = 11;
        try {
            double parseDouble = Double.parseDouble(this.H);
            if (Double.isNaN(parseDouble) || Double.isInfinite(parseDouble)) {
                throw new y0("JSON forbids NaN and infinities: " + parseDouble + " at path " + l());
            }
            this.H = null;
            this.E = 0;
            int[] iArr2 = this.f19683v;
            int i10 = this.f19680d - 1;
            iArr2[i10] = iArr2[i10] + 1;
            return parseDouble;
        } catch (NumberFormatException unused) {
            throw new k("Expected a double but was " + this.H + " at path " + l());
        }
    }

    @Override // w4.a
    public final int t() {
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 16) {
            long j = this.F;
            int i6 = (int) j;
            if (j == i6) {
                this.E = 0;
                int[] iArr = this.f19683v;
                int i10 = this.f19680d - 1;
                iArr[i10] = iArr[i10] + 1;
                return i6;
            }
            throw new k("Expected an int but was " + this.F + " at path " + l());
        }
        if (i5 == 17) {
            long j5 = this.G;
            Buffer buffer = this.f19685y;
            buffer.getClass();
            this.H = buffer.C(j5, Charsets.UTF_8);
        } else if (i5 == 9 || i5 == 8) {
            String m02 = i5 == 9 ? m0(J) : m0(I);
            this.H = m02;
            try {
                int parseInt = Integer.parseInt(m02);
                this.E = 0;
                int[] iArr2 = this.f19683v;
                int i11 = this.f19680d - 1;
                iArr2[i11] = iArr2[i11] + 1;
                return parseInt;
            } catch (NumberFormatException unused) {
            }
        } else if (i5 != 11) {
            throw new k("Expected an int but was " + h.n(A()) + " at path " + l());
        }
        this.E = 11;
        try {
            double parseDouble = Double.parseDouble(this.H);
            int i12 = (int) parseDouble;
            if (i12 != parseDouble) {
                throw new k("Expected an int but was " + this.H + " at path " + l());
            }
            this.H = null;
            this.E = 0;
            int[] iArr3 = this.f19683v;
            int i13 = this.f19680d - 1;
            iArr3[i13] = iArr3[i13] + 1;
            return i12;
        } catch (NumberFormatException unused2) {
            throw new k("Expected an int but was " + this.H + " at path " + l());
        }
    }

    public final String toString() {
        return "JsonReader(" + this.f19684x + ")";
    }

    @Override // w4.a
    public final String x() {
        String C;
        int i5 = this.E;
        if (i5 == 0) {
            i5 = X();
        }
        if (i5 == 10) {
            C = n0();
        } else if (i5 == 9) {
            C = m0(J);
        } else if (i5 == 8) {
            C = m0(I);
        } else if (i5 == 11) {
            C = this.H;
            this.H = null;
        } else if (i5 == 16) {
            C = Long.toString(this.F);
        } else {
            if (i5 != 17) {
                throw new k("Expected a string but was " + h.n(A()) + " at path " + l());
            }
            long j = this.G;
            Buffer buffer = this.f19685y;
            buffer.getClass();
            C = buffer.C(j, Charsets.UTF_8);
        }
        this.E = 0;
        int[] iArr = this.f19683v;
        int i6 = this.f19680d - 1;
        iArr[i6] = iArr[i6] + 1;
        return C;
    }
}
