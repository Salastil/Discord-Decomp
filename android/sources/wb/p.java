package wb;

import android.content.Context;
import androidx.lifecycle.c0;
import com.google.firebase.messaging.r;
import java.nio.charset.Charset;
import java.util.Collections;
import java.util.Set;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class p {

    /* renamed from: e, reason: collision with root package name */
    public static volatile j f19716e;
    public final fc.a a;

    /* renamed from: b, reason: collision with root package name */
    public final fc.a f19717b;

    /* renamed from: c, reason: collision with root package name */
    public final bc.c f19718c;

    /* renamed from: d, reason: collision with root package name */
    public final cc.k f19719d;

    public p(fc.a aVar, fc.a aVar2, bc.c cVar, cc.k kVar, r rVar) {
        this.a = aVar;
        this.f19717b = aVar2;
        this.f19718c = cVar;
        this.f19719d = kVar;
        ((Executor) rVar.f6259e).execute(new c0(3, rVar));
    }

    public static p a() {
        j jVar = f19716e;
        if (jVar != null) {
            return (p) jVar.f19712y.get();
        }
        throw new IllegalStateException("Not initialized!");
    }

    public static void b(Context context) {
        if (f19716e == null) {
            synchronized (p.class) {
                try {
                    if (f19716e == null) {
                        jf.b bVar = new jf.b();
                        context.getClass();
                        bVar.a = context;
                        f19716e = bVar.a();
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    public final o c(k kVar) {
        byte[] bytes;
        Set unmodifiableSet = kVar != null ? Collections.unmodifiableSet(ub.a.f18819d) : Collections.singleton(new tb.c("proto"));
        k2.r a = i.a();
        kVar.getClass();
        a.f13142e = "cct";
        ub.a aVar = (ub.a) kVar;
        String str = aVar.a;
        String str2 = aVar.f18822b;
        if (str2 == null && str == null) {
            bytes = null;
        } else {
            if (str2 == null) {
                str2 = "";
            }
            bytes = a3.e.l("1$", str, "\\", str2).getBytes(Charset.forName("UTF-8"));
        }
        a.f13143i = bytes;
        return new o(unmodifiableSet, a.k(), this);
    }
}
