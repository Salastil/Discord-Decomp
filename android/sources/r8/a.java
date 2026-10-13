package r8;

import af.h0;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class a implements k1.b {
    public static final h0 a = new h0(5);

    @Override // k1.b
    public final Object acquire() {
        return (ByteBuffer) a.get();
    }

    @Override // k1.b
    public final /* bridge */ /* synthetic */ boolean release(Object obj) {
        return true;
    }
}
