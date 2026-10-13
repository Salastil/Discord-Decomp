package k2;

import java.nio.ByteBuffer;

/* loaded from: classes.dex */
public final class x {

    /* renamed from: d, reason: collision with root package name */
    public static final ThreadLocal f13158d = new ThreadLocal();
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.i f13159b;

    /* renamed from: c, reason: collision with root package name */
    public volatile int f13160c = 0;

    public x(e4.i iVar, int i5) {
        this.f13159b = iVar;
        this.a = i5;
    }

    public final int a(int i5) {
        l2.a b10 = b();
        int a = b10.a(16);
        if (a == 0) {
            return 0;
        }
        ByteBuffer byteBuffer = (ByteBuffer) b10.f1594v;
        int i6 = a + b10.f1591d;
        return byteBuffer.getInt((i5 * 4) + byteBuffer.getInt(i6) + i6 + 4);
    }

    public final l2.a b() {
        ThreadLocal threadLocal = f13158d;
        l2.a aVar = (l2.a) threadLocal.get();
        if (aVar == null) {
            aVar = new l2.a();
            threadLocal.set(aVar);
        }
        l2.b bVar = (l2.b) this.f13159b.f7952d;
        int a = bVar.a(6);
        if (a != 0) {
            int i5 = a + bVar.f1591d;
            int i6 = (this.a * 4) + ((ByteBuffer) bVar.f1594v).getInt(i5) + i5 + 4;
            int i10 = ((ByteBuffer) bVar.f1594v).getInt(i6) + i6;
            ByteBuffer byteBuffer = (ByteBuffer) bVar.f1594v;
            aVar.f1594v = byteBuffer;
            if (byteBuffer != null) {
                aVar.f1591d = i10;
                int i11 = i10 - byteBuffer.getInt(i10);
                aVar.f1592e = i11;
                aVar.f1593i = ((ByteBuffer) aVar.f1594v).getShort(i11);
                return aVar;
            }
            aVar.f1591d = 0;
            aVar.f1592e = 0;
            aVar.f1593i = 0;
        }
        return aVar;
    }

    public final String toString() {
        int i5;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(super.toString());
        sb2.append(", id:");
        l2.a b10 = b();
        int a = b10.a(4);
        sb2.append(Integer.toHexString(a != 0 ? ((ByteBuffer) b10.f1594v).getInt(a + b10.f1591d) : 0));
        sb2.append(", codepoints:");
        l2.a b11 = b();
        int a10 = b11.a(16);
        if (a10 != 0) {
            int i6 = a10 + b11.f1591d;
            i5 = ((ByteBuffer) b11.f1594v).getInt(((ByteBuffer) b11.f1594v).getInt(i6) + i6);
        } else {
            i5 = 0;
        }
        for (int i10 = 0; i10 < i5; i10++) {
            sb2.append(Integer.toHexString(a(i10)));
            sb2.append(" ");
        }
        return sb2.toString();
    }
}
