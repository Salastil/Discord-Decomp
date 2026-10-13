package ij;

import java.io.Serializable;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Locale;

/* loaded from: classes3.dex */
public class g implements Iterable, Serializable {

    /* renamed from: i, reason: collision with root package name */
    public static final g f10858i = new g(t.f10923b);

    /* renamed from: v, reason: collision with root package name */
    public static final e f10859v;

    /* renamed from: d, reason: collision with root package name */
    public int f10860d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final byte[] f10861e;

    static {
        f10859v = d.a() ? new e(1) : new e(0);
    }

    public g(byte[] bArr) {
        bArr.getClass();
        this.f10861e = bArr;
    }

    public static int b(int i5, int i6, int i10) {
        int i11 = i6 - i5;
        if ((i5 | i6 | i11 | (i10 - i6)) >= 0) {
            return i11;
        }
        if (i5 < 0) {
            throw new IndexOutOfBoundsException(s4.h.e(i5, "Beginning index: ", " < 0"));
        }
        if (i6 < i5) {
            throw new IndexOutOfBoundsException(a3.e.f(i5, i6, "Beginning index larger than ending index: ", ", "));
        }
        throw new IndexOutOfBoundsException(a3.e.f(i6, i10, "End index: ", " >= "));
    }

    public static g d(byte[] bArr, int i5, int i6) {
        byte[] copyOfRange;
        b(i5, i5 + i6, bArr.length);
        switch (f10859v.a) {
            case 0:
                copyOfRange = Arrays.copyOfRange(bArr, i5, i6 + i5);
                break;
            default:
                copyOfRange = new byte[i6];
                System.arraycopy(bArr, i5, copyOfRange, 0, i6);
                break;
        }
        return new g(copyOfRange);
    }

    public byte a(int i5) {
        return this.f10861e[i5];
    }

    public int e() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof g) || size() != ((g) obj).size()) {
            return false;
        }
        if (size() == 0) {
            return true;
        }
        if (!(obj instanceof g)) {
            return obj.equals(this);
        }
        g gVar = (g) obj;
        int i5 = this.f10860d;
        int i6 = gVar.f10860d;
        if (i5 != 0 && i6 != 0 && i5 != i6) {
            return false;
        }
        int size = size();
        if (size > gVar.size()) {
            throw new IllegalArgumentException("Length too large: " + size + size());
        }
        if (size > gVar.size()) {
            StringBuilder r5 = a3.e.r(size, "Ran off end of other: 0, ", ", ");
            r5.append(gVar.size());
            throw new IllegalArgumentException(r5.toString());
        }
        byte[] bArr = gVar.f10861e;
        int e9 = e() + size;
        int e10 = e();
        int e11 = gVar.e();
        while (e10 < e9) {
            if (this.f10861e[e10] != bArr[e11]) {
                return false;
            }
            e10++;
            e11++;
        }
        return true;
    }

    public byte h(int i5) {
        return this.f10861e[i5];
    }

    public final int hashCode() {
        int i5 = this.f10860d;
        if (i5 != 0) {
            return i5;
        }
        int size = size();
        int e9 = e();
        int i6 = size;
        for (int i10 = e9; i10 < e9 + size; i10++) {
            i6 = (i6 * 31) + this.f10861e[i10];
        }
        if (i6 == 0) {
            i6 = 1;
        }
        this.f10860d = i6;
        return i6;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return new androidx.datastore.preferences.protobuf.d(this);
    }

    public int size() {
        return this.f10861e.length;
    }

    public final String toString() {
        String sb2;
        Locale locale = Locale.ROOT;
        String hexString = Integer.toHexString(System.identityHashCode(this));
        int size = size();
        if (size() <= 50) {
            sb2 = d9.a.l(this);
        } else {
            StringBuilder sb3 = new StringBuilder();
            int b10 = b(0, 47, size());
            sb3.append(d9.a.l(b10 == 0 ? f10858i : new f(this.f10861e, e(), b10)));
            sb3.append("...");
            sb2 = sb3.toString();
        }
        return com.discord.chat.bridge.botuikit.a.j(a3.e.s("<ByteString@", hexString, " size=", size, " contents=\""), sb2, "\">");
    }
}
