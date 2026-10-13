package fr;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.collections.c0;
import kotlin.collections.d0;
import kotlin.jvm.internal.markers.KMappedMarker;
import yq.k0;

/* loaded from: classes3.dex */
public abstract class d implements Iterable, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public a f9009d;

    public static String a(a aVar, int i5, String str) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append("Race condition happened, the size of ArrayMap is " + i5 + " but it isn't an `" + str + '`');
        sb2.append('\n');
        StringBuilder sb3 = new StringBuilder("Type: ");
        sb3.append(aVar.getClass());
        sb2.append(sb3.toString());
        sb2.append('\n');
        StringBuilder sb4 = new StringBuilder();
        ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) k0.f21045e.f8000e;
        sb4.append("[\n");
        ArrayList arrayList = new ArrayList(d0.l(aVar, 10));
        int i6 = 0;
        for (Object obj : aVar) {
            int i10 = i6 + 1;
            Object obj2 = null;
            if (i6 < 0) {
                c0.k();
                throw null;
            }
            Iterator it = concurrentHashMap.entrySet().iterator();
            while (true) {
                if (it.hasNext()) {
                    Object next = it.next();
                    if (((Number) ((Map.Entry) next).getValue()).intValue() == i6) {
                        obj2 = next;
                        break;
                    }
                }
            }
            sb4.append("  " + ((Map.Entry) obj2) + '[' + i6 + "]: " + obj);
            sb4.append('\n');
            arrayList.add(sb4);
            i6 = i10;
        }
        sb2.append("Content: " + s4.h.h(sb4, "]", '\n'));
        sb2.append('\n');
        return sb2.toString();
    }

    public final boolean isEmpty() {
        return this.f9009d.a() == 0;
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return this.f9009d.iterator();
    }
}
