package com.google.firebase.messaging;

import android.content.Context;
import android.os.Bundle;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.SparseArray;
import android.view.ViewGroup;
import androidx.appcompat.widget.b4;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.ViewModelProvider$Factory;
import androidx.lifecycle.ViewModelStore;
import androidx.lifecycle.c1;
import androidx.lifecycle.viewmodel.CreationExtras;
import androidx.lifecycle.z0;
import androidx.savedstate.SavedStateRegistry;
import com.discord.media.utils.Transcoder$convertCompress$3$2;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.ThemedReactContext;
import cq.g0;
import ip.o0;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import jc.l0;
import kotlin.Unit;
import kotlin.collections.u0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import lp.r0;
import nd.a1;
import th.p0;
import th.v0;

/* loaded from: classes3.dex */
public final class r implements aq.o, aq.n, uh.g, uq.f {
    public static int E = -1;

    /* renamed from: x, reason: collision with root package name */
    public static r f6256x;

    /* renamed from: y, reason: collision with root package name */
    public static final /* synthetic */ int f6257y = 0;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6258d;

    /* renamed from: e, reason: collision with root package name */
    public Object f6259e;

    /* renamed from: i, reason: collision with root package name */
    public Object f6260i;

    /* renamed from: v, reason: collision with root package name */
    public Object f6261v;

    /* renamed from: w, reason: collision with root package name */
    public Object f6262w;

    public /* synthetic */ r(int i5, Object obj, Object obj2, Object obj3, Object obj4) {
        this.f6258d = i5;
        this.f6259e = obj;
        this.f6260i = obj2;
        this.f6261v = obj3;
        this.f6262w = obj4;
    }

    public static synchronized r e() {
        r rVar;
        synchronized (r.class) {
            try {
                if (f6256x == null) {
                    f6256x = new r(0);
                }
                rVar = f6256x;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return rVar;
    }

    @Override // aq.n
    public void C(hq.b enumClassId, hq.e enumEntryName) {
        Intrinsics.checkNotNullParameter(enumClassId, "enumClassId");
        Intrinsics.checkNotNullParameter(enumEntryName, "enumEntryName");
        ((ArrayList) this.f6259e).add(new mq.i(enumClassId, enumEntryName));
    }

    @Override // aq.n
    public void O(Object obj) {
        ((ArrayList) this.f6259e).add(androidx.appcompat.widget.w.f((androidx.appcompat.widget.w) this.f6260i, (hq.e) this.f6261v, obj));
    }

    @Override // aq.o
    public aq.m Z(hq.b classId, np.a source) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(source, "source");
        return ((androidx.appcompat.widget.w) ((io.sentry.internal.debugmeta.c) this.f6261v).f11622e).H(classId, source, (ArrayList) this.f6260i);
    }

    @Override // uh.g
    public Object a() {
        Object a = ((uh.f) this.f6259e).a();
        int i5 = 7;
        return new v0((th.s) a, new uh.f(new rd.u(7, (qa.t) this.f6260i)), (p0) ((uh.f) this.f6261v).a(), new uh.f(new rd.u(i5, (uh.f) this.f6262w)));
    }

    @Override // uq.f
    public uq.e b(hq.b classId) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        cq.k kVar = (cq.k) ((LinkedHashMap) this.f6262w).get(classId);
        if (kVar == null) {
            return null;
        }
        return new uq.e((e4.l) this.f6259e, kVar, (dq.a) this.f6260i, (o0) ((uq.a0) this.f6261v).invoke(classId));
    }

