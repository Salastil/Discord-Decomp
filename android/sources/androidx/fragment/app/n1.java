package androidx.fragment.app;

import android.view.View;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class n1 {
    public static final s1 a = new s1();

    /* renamed from: b, reason: collision with root package name */
    public static final u1 f2061b;

    static {
        u1 u1Var = null;
        try {
            Intrinsics.checkNotNull(m3.k.class, "null cannot be cast to non-null type java.lang.Class<androidx.fragment.app.FragmentTransitionImpl>");
            u1Var = (u1) m3.k.class.getDeclaredConstructor(null).newInstance(null);
        } catch (Exception unused) {
        }
        f2061b = u1Var;
    }

    public static final void a(Fragment inFragment, Fragment outFragment, boolean z5, s.e sharedElements) {
        Intrinsics.checkNotNullParameter(inFragment, "inFragment");
        Intrinsics.checkNotNullParameter(outFragment, "outFragment");
        Intrinsics.checkNotNullParameter(sharedElements, "sharedElements");
        if ((z5 ? outFragment.getEnterTransitionCallback() : inFragment.getEnterTransitionCallback()) != null) {
            ArrayList arrayList = new ArrayList(sharedElements.f1208i);
            Iterator it = ((androidx.datastore.preferences.protobuf.d1) sharedElements.entrySet()).iterator();
            while (it.hasNext()) {
                arrayList.add((View) ((Map.Entry) it.next()).getValue());
            }
            ArrayList arrayList2 = new ArrayList(sharedElements.f1208i);
            Iterator it2 = ((androidx.datastore.preferences.protobuf.d1) sharedElements.entrySet()).iterator();
            while (it2.hasNext()) {
                arrayList2.add((String) ((Map.Entry) it2.next()).getKey());
            }
        }
    }

    public static final String b(s.e eVar, String value) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        Intrinsics.checkNotNullParameter(value, "value");
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        Iterator it = ((androidx.datastore.preferences.protobuf.d1) eVar.entrySet()).iterator();
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            if (Intrinsics.areEqual(entry.getValue(), value)) {
                linkedHashMap.put(entry.getKey(), entry.getValue());
            }
        }
        ArrayList arrayList = new ArrayList(linkedHashMap.size());
        Iterator it2 = linkedHashMap.entrySet().iterator();
        while (it2.hasNext()) {
            arrayList.add((String) ((Map.Entry) it2.next()).getKey());
        }
        return (String) CollectionsKt.firstOrNull(arrayList);
    }

    public static final void c(int i5, ArrayList views) {
        Intrinsics.checkNotNullParameter(views, "views");
        Iterator it = views.iterator();
        while (it.hasNext()) {
            ((View) it.next()).setVisibility(i5);
        }
    }
}
