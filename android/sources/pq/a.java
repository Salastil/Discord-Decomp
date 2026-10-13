package pq;

import e4.i;
import ip.f;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.h0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import lp.i0;

/* loaded from: classes3.dex */
public final class a implements e {

    /* renamed from: b, reason: collision with root package name */
    public final List f16458b;

    public a(m0 inner) {
        Intrinsics.checkNotNullParameter(inner, "inner");
        this.f16458b = inner;
    }

    public final void a(f thisDescriptor, ArrayList result, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(c6, "c");
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            ((a) ((e) it.next())).a(thisDescriptor, result, c6);
        }
    }

    public final void b(f thisDescriptor, hq.e name, ArrayList result, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(c6, "c");
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            ((a) ((e) it.next())).b(thisDescriptor, name, result, c6);
        }
    }

    public final void c(f thisDescriptor, hq.e name, go.e result, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(c6, "c");
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            ((a) ((e) it.next())).c(thisDescriptor, name, result, c6);
        }
    }

    public final void d(f thisDescriptor, hq.e name, ArrayList result, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(result, "result");
        Intrinsics.checkNotNullParameter(c6, "c");
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            ((a) ((e) it.next())).d(thisDescriptor, name, result, c6);
        }
    }

    public final ArrayList e(f thisDescriptor, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(c6, "c");
        ArrayList arrayList = new ArrayList();
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            h0.o(arrayList, ((a) ((e) it.next())).e(thisDescriptor, c6));
        }
        return arrayList;
    }

    public final ArrayList f(f thisDescriptor, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(c6, "c");
        ArrayList arrayList = new ArrayList();
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            h0.o(arrayList, ((a) ((e) it.next())).f(thisDescriptor, c6));
        }
        return arrayList;
    }

    public final ArrayList g(f thisDescriptor, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(c6, "c");
        ArrayList arrayList = new ArrayList();
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            h0.o(arrayList, ((a) ((e) it.next())).g(thisDescriptor, c6));
        }
        return arrayList;
    }

    public final i0 h(f thisDescriptor, i0 propertyDescriptor, i c6) {
        Intrinsics.checkNotNullParameter(thisDescriptor, "thisDescriptor");
        Intrinsics.checkNotNullParameter(propertyDescriptor, "propertyDescriptor");
        Intrinsics.checkNotNullParameter(c6, "c");
        Iterator it = this.f16458b.iterator();
        while (it.hasNext()) {
            propertyDescriptor = ((a) ((e) it.next())).h(thisDescriptor, propertyDescriptor, c6);
        }
        return propertyDescriptor;
    }
}
