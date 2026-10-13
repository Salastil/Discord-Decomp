package ts;

import java.io.IOException;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Interceptor;
import okhttp3.OkHttpClient;
import okhttp3.Response;

/* loaded from: classes3.dex */
public final class a implements Interceptor {
    public static final a a = new a();

    @Override // okhttp3.Interceptor
    public final Response intercept(Interceptor.Chain chain) {
        Intrinsics.checkNotNullParameter(chain, "chain");
        us.f chain2 = (us.f) chain;
        h hVar = chain2.a;
        Intrinsics.checkNotNullParameter(chain2, "chain");
        synchronized (hVar) {
            if (!hVar.K) {
                throw new IllegalStateException("released");
            }
            if (hVar.J) {
                throw new IllegalStateException("Check failed.");
            }
            if (hVar.I) {
                throw new IllegalStateException("Check failed.");
            }
            Unit unit = Unit.a;
        }
        e eVar = hVar.E;
        Intrinsics.checkNotNull(eVar);
        OkHttpClient client = hVar.f18726d;
        eVar.getClass();
        Intrinsics.checkNotNullParameter(client, "client");
        Intrinsics.checkNotNullParameter(chain2, "chain");
        try {
            hc.k kVar = new hc.k(hVar, eVar, eVar.a(chain2.f19117f, chain2.f19118g, chain2.f19119h, client.f16051x, !Intrinsics.areEqual(chain2.f19116e.f16076b, "GET")).j(client, chain2));
            hVar.H = kVar;
            hVar.M = kVar;
            synchronized (hVar) {
                hVar.I = true;
                hVar.J = true;
            }
            if (hVar.L) {
                throw new IOException("Canceled");
            }
            return us.f.b(chain2, 0, kVar, null, 61).a(chain2.f19116e);
        } catch (IOException e9) {
            eVar.c(e9);
            throw new m(e9);
        } catch (m e10) {
            eVar.c(e10.f18756e);
            throw e10;
        }
    }
}
