package androidx.lifecycle;

import androidx.savedstate.SavedStateRegistry;
import java.util.HashMap;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class f implements t {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2179d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Object f2180e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f2181i;

    public f(DefaultLifecycleObserver defaultLifecycleObserver, t tVar) {
        Intrinsics.checkNotNullParameter(defaultLifecycleObserver, "defaultLifecycleObserver");
        this.f2180e = defaultLifecycleObserver;
        this.f2181i = tVar;
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner source, n event) {
        switch (this.f2179d) {
            case 0:
                DefaultLifecycleObserver defaultLifecycleObserver = (DefaultLifecycleObserver) this.f2180e;
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(event, "event");
                switch (e.a[event.ordinal()]) {
                    case 1:
                        defaultLifecycleObserver.onCreate(source);
                        break;
                    case 2:
                        defaultLifecycleObserver.onStart(source);
                        break;
                    case 3:
                        defaultLifecycleObserver.onResume(source);
                        break;
                    case 4:
                        defaultLifecycleObserver.onPause(source);
                        break;
                    case 5:
                        defaultLifecycleObserver.onStop(source);
                        break;
                    case 6:
                        defaultLifecycleObserver.onDestroy(source);
                        break;
                    case 7:
                        throw new IllegalArgumentException("ON_ANY must not been send by anybody");
                    default:
                        throw new fo.n();
                }
                t tVar = (t) this.f2181i;
                if (tVar != null) {
                    tVar.c(source, event);
                    return;
                }
                return;
            case 1:
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(event, "event");
                if (event == n.ON_START) {
                    ((Lifecycle) this.f2180e).c(this);
                    ((SavedStateRegistry) this.f2181i).d();
                    return;
                }
                return;
            default:
                HashMap hashMap = ((b) this.f2181i).a;
                List list = (List) hashMap.get(event);
                Object obj = this.f2180e;
                b.a(list, source, event, obj);
                b.a((List) hashMap.get(n.ON_ANY), source, event, obj);
                return;
        }
    }

    public f(u uVar) {
        this.f2180e = uVar;
        d dVar = d.f2177c;
        Class<?> cls = uVar.getClass();
        b bVar = (b) dVar.a.get(cls);
        this.f2181i = bVar == null ? dVar.a(cls, null) : bVar;
    }

    public f(Lifecycle lifecycle, SavedStateRegistry savedStateRegistry) {
        this.f2180e = lifecycle;
        this.f2181i = savedStateRegistry;
    }
}
