package kotlinx.coroutines;

import kotlin.coroutines.CoroutineContext;
import kotlin.coroutines.f;
import kotlin.coroutines.g;
import kotlin.jvm.internal.Intrinsics;
import kr.n;
import nr.s;
import nr.x;
import sr.h;
import sr.i;

/* loaded from: classes3.dex */
public abstract class CoroutineDispatcher extends kotlin.coroutines.a implements kotlin.coroutines.d {

    /* renamed from: e, reason: collision with root package name */
    public static final s f13599e = new s(kotlin.coroutines.d.f13537h, new n(8));

    public CoroutineDispatcher() {
        super(kotlin.coroutines.d.f13537h);
    }

    @Override // kotlin.coroutines.a, kotlin.coroutines.CoroutineContext
    public final CoroutineContext C(f key) {
        Intrinsics.checkNotNullParameter(key, "key");
        if (key instanceof kotlin.coroutines.b) {
            kotlin.coroutines.b bVar = (kotlin.coroutines.b) key;
            f key2 = this.f13532d;
            Intrinsics.checkNotNullParameter(key2, "key");
            if (key2 != bVar && bVar.f13534e != key2) {
                return this;
            }
            Intrinsics.checkNotNullParameter(this, "element");
            if (((CoroutineContext.Element) bVar.f13533d.invoke(this)) != null) {
                return g.f13538d;
            }
        } else if (kotlin.coroutines.d.f13537h == key) {
            return g.f13538d;
        }
        return this;
    }

    public abstract void l0(CoroutineContext coroutineContext, Runnable runnable);

    public void m0(CoroutineContext coroutineContext, Runnable runnable) {
        h.g(this, coroutineContext, runnable);
    }

    public boolean n0(CoroutineContext coroutineContext) {
        return !(this instanceof d);
    }

    @Override // kotlin.coroutines.a, kotlin.coroutines.CoroutineContext
    public final CoroutineContext.Element o(f key) {
        Intrinsics.checkNotNullParameter(key, "key");
        if (key instanceof kotlin.coroutines.b) {
            kotlin.coroutines.b bVar = (kotlin.coroutines.b) key;
            f key2 = this.f13532d;
            Intrinsics.checkNotNullParameter(key2, "key");
            if (key2 != bVar && bVar.f13534e != key2) {
                return null;
            }
            Intrinsics.checkNotNullParameter(this, "element");
            CoroutineContext.Element element = (CoroutineContext.Element) bVar.f13533d.invoke(this);
            if (element != null) {
                return element;
            }
        } else if (kotlin.coroutines.d.f13537h == key) {
            Intrinsics.checkNotNull(this, "null cannot be cast to non-null type E of kotlin.coroutines.ContinuationInterceptor.get");
            return this;
        }
        return null;
    }

    public CoroutineDispatcher o0(int i5) {
        h.a(i5);
        return new i(this, i5);
    }

    public String toString() {
        return getClass().getSimpleName() + '@' + x.o(this);
    }
}
