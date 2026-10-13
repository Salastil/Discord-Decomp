package km;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.views.swiperefresh.ReactSwipeRefreshLayout;
import com.facebook.react.views.view.ReactViewGroup;
import com.swmansion.gesturehandler.react.RNGestureHandlerModule;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f extends ReactViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public Object f13430d;

    /* renamed from: e, reason: collision with root package name */
    public Object f13431e;

    /* renamed from: i, reason: collision with root package name */
    public LinkedHashSet f13432i;

    /* renamed from: v, reason: collision with root package name */
    public LinkedHashSet f13433v;

    /* renamed from: w, reason: collision with root package name */
    public LinkedHashSet f13434w;

    /* renamed from: x, reason: collision with root package name */
    public LinkedHashMap f13435x;

    /* renamed from: y, reason: collision with root package name */
    public int f13436y;

    public static /* synthetic */ void d(f fVar, List list) {
        fVar.c(list, fVar.getId(), 5, fVar.f13433v);
    }

    private final ThemedReactContext getReactContext() {
        Context context = getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.uimanager.ThemedReactContext");
        return (ThemedReactContext) context;
    }

    @Override // android.view.ViewGroup
    public final void addView(View child, int i5, ViewGroup.LayoutParams layoutParams) {
        Intrinsics.checkNotNullParameter(child, "child");
        super.addView(child, i5, layoutParams);
        if (!this.f13432i.isEmpty()) {
            getChildCount();
        }
        i(child);
    }

    public final void c(List list, int i5, int i6, Set set) {
        Map map;
        jm.f fVar;
        RNGestureHandlerModule.Companion.getClass();
        map = RNGestureHandlerModule.registries;
        k kVar = (k) map.get(Integer.valueOf(this.f13436y));
        if (kVar == null) {
            throw new Exception("Tried to access a non-existent registry");
        }
        LinkedHashSet k02 = CollectionsKt.k0(set);
        Iterator it = list.iterator();
        while (it.hasNext()) {
            int intValue = ((Number) it.next()).intValue();
            k02.remove(Integer.valueOf(intValue));
            if (!set.contains(Integer.valueOf(intValue))) {
                com.discord.chat.presentation.message.view.voicemessages.d block = new com.discord.chat.presentation.message.view.voicemessages.d(this, i6, i5, 2);
                Intrinsics.checkNotNullParameter(this, "owner");
                Intrinsics.checkNotNullParameter(block, "block");
                synchronized (kVar) {
                    try {
                        LinkedHashMap linkedHashMap = kVar.f13441d;
                        Integer valueOf = Integer.valueOf(intValue);
                        Object obj = linkedHashMap.get(valueOf);
                        if (obj == null) {
                            obj = new LinkedHashMap();
                            linkedHashMap.put(valueOf, obj);
                        }
                        ((Map) obj).put(this, block);
                        fVar = (jm.f) kVar.a.get(intValue);
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                if (fVar != null) {
                    block.invoke(fVar);
                }
                set.add(Integer.valueOf(intValue));
            }
        }
        Iterator it2 = k02.iterator();
        while (it2.hasNext()) {
            int intValue2 = ((Number) it2.next()).intValue();
            kVar.b(this, intValue2);
            if (this.f13434w.contains(Integer.valueOf(intValue2))) {
                kVar.c(this, intValue2);
                this.f13434w.remove(Integer.valueOf(intValue2));
            }
            set.remove(Integer.valueOf(intValue2));
            this.f13432i.remove(Integer.valueOf(intValue2));
        }
    }

    public final void e(List list) {
        Map map;
        LinkedHashSet linkedHashSet = this.f13434w;
        LinkedHashMap linkedHashMap = this.f13435x;
        LinkedHashSet k02 = CollectionsKt.k0(linkedHashMap.keySet());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            k02.remove(Integer.valueOf(((e) it.next()).f13429b));
        }
        RNGestureHandlerModule.Companion.getClass();
        map = RNGestureHandlerModule.registries;
        k kVar = (k) map.get(Integer.valueOf(this.f13436y));
        if (kVar == null) {
            throw new Exception("Tried to access a non-existent registry");
        }
        Iterator it2 = k02.iterator();
        while (it2.hasNext()) {
            int intValue = ((Number) it2.next()).intValue();
            Object obj = linkedHashMap.get(Integer.valueOf(intValue));
            Intrinsics.checkNotNull(obj);
            Iterator it3 = ((Set) obj).iterator();
            while (it3.hasNext()) {
                int intValue2 = ((Number) it3.next()).intValue();
                kVar.b(this, intValue2);
                if (linkedHashSet.contains(Integer.valueOf(intValue2))) {
                    kVar.c(this, intValue2);
                    linkedHashSet.remove(Integer.valueOf(intValue2));
                }
            }
            linkedHashMap.remove(Integer.valueOf(intValue));
        }
        Iterator it4 = list.iterator();
        while (it4.hasNext()) {
            e eVar = (e) it4.next();
            int i5 = eVar.f13429b;
            if (!linkedHashMap.containsKey(Integer.valueOf(i5))) {
                linkedHashMap.put(Integer.valueOf(i5), new LinkedHashSet());
            }
            List list2 = eVar.a;
            Object obj2 = linkedHashMap.get(Integer.valueOf(i5));
            Intrinsics.checkNotNull(obj2);
            c(list2, i5, 6, (Set) obj2);
        }
    }

    public final void f() {
        Map map;
        RNGestureHandlerModule.Companion.getClass();
        map = RNGestureHandlerModule.registries;
        k kVar = (k) map.get(Integer.valueOf(this.f13436y));
        if (kVar != null) {
            synchronized (kVar) {
                Intrinsics.checkNotNullParameter(this, "owner");
                Iterator it = kVar.f13441d.entrySet().iterator();
                while (it.hasNext()) {
                    Map.Entry entry = (Map.Entry) it.next();
                    ((Map) entry.getValue()).remove(this);
                    if (((Map) entry.getValue()).isEmpty()) {
                        it.remove();
                    }
                }
            }
            Iterator it2 = this.f13434w.iterator();
            while (it2.hasNext()) {
                kVar.c(this, ((Number) it2.next()).intValue());
            }
        }
        this.f13434w.clear();
        this.f13435x.clear();
        this.f13433v.clear();
        this.f13432i.clear();
    }

    public final void g(Event event) {
        Intrinsics.checkNotNullParameter(event, "event");
        EventDispatcher eventDispatcherForReactTag = UIManagerHelper.getEventDispatcherForReactTag(getReactContext(), getId());
        if (eventDispatcherForReactTag != null) {
            eventDispatcherForReactTag.dispatchEvent(event);
        }
    }

    public final void h(jm.f handler) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(this, "viewGroup");
        n nVar = null;
        for (ViewParent parent = getParent(); parent != null; parent = parent.getParent()) {
            if (parent instanceof n) {
                nVar = (n) parent;
            }
        }
        if (nVar != null) {
            Intrinsics.checkNotNullParameter(handler, "handler");
            m mVar = nVar.f13453v;
            if (mVar != null) {
                Intrinsics.checkNotNullParameter(handler, "handler");
                jm.g gVar = mVar.f13443c;
                if (gVar != null) {
                    gVar.g(handler, null);
                }
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:31:0x0055  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x005a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void i(View view) {
        Map map;
        int id2;
        c cVar;
        LinkedHashSet linkedHashSet = this.f13432i;
        if (linkedHashSet.isEmpty()) {
            return;
        }
        getChildCount();
        RNGestureHandlerModule.Companion.getClass();
        map = RNGestureHandlerModule.registries;
        k kVar = (k) map.get(Integer.valueOf(this.f13436y));
        if (kVar == null) {
            throw new Exception("Tried to access a non-existent registry");
        }
        if (view instanceof ReactSwipeRefreshLayout) {
            id2 = ((ReactSwipeRefreshLayout) view).getChildAt(0).getId();
        } else {
            if (view instanceof ViewGroup) {
                ViewGroup viewGroup = (ViewGroup) view;
                if (viewGroup.getChildCount() != 0) {
                    if (viewGroup.getChildCount() != 0) {
                        View childAt = viewGroup.getChildAt(0);
                        if (childAt instanceof c) {
                            cVar = (c) childAt;
                            id2 = cVar == null ? cVar.getId() : viewGroup.getId();
                        }
                    }
                    cVar = null;
                    if (cVar == null) {
                    }
                }
            }
            id2 = view.getId();
        }
        Iterator it = linkedHashSet.iterator();
        while (it.hasNext()) {
            int intValue = ((Number) it.next()).intValue();
            if (kVar.f(intValue) != null) {
                kVar.a(intValue, id2, 5, this);
                this.f13434w.add(Integer.valueOf(intValue));
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.List] */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.lang.Object, java.util.List] */
    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f13436y != -1) {
            d(this, this.f13430d);
            e(this.f13431e);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        f();
        super.onDetachedFromWindow();
    }

    @Override // android.view.ViewGroup
    public final void removeViewAt(int i5) {
        Map map;
        LinkedHashSet linkedHashSet = this.f13434w;
        RNGestureHandlerModule.Companion.getClass();
        map = RNGestureHandlerModule.registries;
        k kVar = (k) map.get(Integer.valueOf(this.f13436y));
        if (kVar != null) {
            Iterator it = this.f13432i.iterator();
            while (it.hasNext()) {
                int intValue = ((Number) it.next()).intValue();
                if (linkedHashSet.contains(Integer.valueOf(intValue))) {
                    kVar.c(this, intValue);
                    linkedHashSet.remove(Integer.valueOf(intValue));
                }
            }
        }
        super.removeViewAt(i5);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, java.util.List] */
    /* JADX WARN: Type inference failed for: r0v2, types: [java.util.ArrayList] */
    public final void setHandlerTags(ReadableArray readableArray) {
        ?? r02;
        ArrayList<Object> arrayList;
        if (readableArray == null || (arrayList = readableArray.toArrayList()) == null) {
            r02 = m0.f13512d;
        } else {
            r02 = new ArrayList(d0.l(arrayList, 10));
            for (Object obj : arrayList) {
                Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Double");
                r02.add(Integer.valueOf((int) ((Double) obj).doubleValue()));
            }
        }
        this.f13430d = r02;
        if (this.f13436y != -1) {
            d(this, r02);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v1, types: [java.lang.Object, java.util.List] */
    /* JADX WARN: Type inference failed for: r2v2, types: [java.lang.Object, java.util.List] */
    public final void setModuleId(int i5) {
        if (this.f13436y == i5) {
            return;
        }
        this.f13436y = i5;
        d(this, this.f13430d);
        e(this.f13431e);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r8v0 */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v2, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r8v3, types: [kotlin.collections.m0] */
    /* JADX WARN: Type inference failed for: r8v4, types: [java.util.ArrayList] */
    public final void setVirtualChildren(ReadableArray readableArray) {
        ?? r82;
        e eVar;
        List list = null;
        if (readableArray != null) {
            int size = readableArray.size();
            ArrayList arrayList = new ArrayList(size);
            for (int i5 = 0; i5 < size; i5++) {
                ReadableMap map = readableArray.getMap(i5);
                if (map == null) {
                    eVar = null;
                } else {
                    ReadableArray array = map.getArray("handlerTags");
                    if (array != null) {
                        int size2 = array.size();
                        r82 = new ArrayList(size2);
                        for (int i6 = 0; i6 < size2; i6++) {
                            r82.add(Integer.valueOf(array.getInt(i6)));
                        }
                    } else {
                        r82 = 0;
                    }
                    if (r82 == 0) {
                        r82 = m0.f13512d;
                    }
                    eVar = new e(r82, map.getInt("viewTag"));
                }
                arrayList.add(eVar);
            }
            list = CollectionsKt.I(arrayList);
        }
        if (list == null) {
            list = m0.f13512d;
        }
        this.f13431e = list;
        if (this.f13436y != -1) {
            e(list);
        }
    }
}
