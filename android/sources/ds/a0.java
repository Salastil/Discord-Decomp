package ds;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class a0 extends a {

    /* renamed from: f, reason: collision with root package name */
    public final ve.i f7695f;

    /* renamed from: g, reason: collision with root package name */
    public final char[] f7696g;

    /* renamed from: h, reason: collision with root package name */
    public int f7697h;

    /* renamed from: i, reason: collision with root package name */
    public final c f7698i;

    public a0(ve.i reader, char[] buffer) {
        Intrinsics.checkNotNullParameter(reader, "reader");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        this.f7695f = reader;
        this.f7696g = buffer;
        this.f7697h = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
        this.f7698i = new c(buffer);
        H(0);
    }

    @Override // ds.a
    public final int A(int i5) {
        c cVar = this.f7698i;
        if (i5 < cVar.f7710e) {
            return i5;
        }
        this.f7691b = i5;
        n();
        return (this.f7691b != 0 || cVar.length() == 0) ? -1 : 0;
    }

    @Override // ds.a
    public int D() {
        int A;
        char c6;
        int i5 = this.f7691b;
        while (true) {
            A = A(i5);
            if (A == -1 || !((c6 = this.f7698i.f7709d[A]) == ' ' || c6 == '\n' || c6 == '\r' || c6 == '\t')) {
                break;
            }
            i5 = A + 1;
        }
        this.f7691b = A;
        return A;
    }

    @Override // ds.a
    public final String E(int i5, int i6) {
        c cVar = this.f7698i;
        return kotlin.text.x.f(cVar.f7709d, i5, Math.min(i6, cVar.f7710e));
    }

    public final void H(int i5) {
        c cVar = this.f7698i;
        char[] buffer = cVar.f7709d;
        if (i5 != 0) {
            int i6 = this.f7691b;
            Intrinsics.checkNotNullParameter(buffer, "<this>");
            Intrinsics.checkNotNullParameter(buffer, "destination");
            System.arraycopy(buffer, i6, buffer, 0, (i6 + i5) - i6);
        }
        int i10 = cVar.f7710e;
        while (true) {
            if (i5 == i10) {
                break;
            }
            ve.i iVar = this.f7695f;
            iVar.getClass();
            Intrinsics.checkNotNullParameter(buffer, "buffer");
            int a = ((j) iVar.f19405d).a(buffer, i5, i10 - i5);
            if (a == -1) {
                cVar.f7710e = Math.min(cVar.f7709d.length, i5);
                this.f7697h = -1;
                break;
            }
            i5 += a;
        }
        this.f7691b = 0;
    }

    public final void I() {
        h hVar = h.f7730c;
        hVar.getClass();
        char[] array = this.f7696g;
        Intrinsics.checkNotNullParameter(array, "array");
        if (array.length == 16384) {
            hVar.a(array);
        } else {
            throw new IllegalArgumentException(("Inconsistent internal invariant: unexpected array size " + array.length).toString());
        }
    }

    @Override // ds.a
    public final void b(int i5, int i6) {
        StringBuilder sb2 = (StringBuilder) this.f7694e;
        sb2.append(this.f7698i.f7709d, i5, i6 - i5);
        Intrinsics.checkNotNullExpressionValue(sb2, "append(...)");
    }

    @Override // ds.a
    public boolean c() {
        n();
        int i5 = this.f7691b;
        while (true) {
            int A = A(i5);
            if (A == -1) {
                this.f7691b = A;
                return false;
            }
            char c6 = this.f7698i.f7709d[A];
            if (c6 != ' ' && c6 != '\n' && c6 != '\r' && c6 != '\t') {
                this.f7691b = A;
                return a.w(c6);
            }
            i5 = A + 1;
        }
    }

    @Override // ds.a
    public final String e() {
        h('\"');
        int i5 = this.f7691b;
        c cVar = this.f7698i;
        int i6 = cVar.f7710e;
        char[] cArr = cVar.f7709d;
        int i10 = i5;
        while (true) {
            if (i10 >= i6) {
                i10 = -1;
                break;
            }
            if (cArr[i10] == '\"') {
                break;
            }
            i10++;
        }
        if (i10 == -1) {
            int A = A(i5);
            if (A != -1) {
                return k(cVar, this.f7691b, A);
            }
            a.s(this, (byte) 1);
            throw null;
        }
        for (int i11 = i5; i11 < i10; i11++) {
            if (cArr[i11] == '\\') {
                return k(cVar, this.f7691b, i11);
            }
        }
        this.f7691b = i10 + 1;
        return kotlin.text.x.f(cArr, i5, Math.min(i10, cVar.f7710e));
    }

    @Override // ds.a
    public byte f() {
        n();
        int i5 = this.f7691b;
        while (true) {
            int A = A(i5);
            if (A == -1) {
                this.f7691b = A;
                return (byte) 10;
            }
            int i6 = A + 1;
            byte h6 = s.h(this.f7698i.f7709d[A]);
            if (h6 != 3) {
                this.f7691b = i6;
                return h6;
            }
            i5 = i6;
        }
    }

    @Override // ds.a
    public void h(char c6) {
        n();
        int i5 = this.f7691b;
        while (true) {
            int A = A(i5);
            if (A == -1) {
                this.f7691b = A;
                G(c6);
                throw null;
            }
            int i6 = A + 1;
            char c8 = this.f7698i.f7709d[A];
            if (c8 != ' ' && c8 != '\n' && c8 != '\r' && c8 != '\t') {
                this.f7691b = i6;
                if (c8 == c6) {
                    return;
                }
                G(c6);
                throw null;
            }
            i5 = i6;
        }
    }

    @Override // ds.a
    public final void n() {
        int i5 = this.f7698i.f7710e - this.f7691b;
        if (i5 > this.f7697h) {
            return;
        }
        H(i5);
    }

    @Override // ds.a
    public final CharSequence u() {
        return this.f7698i;
    }

    @Override // ds.a
    public final String x(String keyToMatch) {
        Intrinsics.checkNotNullParameter(keyToMatch, "keyToMatch");
        return null;
    }
}
