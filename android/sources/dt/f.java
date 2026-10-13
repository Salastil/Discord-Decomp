package dt;

import java.io.IOException;
import java.net.SocketTimeoutException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class f extends ss.a {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ g f7770e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ long f7771f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(String str, g gVar, long j) {
        super(str, true);
        this.f7770e = gVar;
        this.f7771f = j;
    }

    @Override // ss.a
    public final long a() {
        g gVar = this.f7770e;
        synchronized (gVar) {
            try {
                if (!gVar.f7789t) {
                    k kVar = gVar.j;
                    if (kVar != null) {
                        int i5 = gVar.f7791v ? gVar.f7790u : -1;
                        gVar.f7790u++;
                        gVar.f7791v = true;
                        Unit unit = Unit.a;
                        if (i5 != -1) {
                            StringBuilder sb2 = new StringBuilder("sent ping but didn't receive pong within ");
                            sb2.append(gVar.f7774c);
                            sb2.append("ms (after ");
                            gVar.f(new SocketTimeoutException(k0.d.m(sb2, i5 - 1, " successful ping/pongs)")), null);
                        } else {
                            try {
                                ByteString payload = ByteString.f16115v;
                                Intrinsics.checkNotNullParameter(payload, "payload");
                                kVar.c(payload, 9);
                            } catch (IOException e9) {
                                gVar.f(e9, null);
                            }
                        }
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return this.f7771f;
    }
}
