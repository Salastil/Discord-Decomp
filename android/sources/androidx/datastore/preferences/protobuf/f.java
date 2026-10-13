package androidx.datastore.preferences.protobuf;

import java.io.Serializable;
import java.util.Arrays;
import java.util.Iterator;

/* loaded from: classes.dex */
public class f implements Iterable, Serializable {

    /* renamed from: i, reason: collision with root package name */
    public static final f f1741i = new f(v.f1817b);

    /* renamed from: v, reason: collision with root package name */
    public static final e f1742v;

    /* renamed from: d, reason: collision with root package name */
    public int f1743d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f1744e;

    static {
        f1742v = c.a() ? new e(1) : new e(0);
    }

    public f(byte[] bArr) {
        bArr.getClass();
        this.f1744e = bArr;
    }

    public static f a(byte[] bArr, int i5, int i6) {
        byte[] copyOfRange;
        int i10 = i5 + i6;
        int length = bArr.length;
        if (((i10 - i5) | i5 | i10 | (length - i10)) < 0) {
            if (i5 < 0) {
                throw new IndexOutOfBoundsException(s4.h.e(i5, "Beginning index: ", " < 0"));
            }
            if (i10 < i5) {
                throw new IndexOutOfBoundsException(a3.e.f(i5, i10, "Beginning index larger than ending index: ", ", "));
            }
            throw new IndexOutOfBoundsException(a3.e.f(i10, length, "End index: ", " >= "));
        }
        switch (f1742v.a) {
            case 0:
                copyOfRange = Arrays.copyOfRange(bArr, i5, i6 + i5);
                break;
            default:
                copyOfRange = new byte[i6];
                System.arraycopy(bArr, i5, copyOfRange, 0, i6);
                break;
        }
        return new f(copyOfRange);
    }

    public int b() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof f) || size() != ((f) obj).size()) {
            return false;
        }
        if (size() == 0) {
            return true;
        }
        if (!(obj instanceof f)) {
            return obj.equals(this);
        }
        f fVar = (f) obj;
        int i5 = this.f1743d;
        int i6 = fVar.f1743d;
        if (i5 != 0 && i6 != 0 && i5 != i6) {
            return false;
        }
        int size = size();
        if (size > fVar.size()) {
            throw new IllegalArgumentException("Length too large: " + size + size());
        }
        if (size > fVar.size()) {
            StringBuilder r5 = a3.e.r(size, "Ran off end of other: 0, ", ", ");
            r5.append(fVar.size());
            throw new IllegalArgumentException(r5.toString());
        }
        byte[] bArr = fVar.f1744e;
        int b10 = b() + size;
        int b11 = b();
        int b12 = fVar.b();
        while (b11 < b10) {
            if (this.f1744e[b11] != bArr[b12]) {
                return false;
            }
            b11++;
            b12++;
        }
        return true;
    }

    public final int hashCode() {
        int i5 = this.f1743d;
        if (i5 != 0) {
            return i5;
        }
        int size = size();
        int b10 = b();
        int i6 = size;
        for (int i10 = b10; i10 < b10 + size; i10++) {
            i6 = (i6 * 31) + this.f1744e[i10];
        }
        if (i6 == 0) {
            i6 = 1;
        }
        this.f1743d = i6;
        return i6;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return new d(this);
    }

    public int size() {
        return this.f1744e.length;
    }

    public final String toString() {
        return String.format("<ByteString@%s size=%d>", Integer.toHexString(System.identityHashCode(this)), Integer.valueOf(size()));
    }
}
