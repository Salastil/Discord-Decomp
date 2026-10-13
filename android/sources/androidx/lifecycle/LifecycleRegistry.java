package androidx.lifecycle;

import android.os.Looper;
import androidx.lifecycle.Lifecycle;
import java.lang.ref.WeakReference;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class LifecycleRegistry extends Lifecycle {

    /* renamed from: b, reason: collision with root package name */
    public final boolean f2143b;

    /* renamed from: c, reason: collision with root package name */
    public p.a f2144c;

    /* renamed from: d, reason: collision with root package name */
    public Lifecycle.State f2145d;

    /* renamed from: e, reason: collision with root package name */
    public final WeakReference f2146e;

    /* renamed from: f, reason: collision with root package name */
    public int f2147f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f2148g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f2149h;

    /* renamed from: i, reason: collision with root package name */
    public final ArrayList f2150i;
    public final qr.c0 j;

    public LifecycleRegistry(LifecycleOwner provider) {
        Intrinsics.checkNotNullParameter(provider, "provider");
        this.a = new ha.l(2, false);
        this.f2143b = true;
        this.f2144c = new p.a();
        Lifecycle.State state = Lifecycle.State.f2138e;
        this.f2145d = state;
        this.f2150i = new ArrayList();
        this.f2146e = new WeakReference(provider);
        this.j = qr.y.b(state);
    }

    @Override // androidx.lifecycle.Lifecycle
    public final void a(u object) {
        t fVar;
        Object obj;
        LifecycleOwner lifecycleOwner;
        Intrinsics.checkNotNullParameter(object, "observer");
        e("addObserver");
        Lifecycle.State state = this.f2145d;
        Lifecycle.State initialState = Lifecycle.State.f2137d;
        if (state != initialState) {
            initialState = Lifecycle.State.f2138e;
        }
        Intrinsics.checkNotNullParameter(initialState, "initialState");
        v vVar = new v();
        Intrinsics.checkNotNull(object);
        HashMap hashMap = x.a;
        Intrinsics.checkNotNullParameter(object, "object");
        boolean z5 = object instanceof t;
        boolean z6 = object instanceof DefaultLifecycleObserver;
        if (z5 && z6) {
            fVar = new f((DefaultLifecycleObserver) object, (t) object);
        } else if (z6) {
            fVar = new f((DefaultLifecycleObserver) object, (t) null);
        } else if (z5) {
            fVar = (t) object;
        } else {
            Class<?> cls = object.getClass();
            if (x.c(cls) == 2) {
                Object obj2 = x.f2235b.get(cls);
                Intrinsics.checkNotNull(obj2);
                List list = (List) obj2;
                if (list.size() == 1) {
                    x.a((Constructor) list.get(0), object);
                    Intrinsics.checkNotNullParameter(null, "generatedAdapter");
                    fVar = new y0();
                } else {
                    int size = list.size();
                    h[] hVarArr = new h[size];
                    for (int i5 = 0; i5 < size; i5++) {
                        x.a((Constructor) list.get(i5), object);
                        hVarArr[i5] = null;
                    }
                    fVar = new d3.b(hVarArr);
                }
            } else {
                fVar = new f(object);
            }
        }
        vVar.f2228b = fVar;
        vVar.a = initialState;
        p.a aVar = this.f2144c;
        p.c a = aVar.a(object);
        if (a != null) {
            obj = a.f16250e;
        } else {
            HashMap hashMap2 = aVar.f16245w;
            p.c cVar = new p.c(object, vVar);
            aVar.f16259v++;
            p.c cVar2 = aVar.f16257e;
            if (cVar2 == null) {
                aVar.f16256d = cVar;
                aVar.f16257e = cVar;
            } else {
                cVar2.f16251i = cVar;
                cVar.f16252v = cVar2;
                aVar.f16257e = cVar;
            }
            hashMap2.put(object, cVar);
            obj = null;
        }
        if (((v) obj) == null && (lifecycleOwner = (LifecycleOwner) this.f2146e.get()) != null) {
            boolean z7 = this.f2147f != 0 || this.f2148g;
            Lifecycle.State d6 = d(object);
            this.f2147f++;
            while (vVar.a.compareTo(d6) < 0 && this.f2144c.f16245w.containsKey(object)) {
                Lifecycle.State state2 = vVar.a;
                ArrayList arrayList = this.f2150i;
                arrayList.add(state2);
                l lVar = n.Companion;
                Lifecycle.State state3 = vVar.a;
                lVar.getClass();
                Intrinsics.checkNotNullParameter(state3, "state");
                int ordinal = state3.ordinal();
                n nVar = ordinal != 1 ? ordinal != 2 ? ordinal != 3 ? null : n.ON_RESUME : n.ON_START : n.ON_CREATE;
                if (nVar == null) {
                    throw new IllegalStateException("no event up from " + vVar.a);
                }
                vVar.a(lifecycleOwner, nVar);
                arrayList.remove(arrayList.size() - 1);
                d6 = d(object);
            }
            if (!z7) {
                i();
            }
            this.f2147f--;
        }
    }

    @Override // androidx.lifecycle.Lifecycle
    public final Lifecycle.State b() {
        return this.f2145d;
    }

    @Override // androidx.lifecycle.Lifecycle
    public final void c(u observer) {
        Intrinsics.checkNotNullParameter(observer, "observer");
        e("removeObserver");
        this.f2144c.b(observer);
    }

    public final Lifecycle.State d(u uVar) {
        HashMap hashMap = this.f2144c.f16245w;
        p.c cVar = hashMap.containsKey(uVar) ? ((p.c) hashMap.get(uVar)).f16252v : null;
        Lifecycle.State state1 = cVar != null ? ((v) cVar.f16250e).a : null;
        ArrayList arrayList = this.f2150i;
        Lifecycle.State state = arrayList.isEmpty() ? null : (Lifecycle.State) k0.d.f(1, arrayList);
        Lifecycle.State state12 = this.f2145d;
        Intrinsics.checkNotNullParameter(state12, "state1");
        if (state1 == null || state1.compareTo(state12) >= 0) {
            state1 = state12;
        }
        Intrinsics.checkNotNullParameter(state1, "state1");
        return (state == null || state.compareTo(state1) >= 0) ? state1 : state;
    }

    public final void e(String str) {
        if (this.f2143b) {
            o.a.U().f15703t.getClass();
            if (Looper.getMainLooper().getThread() != Thread.currentThread()) {
                throw new IllegalStateException(s4.h.f("Method ", str, " must be called on the main thread").toString());
            }
        }
    }

    public final void f(n event) {
        Intrinsics.checkNotNullParameter(event, "event");
        e("handleLifecycleEvent");
        g(event.a());
    }

    public final void g(Lifecycle.State next) {
        if (this.f2145d == next) {
            return;
        }
        LifecycleOwner lifecycleOwner = (LifecycleOwner) this.f2146e.get();
        Lifecycle.State current = this.f2145d;
        Intrinsics.checkNotNullParameter(current, "current");
        Intrinsics.checkNotNullParameter(next, "next");
        if (current == Lifecycle.State.f2138e && next == Lifecycle.State.f2137d) {
            throw new IllegalStateException(("State must be at least '" + Lifecycle.State.f2139i + "' to be moved to '" + next + "' in component " + lifecycleOwner).toString());
        }
        Lifecycle.State state = Lifecycle.State.f2137d;
        if (current == state && current != next) {
            throw new IllegalStateException(("State is '" + state + "' and cannot be moved to `" + next + "` in component " + lifecycleOwner).toString());
        }
        this.f2145d = next;
        if (this.f2148g || this.f2147f != 0) {
            this.f2149h = true;
            return;
        }
        this.f2148g = true;
        i();
        this.f2148g = false;
        if (this.f2145d == state) {
            this.f2144c = new p.a();
        }
    }

    public final void h() {
        Lifecycle.State state = Lifecycle.State.f2139i;
        Intrinsics.checkNotNullParameter(state, "state");
        e("setCurrentState");
        g(state);
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0030, code lost:
    
        r8.f2149h = false;
        r8.j.setValue(r8.f2145d);
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x0039, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void i() {
        LifecycleOwner lifecycleOwner = (LifecycleOwner) this.f2146e.get();
        if (lifecycleOwner == null) {
            throw new IllegalStateException("LifecycleOwner of this LifecycleRegistry is already garbage collected. It is too late to change lifecycle state.");
        }
        while (true) {
            p.a aVar = this.f2144c;
            if (aVar.f16259v != 0) {
                p.c cVar = aVar.f16256d;
                Intrinsics.checkNotNull(cVar);
                Lifecycle.State state = ((v) cVar.f16250e).a;
                p.c cVar2 = this.f2144c.f16257e;
                Intrinsics.checkNotNull(cVar2);
                Lifecycle.State state2 = ((v) cVar2.f16250e).a;
                if (state == state2 && this.f2145d == state2) {
                    break;
                }
                this.f2149h = false;
                Lifecycle.State state3 = this.f2145d;
                p.c cVar3 = this.f2144c.f16256d;
                Intrinsics.checkNotNull(cVar3);
                int compareTo = state3.compareTo(((v) cVar3.f16250e).a);
                ArrayList arrayList = this.f2150i;
                if (compareTo < 0) {
                    p.a aVar2 = this.f2144c;
                    p.b bVar = new p.b(aVar2.f16257e, aVar2.f16256d, 1);
                    aVar2.f16258i.put(bVar, Boolean.FALSE);
                    Intrinsics.checkNotNullExpressionValue(bVar, "descendingIterator(...)");
                    while (bVar.hasNext() && !this.f2149h) {
                        Map.Entry entry = (Map.Entry) bVar.next();
                        Intrinsics.checkNotNull(entry);
                        u uVar = (u) entry.getKey();
                        v vVar = (v) entry.getValue();
                        while (vVar.a.compareTo(this.f2145d) > 0 && !this.f2149h && this.f2144c.f16245w.containsKey(uVar)) {
                            l lVar = n.Companion;
                            Lifecycle.State state4 = vVar.a;
                            lVar.getClass();
                            n a = l.a(state4);
                            if (a == null) {
                                throw new IllegalStateException("no event down from " + vVar.a);
                            }
                            arrayList.add(a.a());
                            vVar.a(lifecycleOwner, a);
                            arrayList.remove(arrayList.size() - 1);
                        }
                    }
                }
                p.c cVar4 = this.f2144c.f16257e;
                if (!this.f2149h && cVar4 != null && this.f2145d.compareTo(((v) cVar4.f16250e).a) > 0) {
                    p.a aVar3 = this.f2144c;
                    aVar3.getClass();
                    p.d dVar = new p.d(aVar3);
                    aVar3.f16258i.put(dVar, Boolean.FALSE);
                    Intrinsics.checkNotNullExpressionValue(dVar, "iteratorWithAdditions(...)");
                    while (dVar.hasNext() && !this.f2149h) {
                        Map.Entry entry2 = (Map.Entry) dVar.next();
                        u uVar2 = (u) entry2.getKey();
                        v vVar2 = (v) entry2.getValue();
                        while (vVar2.a.compareTo(this.f2145d) < 0 && !this.f2149h && this.f2144c.f16245w.containsKey(uVar2)) {
                            arrayList.add(vVar2.a);
                            l lVar2 = n.Companion;
                            Lifecycle.State state5 = vVar2.a;
                            lVar2.getClass();
                            Intrinsics.checkNotNullParameter(state5, "state");
                            int ordinal = state5.ordinal();
                            n nVar = ordinal != 1 ? ordinal != 2 ? ordinal != 3 ? null : n.ON_RESUME : n.ON_START : n.ON_CREATE;
                            if (nVar == null) {
                                throw new IllegalStateException("no event up from " + vVar2.a);
                            }
                            vVar2.a(lifecycleOwner, nVar);
                            arrayList.remove(arrayList.size() - 1);
                        }
                    }
                }
            } else {
                break;
            }
        }
    }
}
