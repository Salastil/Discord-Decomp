package androidx.credentials;

import android.app.Activity;
import android.content.Context;
import android.os.CancellationSignal;
import com.discord.misc.utilities.threading.a;
import com.margelo.nitro.playagerangedeclaration.d;
import gj.c;
import ha.l;
import ko.f;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import lo.h;
import n1.e;
import n1.g;
import n1.p;
import n1.w;
import nr.j;

/* loaded from: classes.dex */
public interface CredentialManager {
    void a(Context context, p pVar, CancellationSignal cancellationSignal, a aVar, l lVar);

    void b(Context context, e eVar, CancellationSignal cancellationSignal, a aVar, c cVar);

    default Object c(Context context, p pVar, h frame) {
        j jVar = new j(1, f.b(frame));
        jVar.t();
        CancellationSignal cancellationSignal = new CancellationSignal();
        jVar.v(new g(cancellationSignal, 1));
        a(context, pVar, cancellationSignal, new a(1), new l(jVar));
        Object r5 = jVar.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }

    default Object d(Activity activity, e eVar, Continuation frame) {
        j jVar = new j(1, f.b(frame));
        jVar.t();
        CancellationSignal cancellationSignal = new CancellationSignal();
        jVar.v(new g(cancellationSignal, 0));
        b(activity, eVar, cancellationSignal, new a(1), new c(24, jVar));
        Object r5 = jVar.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }

    default void f(w request, a executor, d callback) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
    }

    default Object g(w wVar, h frame) {
        j jVar = new j(1, f.b(frame));
        jVar.t();
        f(wVar, new a(1), new d(jVar));
        Object r5 = jVar.r();
        if (r5 == ko.a.f13464d) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5;
    }
}