    public void c(ArrayList arrayList) {
        ArrayList arrayList2 = (ArrayList) this.f6262w;
        ArrayList arrayList3 = (ArrayList) this.f6261v;
        int size = arrayList.size() - 1;
        if (size >= 0) {
            arrayList.get(size).getClass();
            throw new ClassCastException();
        }
        if (arrayList3.size() > 0) {
            int size2 = arrayList3.size();
            for (int i5 = 0; i5 < size2; i5++) {
                if (!arrayList2.contains(Integer.valueOf(i5))) {
                    if (arrayList3.get(i5) != null) {
                        throw new ClassCastException();
                    }
                    int i6 = i5 + 1;
                    if (i6 < arrayList3.size()) {
                        arrayList3.get(i6).getClass();
                        throw new ClassCastException();
                    }
                }
            }
            for (int size3 = arrayList2.size() - 1; -1 < size3; size3--) {
                arrayList3.remove(((Number) arrayList2.get(size3)).intValue());
            }
            if (arrayList3.size() > 0) {
                arrayList3.get(0).getClass();
                throw new ClassCastException();
            }
            arrayList3.clear();
            arrayList2.clear();
        }
    }

    public CloseableReference d() {
        CloseableReference closeableReference;
        CacheKey cacheKey;
        ha.d dVar;
        boolean z5;
        do {
            synchronized (this) {
                Iterator it = ((LinkedHashSet) this.f6262w).iterator();
                closeableReference = null;
                if (it.hasNext()) {
                    cacheKey = (CacheKey) it.next();
                    it.remove();
                } else {
                    cacheKey = null;
                }
            }
            if (cacheKey == null) {
                return null;
            }
            ha.h hVar = (ha.h) ((ha.e) this.f6260i);
            hVar.getClass();
            synchronized (hVar) {
                try {
                    dVar = (ha.d) hVar.f9605d.e(cacheKey);
                    if (dVar != null) {
                        ha.d dVar2 = (ha.d) hVar.f9606e.e(cacheKey);
                        dVar2.getClass();
                        o8.h.e(dVar2.f9602c == 0);
                        closeableReference = dVar2.f9601b;
                        z5 = true;
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            if (z5) {
                ha.h.d(dVar);
            }
        } while (closeableReference == null);
        return closeableReference;
    }

    public void f(ArrayList frameStates) {
        Intrinsics.checkNotNullParameter(frameStates, "frameStates");
        synchronized (((ArrayList) this.f6260i)) {
            frameStates.clear();
            c((ArrayList) this.f6259e);
            c((ArrayList) this.f6260i);
            Unit unit = Unit.a;
        }
    }

    public z0 g(String key, KClass modelClass) {
        z0 viewModel;
        z0 a;
        Intrinsics.checkNotNullParameter(modelClass, "modelClass");
        Intrinsics.checkNotNullParameter(key, "key");
        synchronized (((qa.s) this.f6262w)) {
            try {
                ViewModelStore viewModelStore = (ViewModelStore) this.f6259e;
                viewModelStore.getClass();
                Intrinsics.checkNotNullParameter(key, "key");
                viewModel = (z0) viewModelStore.a.get(key);
                if (modelClass.isInstance(viewModel)) {
                    ViewModelProvider$Factory viewModelProvider$Factory = (ViewModelProvider$Factory) this.f6260i;
                    if (viewModelProvider$Factory instanceof androidx.lifecycle.v0) {
                        androidx.lifecycle.v0 v0Var = (androidx.lifecycle.v0) viewModelProvider$Factory;
                        Intrinsics.checkNotNull(viewModel);
                        Intrinsics.checkNotNullParameter(viewModel, "viewModel");
                        Lifecycle lifecycle = v0Var.f2231d;
                        if (lifecycle != null) {
                            SavedStateRegistry savedStateRegistry = v0Var.f2232e;
                            Intrinsics.checkNotNull(savedStateRegistry);
                            Intrinsics.checkNotNull(lifecycle);
                            androidx.lifecycle.k.a(viewModel, savedStateRegistry, lifecycle);
                        }
                    }
                    Intrinsics.checkNotNull(viewModel, "null cannot be cast to non-null type T of androidx.lifecycle.viewmodel.ViewModelProviderImpl.getViewModel");
                } else {
                    t2.c extras = new t2.c((CreationExtras) this.f6261v);
                    extras.b(c1.a, key);
                    ViewModelProvider$Factory factory = (ViewModelProvider$Factory) this.f6260i;
                    Intrinsics.checkNotNullParameter(factory, "factory");
                    Intrinsics.checkNotNullParameter(modelClass, "modelClass");
                    Intrinsics.checkNotNullParameter(extras, "extras");
                    try {
                        try {
                            a = factory.c(modelClass, extras);
                        } catch (AbstractMethodError unused) {
                            a = factory.b(com.facebook.imagepipeline.nativecode.c.z(modelClass), extras);
                        }
                    } catch (AbstractMethodError unused2) {
                        a = factory.a(com.facebook.imagepipeline.nativecode.c.z(modelClass));
                    }
                    viewModel = a;
                    ViewModelStore viewModelStore2 = (ViewModelStore) this.f6259e;
                    viewModelStore2.getClass();
                    Intrinsics.checkNotNullParameter(key, "key");
                    Intrinsics.checkNotNullParameter(viewModel, "viewModel");
                    z0 z0Var = (z0) viewModelStore2.a.put(key, viewModel);
                    if (z0Var != null) {
                        z0Var.a();
                    }
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return viewModel;
    }

    public boolean h(Context context) {
        if (((Boolean) this.f6261v) == null) {
            this.f6261v = Boolean.valueOf(context.checkCallingOrSelfPermission("android.permission.ACCESS_NETWORK_STATE") == 0);
        }
        if (!((Boolean) this.f6260i).booleanValue() && Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "Missing Permission: android.permission.ACCESS_NETWORK_STATE this should normally be included by the manifest merger, but may needed to be manually added to your manifest");
        }
        return ((Boolean) this.f6261v).booleanValue();
    }

    public boolean i(Context context) {
        if (((Boolean) this.f6260i) == null) {
            this.f6260i = Boolean.valueOf(context.checkCallingOrSelfPermission("android.permission.WAKE_LOCK") == 0);
        }
        if (!((Boolean) this.f6260i).booleanValue() && Log.isLoggable("FirebaseMessaging", 3)) {
            Log.d("FirebaseMessaging", "Missing Permission: android.permission.WAKE_LOCK this should normally be included by the manifest merger, but may needed to be manually added to your manifest");
        }
        return ((Boolean) this.f6260i).booleanValue();
    }

    @Override // aq.n
    public void j() {
        switch (this.f6258d) {
            case 1:
                ArrayList arrayList = (ArrayList) this.f6260i;
                if (!arrayList.isEmpty()) {
                    ((HashMap) ((io.sentry.internal.debugmeta.c) this.f6261v).f11623i).put((aq.q) this.f6259e, arrayList);
                    break;
                }
                break;
            default:
                b4 b4Var = (b4) this.f6262w;
                hq.e eVar = (hq.e) this.f6261v;
                ArrayList elements = (ArrayList) this.f6259e;
                b4Var.getClass();
                Intrinsics.checkNotNullParameter(elements, "elements");
                if (eVar != null) {
                    r0 o6 = d9.a.o(eVar, (ip.f) b4Var.f930v);
                    if (o6 == null) {
                        if (((androidx.appcompat.widget.w) b4Var.f929i).E((hq.b) b4Var.f931w) && Intrinsics.areEqual(eVar.b(), "value")) {
                            ArrayList arrayList2 = new ArrayList();
                            Iterator it = elements.iterator();
                            while (it.hasNext()) {
                                Object next = it.next();
                                if (next instanceof mq.a) {
                                    arrayList2.add(next);
                                }
                            }
                            List list = (List) b4Var.f932x;
                            Iterator it2 = arrayList2.iterator();
                            while (it2.hasNext()) {
                                list.add((jp.b) ((mq.a) it2.next()).a);
                            }
                            break;
                        }
                    } else {
                        HashMap hashMap = (HashMap) b4Var.f928e;
                        List value = ir.n.e(elements);
                        yq.y type = o6.getType();
                        Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                        Intrinsics.checkNotNullParameter(value, "value");
                        Intrinsics.checkNotNullParameter(type, "type");
                        hashMap.put(eVar, new mq.y(value, type));
                        break;
                    }
                }
                break;
        }
    }

    public void k(String str, ArrayList arrayList) {
        Bundle bundle = (Bundle) this.f6261v;
        ((Map) this.f6259e).remove(str);
        cd.d dVar = (cd.d) this.f6262w;
        if (dVar == null) {
            ((Transcoder$convertCompress$3$2) this.f6260i).onCancelled(str, arrayList);
            return;
        }
        Message obtain = Message.obtain(dVar, 4);
        obtain.obj = arrayList;
        bundle.putString("jobId", str);
        obtain.setData(bundle);
        obtain.sendToTarget();
    }

    public void l(String str, Exception exc, ArrayList arrayList) {
        Bundle bundle = (Bundle) this.f6261v;
        ((Map) this.f6259e).remove(str);
        cd.d dVar = (cd.d) this.f6262w;
        if (dVar == null) {
            ((Transcoder$convertCompress$3$2) this.f6260i).onError(str, exc, arrayList);
            return;
        }
        Message obtain = Message.obtain(dVar, 2);
        obtain.obj = arrayList;
        bundle.putString("jobId", str);
        bundle.putSerializable("throwable", exc);
        obtain.setData(bundle);
        obtain.sendToTarget();
    }

    public void m(ViewGroup viewGroup) {
        if (viewGroup == null) {
            return;
        }
        double c6 = tl.c.c(viewGroup.getWidth());
        double c8 = tl.c.c(viewGroup.getHeight());
        wl.a aVar = new wl.a(c6, c8);
        if (Intrinsics.areEqual(aVar, (wl.a) this.f6260i)) {
            return;
        }
        this.f6260i = aVar;
        ThemedReactContext themedReactContext = (ThemedReactContext) this.f6259e;
        WritableMap createMap = Arguments.createMap();
        createMap.putDouble("height", c8);
        createMap.putDouble("width", c6);
        Unit unit = Unit.a;
        tl.b.b(themedReactContext, "KeyboardController::windowDidResize", createMap);
    }

    public b4 n(int i5, hq.b classId, np.a source) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        Intrinsics.checkNotNullParameter(source, "source");
        aq.q signature = (aq.q) this.f6259e;
        Intrinsics.checkNotNullParameter(signature, "signature");
        aq.q qVar = new aq.q(signature.a + '@' + i5);
        io.sentry.internal.debugmeta.c cVar = (io.sentry.internal.debugmeta.c) this.f6262w;
        HashMap hashMap = (HashMap) cVar.f11623i;
        List list = (List) hashMap.get(qVar);
        if (list == null) {
            list = new ArrayList();
            hashMap.put(qVar, list);
        }
        return ((androidx.appcompat.widget.w) cVar.f11622e).H(classId, source, list);
    }

    @Override // aq.n
    public void p(mq.f value) {
        Intrinsics.checkNotNullParameter(value, "value");
        ((ArrayList) this.f6259e).add(new mq.t(value));
    }

    @Override // aq.n
    public aq.m q0(hq.b classId) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        ArrayList arrayList = new ArrayList();
        androidx.appcompat.widget.w wVar = (androidx.appcompat.widget.w) this.f6260i;
        ip.p0 NO_SOURCE = o0.f12151g;
        Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
        b4 G = wVar.G(classId, NO_SOURCE, arrayList);
        Intrinsics.checkNotNull(G);
        e4.i iVar = new e4.i();
        iVar.f7953e = G;
        iVar.f7954i = this;
        iVar.f7955v = arrayList;
        iVar.f7952d = G;
        return iVar;
    }

    public /* synthetic */ r(int i5, boolean z5) {
        this.f6258d = i5;
    }

    public r(ThemedReactContext themedReactContext) {
        this.f6258d = 17;
        this.f6259e = themedReactContext;
        this.f6260i = new wl.a(0.0d, 0.0d);
    }

    public r(g0 proto, e4.l nameResolver, dq.a metadataVersion, uq.a0 classSource) {
        this.f6258d = 15;
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        Intrinsics.checkNotNullParameter(classSource, "classSource");
        this.f6259e = nameResolver;
        this.f6260i = metadataVersion;
        this.f6261v = classSource;
        List list = proto.f7103y;
        Intrinsics.checkNotNullExpressionValue(list, "getClass_List(...)");
        int a = u0.a(kotlin.collections.d0.l(list, 10));
        LinkedHashMap linkedHashMap = new LinkedHashMap(a < 16 ? 16 : a);
        for (Object obj : list) {
            linkedHashMap.put(nt.a.r((e4.l) this.f6259e, ((cq.k) obj).f7148w), obj);
        }
        this.f6262w = linkedHashMap;
    }

    public r(ba.b bVar) {
        this.f6258d = 3;
        this.f6260i = bVar;
    }

    public r(ViewModelStore store, ViewModelProvider$Factory factory, CreationExtras defaultExtras) {
        this.f6258d = 13;
        Intrinsics.checkNotNullParameter(store, "store");
        Intrinsics.checkNotNullParameter(factory, "factory");
        Intrinsics.checkNotNullParameter(defaultExtras, "defaultExtras");
        this.f6259e = store;
        this.f6260i = factory;
        this.f6261v = defaultExtras;
        this.f6262w = new qa.s();
    }

    public r(HashMap hashMap, Transcoder$convertCompress$3$2 transcoder$convertCompress$3$2, Looper looper) {
        this.f6258d = 11;
        this.f6261v = new Bundle();
        this.f6259e = hashMap;
        this.f6260i = transcoder$convertCompress$3$2;
        if (looper != null) {
            this.f6262w = new cd.d(looper, transcoder$convertCompress$3$2);
        }
    }

    public r(o9.a aVar, ha.e eVar) {
        this.f6258d = 5;
        this.f6259e = aVar;
        this.f6260i = eVar;
        this.f6262w = new LinkedHashSet();
        this.f6261v = new u4.b(8, this);
    }

    public r(io.sentry.internal.debugmeta.c cVar, aq.q signature) {
        this.f6258d = 1;
        Intrinsics.checkNotNullParameter(signature, "signature");
        this.f6262w = cVar;
        this.f6258d = 1;
        Intrinsics.checkNotNullParameter(signature, "signature");
        this.f6261v = cVar;
        this.f6259e = signature;
        this.f6260i = new ArrayList();
    }

    public r(int i5) {
        this.f6258d = i5;
        switch (i5) {
            case 9:
                this.f6259e = new s.e(0);
                this.f6260i = new SparseArray();
                this.f6261v = new s.k();
                this.f6262w = new s.e(0);
                break;
            case 18:
                this.f6259e = new ArrayList();
                this.f6260i = new ArrayList();
                this.f6261v = new ArrayList();
                this.f6262w = new ArrayList();
                new ArrayList();
                break;
            default:
                this.f6259e = null;
                this.f6260i = null;
                this.f6261v = null;
                this.f6262w = new ArrayDeque();
                break;
        }
    }

    public r(androidx.appcompat.widget.w wVar, hq.e eVar, b4 b4Var) {
        this.f6258d = 2;
        this.f6260i = wVar;
        this.f6261v = eVar;
        this.f6262w = b4Var;
        this.f6259e = new ArrayList();
    }

    public r(Context context) {
        this.f6258d = 8;
        this.f6259e = context;
        this.f6260i = jc.f.f12513c;
        this.f6262w = l0.a;
    }

    public r(io.sentry.android.core.a0 a0Var) {
        this.f6258d = 7;
        this.f6259e = a0Var;
        this.f6260i = null;
        this.f6261v = null;
        this.f6262w = null;
    }

    public r(io.sentry.android.core.a0 a0Var, byte[] bArr) {
        this.f6258d = 7;
        this.f6259e = a0Var;
        this.f6260i = bArr;
        this.f6261v = null;
        this.f6262w = null;
    }

    public r(a1 a1Var, boolean[] zArr) {
        this.f6258d = 10;
        this.f6259e = a1Var;
        this.f6260i = zArr;
        int i5 = a1Var.f15065d;
        this.f6261v = new boolean[i5];
        this.f6262w = new boolean[i5];
    }
}
