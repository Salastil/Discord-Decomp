package ij;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class y extends a0 {

    /* renamed from: c, reason: collision with root package name */
    public static final Class f10933c = Collections.unmodifiableList(Collections.EMPTY_LIST).getClass();

    public static List d(int i5, long j, Object obj) {
        List list = (List) c1.f10846c.i(j, obj);
        if (list.isEmpty()) {
            List wVar = list instanceof x ? new w(i5) : new ArrayList(i5);
            c1.o(j, obj, wVar);
            return wVar;
        }
        if (f10933c.isAssignableFrom(list.getClass())) {
            ArrayList arrayList = new ArrayList(list.size() + i5);
            arrayList.addAll(list);
            c1.o(j, obj, arrayList);
            return arrayList;
        }
        if (!(list instanceof x0)) {
            return list;
        }
        w wVar2 = new w(list.size() + i5);
        wVar2.addAll((x0) list);
        c1.o(j, obj, wVar2);
        return wVar2;
    }

    @Override // ij.a0
    public final void a(long j, Object obj) {
        Object unmodifiableList;
        List list = (List) c1.f10846c.i(j, obj);
        if (list instanceof x) {
            unmodifiableList = ((x) list).f();
        } else if (f10933c.isAssignableFrom(list.getClass())) {
            return;
        } else {
            unmodifiableList = Collections.unmodifiableList(list);
        }
        c1.o(j, obj, unmodifiableList);
    }

    @Override // ij.a0
    public final void b(long j, Object obj, Object obj2) {
        List list = (List) c1.f10846c.i(j, obj2);
        List d6 = d(list.size(), j, obj);
        int size = d6.size();
        int size2 = list.size();
        if (size > 0 && size2 > 0) {
            d6.addAll(list);
        }
        if (size > 0) {
            list = d6;
        }
        c1.o(j, obj, list);
    }

    @Override // ij.a0
    public final List c(long j, Object obj) {
        return d(10, j, obj);
    }
}
