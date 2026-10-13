package io.sentry.android.core.internal.tombstone;

import ij.p0;
import ij.q;
import ij.r;

/* loaded from: classes3.dex */
public final class k extends r {

    /* renamed from: e, reason: collision with root package name */
    public static final k f11201e;

    /* renamed from: f, reason: collision with root package name */
    public static volatile q f11202f;

    static {
        k kVar = new k();
        f11201e = kVar;
        r.h(k.class, kVar);
    }

    @Override // ij.r
    public final Object a(int i5) {
        q qVar;
        switch (f0.e.b(i5)) {
            case 0:
                return (byte) 1;
            case 1:
                return null;
            case 2:
                return new p0(f11201e, "\u0000\n\u0000\u0001\u0001\n\n\u0000\u0000\u0000\u0001\u0004\u0002Ȉ\u0003\u0004\u0004Ȉ\u0005\u0007\u0006\u0004\u0007\u0004\b\u0007\t\u0003\nဉ\u0000", new Object[]{"bitField0_", "number_", "name_", "code_", "codeName_", "hasSender_", "senderUid_", "senderPid_", "hasFaultAddress_", "faultAddress_", "faultAdjacentMetadata_"});
            case 3:
                return new k();
            case 4:
                return new j(f11201e);
            case 5:
                return f11201e;
            case 6:
                q qVar2 = f11202f;
                if (qVar2 != null) {
                    return qVar2;
                }
                synchronized (k.class) {
                    try {
                        qVar = f11202f;
                        if (qVar == null) {
                            qVar = new q();
                            f11202f = qVar;
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return qVar;
            default:
                throw new UnsupportedOperationException();
        }
    }
}
