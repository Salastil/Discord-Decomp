package iq;

import java.io.OutputStream;
import java.io.UnsupportedEncodingException;
import java.util.Iterator;
import java.util.Stack;

/* loaded from: classes3.dex */
public abstract class d implements Iterable {

    /* renamed from: d, reason: collision with root package name */
    public static final t f12197d = new t(new byte[0]);

    public static d a(Iterator it, int i5) {
        if (i5 == 1) {
            return (d) it.next();
        }
        int i6 = i5 >>> 1;
        return a(it, i6).b(a(it, i5 - i6));
    }

    public static c k() {
        return new c();
    }

    public final d b(d dVar) {
        int size = size();
        int size2 = dVar.size();
        if (size + size2 >= 2147483647L) {
            StringBuilder sb2 = new StringBuilder(53);
            sb2.append("ByteString would be too long: ");
            sb2.append(size);
            sb2.append("+");
            sb2.append(size2);
            throw new IllegalArgumentException(sb2.toString());
        }
        int[] iArr = x.E;
        x xVar = this instanceof x ? (x) this : null;
        if (dVar.size() == 0) {
            return this;
        }
        if (size() == 0) {
            return dVar;
        }
        int size3 = dVar.size() + size();
        if (size3 < 128) {
            int size4 = size();
            int size5 = dVar.size();
            byte[] bArr = new byte[size4 + size5];
            d(0, 0, size4, bArr);
            dVar.d(0, size4, size5, bArr);
            return new t(bArr);
        }
        if (xVar != null) {
            d dVar2 = xVar.f12246v;
            if (dVar.size() + dVar2.size() < 128) {
                int size6 = dVar2.size();
                int size7 = dVar.size();
                byte[] bArr2 = new byte[size6 + size7];
                dVar2.d(0, 0, size6, bArr2);
                dVar.d(0, size6, size7, bArr2);
                return new x(xVar.f12245i, new t(bArr2));
            }
        }
        if (xVar != null) {
            d dVar3 = xVar.f12246v;
            d dVar4 = xVar.f12245i;
            if (dVar4.h() > dVar3.h() && xVar.f12248x > dVar.h()) {
                return new x(dVar4, new x(dVar3, dVar));
            }
        }
        if (size3 >= x.E[Math.max(h(), dVar.h()) + 1]) {
            return new x(this, dVar);
        }
        ha.l lVar = new ha.l(16, false);
        lVar.P(this);
        lVar.P(dVar);
        Stack stack = (Stack) lVar.f9613d;
        d dVar5 = (d) stack.pop();
        while (!stack.isEmpty()) {
            dVar5 = new x((d) stack.pop(), dVar5);
        }
        return dVar5;
    }

    public final void d(int i5, int i6, int i10, byte[] bArr) {
        if (i5 < 0) {
            StringBuilder sb2 = new StringBuilder(30);
            sb2.append("Source offset < 0: ");
            sb2.append(i5);
            throw new IndexOutOfBoundsException(sb2.toString());
        }
        if (i6 < 0) {
            StringBuilder sb3 = new StringBuilder(30);
            sb3.append("Target offset < 0: ");
            sb3.append(i6);
            throw new IndexOutOfBoundsException(sb3.toString());
        }
        if (i10 < 0) {
            StringBuilder sb4 = new StringBuilder(23);
            sb4.append("Length < 0: ");
            sb4.append(i10);
            throw new IndexOutOfBoundsException(sb4.toString());
        }
        int i11 = i5 + i10;
        if (i11 > size()) {
            StringBuilder sb5 = new StringBuilder(34);
            sb5.append("Source end offset < 0: ");
            sb5.append(i11);
            throw new IndexOutOfBoundsException(sb5.toString());
        }
        int i12 = i6 + i10;
        if (i12 <= bArr.length) {
            if (i10 > 0) {
                e(i5, i6, i10, bArr);
            }
        } else {
            StringBuilder sb6 = new StringBuilder(34);
            sb6.append("Target end offset < 0: ");
            sb6.append(i12);
            throw new IndexOutOfBoundsException(sb6.toString());
        }
    }

    public abstract void e(int i5, int i6, int i10, byte[] bArr);

    public abstract int h();

    public abstract boolean i();

    public abstract boolean j();

    public abstract int m(int i5, int i6, int i10);

    public abstract int n(int i5, int i6, int i10);

    public abstract int p();

    public abstract String s();

    public abstract int size();

    public final String toString() {
        return String.format("<ByteString@%s size=%d>", Integer.toHexString(System.identityHashCode(this)), Integer.valueOf(size()));
    }

    public final String u() {
        try {
            return s();
        } catch (UnsupportedEncodingException e9) {
            throw new RuntimeException("UTF-8 not supported?", e9);
        }
    }

    public abstract void v(OutputStream outputStream, int i5, int i6);
}
