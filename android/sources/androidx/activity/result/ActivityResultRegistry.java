package androidx.activity.result;

import android.content.Intent;
import android.os.Bundle;
import android.support.v4.media.session.b;
import android.util.Log;
import androidx.activity.result.ActivityResultCallback;
import androidx.activity.result.ActivityResultRegistry;
import androidx.activity.result.contract.ActivityResultContract;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.n;
import androidx.lifecycle.t;
import f.a;
import f.c;
import f.d;
import f.e;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.NoSuchElementException;
import kotlin.jvm.internal.Intrinsics;
import kr.o;
import x0.f;

/* loaded from: classes.dex */
public abstract class ActivityResultRegistry {
    public final LinkedHashMap a = new LinkedHashMap();

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashMap f752b = new LinkedHashMap();

    /* renamed from: c, reason: collision with root package name */
    public final LinkedHashMap f753c = new LinkedHashMap();

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f754d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public final transient LinkedHashMap f755e = new LinkedHashMap();

    /* renamed from: f, reason: collision with root package name */
    public final LinkedHashMap f756f = new LinkedHashMap();

    /* renamed from: g, reason: collision with root package name */
    public final Bundle f757g = new Bundle();

    public final boolean a(int i5, int i6, Intent intent) {
        String str = (String) this.a.get(Integer.valueOf(i5));
        if (str == null) {
            return false;
        }
        c cVar = (c) this.f755e.get(str);
        if ((cVar != null ? cVar.a : null) != null) {
            ArrayList arrayList = this.f754d;
            if (arrayList.contains(str)) {
                cVar.a.f(cVar.f8292b.c(i6, intent));
                arrayList.remove(str);
                return true;
            }
        }
        this.f756f.remove(str);
        this.f757g.putParcelable(str, new a(i6, intent));
        return true;
    }

    public abstract void b(int i5, ActivityResultContract activityResultContract, Object obj, f fVar);

    public final f.f c(String key, ActivityResultContract contract, ActivityResultCallback callback) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(contract, "contract");
        Intrinsics.checkNotNullParameter(callback, "callback");
        e(key);
        this.f755e.put(key, new c(contract, callback));
        LinkedHashMap linkedHashMap = this.f756f;
        if (linkedHashMap.containsKey(key)) {
            Object obj = linkedHashMap.get(key);
            linkedHashMap.remove(key);
            callback.f(obj);
        }
        Bundle bundle = this.f757g;
        a aVar = (a) b.p(bundle, key, a.class);
        if (aVar != null) {
            bundle.remove(key);
            callback.f(contract.c(aVar.f8286d, aVar.f8287e));
        }
        return new f.f(this, key, contract, 1);
    }

    public final f.f d(final String key, LifecycleOwner lifecycleOwner, final ActivityResultContract contract, final ActivityResultCallback callback) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(lifecycleOwner, "lifecycleOwner");
        Intrinsics.checkNotNullParameter(contract, "contract");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Lifecycle lifecycle = lifecycleOwner.getLifecycle();
        if (lifecycle.b().a(Lifecycle.State.f2140v)) {
            throw new IllegalStateException(("LifecycleOwner " + lifecycleOwner + " is attempting to register while current state is " + lifecycle.b() + ". LifecycleOwners must call register before they are STARTED.").toString());
        }
        e(key);
        LinkedHashMap linkedHashMap = this.f753c;
        d dVar = (d) linkedHashMap.get(key);
        if (dVar == null) {
            dVar = new d(lifecycle);
        }
        t observer = new t() { // from class: f.b
            @Override // androidx.lifecycle.t
            public final void c(LifecycleOwner lifecycleOwner2, n event) {
                Intrinsics.checkNotNullParameter(lifecycleOwner2, "<anonymous parameter 0>");
                Intrinsics.checkNotNullParameter(event, "event");
                n nVar = n.ON_START;
                ActivityResultRegistry activityResultRegistry = ActivityResultRegistry.this;
                String str = key;
                if (nVar != event) {
                    if (n.ON_STOP == event) {
                        activityResultRegistry.f755e.remove(str);
                        return;
                    } else {
                        if (n.ON_DESTROY == event) {
                            activityResultRegistry.f(str);
                            return;
                        }
                        return;
                    }
                }
                LinkedHashMap linkedHashMap2 = activityResultRegistry.f755e;
                Bundle bundle = activityResultRegistry.f757g;
                LinkedHashMap linkedHashMap3 = activityResultRegistry.f756f;
                ActivityResultContract activityResultContract = contract;
                ActivityResultCallback activityResultCallback = callback;
                linkedHashMap2.put(str, new c(activityResultContract, activityResultCallback));
                if (linkedHashMap3.containsKey(str)) {
                    Object obj = linkedHashMap3.get(str);
                    linkedHashMap3.remove(str);
                    activityResultCallback.f(obj);
                }
                a aVar = (a) android.support.v4.media.session.b.p(bundle, str, a.class);
                if (aVar != null) {
                    bundle.remove(str);
                    activityResultCallback.f(activityResultContract.c(aVar.f8286d, aVar.f8287e));
                }
            }
        };
        Intrinsics.checkNotNullParameter(observer, "observer");
        dVar.a.a(observer);
        dVar.f8293b.add(observer);
        linkedHashMap.put(key, dVar);
        return new f.f(this, key, contract, 0);
    }

    public final void e(String str) {
        LinkedHashMap linkedHashMap = this.f752b;
        if (((Integer) linkedHashMap.get(str)) != null) {
            return;
        }
        Iterator it = o.d(e.f8294d).iterator();
        while (it.hasNext()) {
            Number number = (Number) it.next();
            Integer valueOf = Integer.valueOf(number.intValue());
            LinkedHashMap linkedHashMap2 = this.a;
            if (!linkedHashMap2.containsKey(valueOf)) {
                int intValue = number.intValue();
                linkedHashMap2.put(Integer.valueOf(intValue), str);
                linkedHashMap.put(str, Integer.valueOf(intValue));
                return;
            }
        }
        throw new NoSuchElementException("Sequence contains no element matching the predicate.");
    }

    public final void f(String key) {
        Integer num;
        Intrinsics.checkNotNullParameter(key, "key");
        if (!this.f754d.contains(key) && (num = (Integer) this.f752b.remove(key)) != null) {
            this.a.remove(num);
        }
        this.f755e.remove(key);
        LinkedHashMap linkedHashMap = this.f756f;
        if (linkedHashMap.containsKey(key)) {
            StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Dropping pending result for request ", key, ": ");
            m5.append(linkedHashMap.get(key));
            Log.w("ActivityResultRegistry", m5.toString());
            linkedHashMap.remove(key);
        }
        Bundle bundle = this.f757g;
        if (bundle.containsKey(key)) {
            Log.w("ActivityResultRegistry", "Dropping pending result for request " + key + ": " + ((a) b.p(bundle, key, a.class)));
            bundle.remove(key);
        }
        LinkedHashMap linkedHashMap2 = this.f753c;
        d dVar = (d) linkedHashMap2.get(key);
        if (dVar != null) {
            ArrayList arrayList = dVar.f8293b;
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                dVar.a.c((t) it.next());
            }
            arrayList.clear();
            linkedHashMap2.remove(key);
        }
    }
}
