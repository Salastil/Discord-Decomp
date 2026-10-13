package bn;

import android.util.Log;
import android.view.MenuItem;
import com.facebook.react.uimanager.ThemedReactContext;
import com.google.android.material.appbar.MaterialToolbar;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import kotlin.collections.ArrayDeque;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final class t {
    public final zm.a a;

    /* renamed from: b, reason: collision with root package name */
    public final zm.a f3111b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayDeque f3112c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f3113d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f3114e;

    public t(zm.a iconResolver, zm.a delegate) {
        Intrinsics.checkNotNullParameter(iconResolver, "iconResolver");
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.a = iconResolver;
        this.f3111b = delegate;
        this.f3112c = new ArrayDeque();
    }

    public static final void b(t tVar, k[] kVarArr) {
        Boolean bool;
        String t5;
        tVar.f3112c.removeFirst();
        zm.a aVar = tVar.f3111b;
        ArrayList updates = new ArrayList(kVarArr.length);
        for (k kVar : kVarArr) {
            if (kVar == null) {
                throw new IllegalArgumentException("Required value was null.");
            }
            updates.add(kVar);
        }
        zm.c cVar = aVar.a;
        Intrinsics.checkNotNullParameter(updates, "updates");
        zm.f fVar = cVar.f21289e;
        if (fVar != null) {
            Intrinsics.checkNotNullParameter(updates, "updates");
            ym.h hVar = (ym.h) ((qd.f) fVar).f16831e;
            ym.c cVar2 = hVar.f20973f0;
            MaterialToolbar toolbar = cVar2 != null ? cVar2.getToolbar() : null;
            if (toolbar == null) {
                Log.w("StackHeaderCoordinatorLayout", "[RNScreens] Dropping " + updates.size() + " resolved toolbar menu update(s): the header toolbar is not currently attached (header hidden or detached).");
                return;
            }
            LinkedHashSet linkedHashSet = new LinkedHashSet();
            Iterator it = updates.iterator();
            while (it.hasNext()) {
                k kVar2 = (k) it.next();
                ym.e eVar = hVar.f20972e0;
                Map forwardIdMap = hVar.f20974g0;
                String id2 = kVar2.a;
                i options = kVar2.f3074b;
                eVar.getClass();
                Intrinsics.checkNotNullParameter(toolbar, "toolbar");
                Intrinsics.checkNotNullParameter(forwardIdMap, "forwardIdMap");
                Intrinsics.checkNotNullParameter(id2, "id");
                Intrinsics.checkNotNullParameter(options, "options");
                Integer num = (Integer) forwardIdMap.get(id2);
                if (num != null) {
                    MenuItem findItem = toolbar.getMenu().findItem(num.intValue());
                    if (findItem != null) {
                        ym.e.b(toolbar, findItem, options);
                        bool = options.f3070m;
                        if (bool != null && (t5 = hVar.t(toolbar, kVar2.a, bool)) != null) {
                            linkedHashSet.add(t5);
                        }
                    }
                }
                Log.e("StackHeaderApplicator", "[RNScreens] Unable to find menu element.");
                bool = options.f3070m;
                if (bool != null) {
                    linkedHashSet.add(t5);
                }
            }
            Iterator it2 = linkedHashSet.iterator();
            while (it2.hasNext()) {
                hVar.u(toolbar, (String) it2.next());
            }
        }
    }

    public static final void c(k[] kVarArr, t tVar, List list, Ref.IntRef intRef, Ref.BooleanRef booleanRef, int i5, i iVar) {
        if (kVarArr[i5] != null) {
            throw new IllegalStateException("[RNScreens] Unexpected duplicated element resolution.");
        }
        if (tVar.f3114e) {
            return;
        }
        kVarArr[i5] = new k(((j) list.get(i5)).a, iVar);
        int i6 = intRef.element - 1;
        intRef.element = i6;
        if (i6 != 0 || booleanRef.element) {
            return;
        }
        b(tVar, kVarArr);
        tVar.a();
    }

    public final void a() {
        while (true) {
            ArrayDeque arrayDeque = this.f3112c;
            List list = (List) (arrayDeque.isEmpty() ? null : arrayDeque.f13481e[arrayDeque.f13480d]);
            if (list == null) {
                this.f3113d = false;
                return;
            }
            this.f3113d = true;
            k[] kVarArr = new k[list.size()];
            Ref.IntRef intRef = new Ref.IntRef();
            intRef.element = list.size();
            Ref.BooleanRef booleanRef = new Ref.BooleanRef();
            booleanRef.element = true;
            int i5 = 0;
            for (Object obj : list) {
                int i6 = i5 + 1;
                if (i5 < 0) {
                    c0.k();
                    throw null;
                }
                j jVar = (j) obj;
                p iconSource = jVar.f3073c;
                if (iconSource == null) {
                    c(kVarArr, this, list, intRef, booleanRef, i5, jVar.f3072b);
                } else {
                    Ref.IntRef intRef2 = intRef;
                    k[] kVarArr2 = kVarArr;
                    List list2 = list;
                    Ref.BooleanRef booleanRef2 = booleanRef;
                    s onResolved = new s(i5, jVar, kVarArr2, this, list2, intRef2, booleanRef2);
                    list = list2;
                    booleanRef = booleanRef2;
                    kVarArr = kVarArr2;
                    intRef = intRef2;
                    zm.c cVar = this.a.a;
                    Intrinsics.checkNotNullParameter(iconSource, "iconSource");
                    Intrinsics.checkNotNullParameter(onResolved, "onResolved");
                    ThemedReactContext context = cVar.f21287d;
                    String str = iconSource.a;
                    String str2 = iconSource.f3093b;
                    com.facebook.react.runtime.r onComplete = new com.facebook.react.runtime.r(24, onResolved);
                    Intrinsics.checkNotNullParameter(context, "context");
                    Intrinsics.checkNotNullParameter(onComplete, "onComplete");
                    if (str != null) {
                        onComplete.invoke(jb.a.w(context, str));
                    } else if (str2 != null) {
                        d9.a.D(context, str2, onComplete);
                    } else {
                        onComplete.invoke(null);
                    }
                }
                i5 = i6;
            }
            booleanRef.element = false;
            if (intRef.element > 0) {
                return;
            } else {
                b(this, kVarArr);
            }
        }
    }
}
