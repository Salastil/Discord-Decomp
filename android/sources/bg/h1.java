package bg;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.util.Arrays;

/* loaded from: classes3.dex */
public abstract class h1 implements Comparable {
    public static int d(byte b10) {
        return (b10 >> 5) & 7;
    }

    public static h1 e(byte... bArr) {
        bArr.getClass();
        j1 j1Var = new j1(new ByteArrayInputStream(Arrays.copyOf(bArr, bArr.length)));
        try {
            return b.k(j1Var);
        } finally {
            try {
                j1Var.close();
            } catch (IOException unused) {
            }
        }
    }

    public abstract int a();

    public int b() {
        return 0;
    }

    public final h1 c(Class cls) {
        if (cls.isInstance(this)) {
            return (h1) cls.cast(this);
        }
        throw new g1(a3.e.l("Expected a ", cls.getName(), " value, but got ", getClass().getName()));
    }
}
