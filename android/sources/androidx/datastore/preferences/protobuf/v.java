package androidx.datastore.preferences.protobuf;

import java.nio.ByteBuffer;
import java.nio.charset.Charset;

/* loaded from: classes.dex */
public abstract class v {
    public static final Charset a = Charset.forName("UTF-8");

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f1817b;

    static {
        Charset.forName("ISO-8859-1");
        byte[] bArr = new byte[0];
        f1817b = bArr;
        ByteBuffer.wrap(bArr);
        if (0 + 0 <= Integer.MAX_VALUE) {
            return;
        }
        try {
            throw x.f();
        } catch (x e9) {
            throw new IllegalArgumentException(e9);
        }
    }

    public static void a(Object obj, String str) {
        if (obj == null) {
            throw new NullPointerException(str);
        }
    }

    public static int b(long j) {
        return (int) (j ^ (j >>> 32));
    }

    public static t c(Object obj, Object obj2) {
        t tVar = (t) ((a) obj);
        r rVar = (r) tVar.d(5);
        rVar.c();
        r.d(rVar.f1810e, tVar);
        a aVar = (a) obj2;
        if (!rVar.f1809d.getClass().isInstance(aVar)) {
            throw new IllegalArgumentException("mergeFrom(MessageLite) can only merge messages of the same type.");
        }
        rVar.c();
        r.d(rVar.f1810e, (t) aVar);
        return rVar.b();
    }
}
