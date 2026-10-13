package androidx.core.view;

import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.markers.KMappedMarker;

/* loaded from: classes.dex */
public final class a0 implements Iterator, KMappedMarker {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1548d;

    /* renamed from: e, reason: collision with root package name */
    public Iterator f1549e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f1550i;

    public a0(w0 w0Var) {
        this.f1548d = 0;
        this.f1550i = new ArrayList();
        this.f1549e = w0Var;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        switch (this.f1548d) {
        }
        return this.f1549e.hasNext();
    }

    @Override // java.util.Iterator
    public final Object next() {
        switch (this.f1548d) {
            case 0:
                Object next = this.f1549e.next();
                ArrayList arrayList = (ArrayList) this.f1550i;
                View view = (View) next;
                ViewGroup viewGroup = view instanceof ViewGroup ? (ViewGroup) view : null;
                w0 w0Var = viewGroup != null ? new w0(viewGroup) : null;
                if (w0Var == null || !w0Var.hasNext()) {
                    while (!this.f1549e.hasNext() && !arrayList.isEmpty()) {
                        this.f1549e = (Iterator) CollectionsKt.Q(arrayList);
                        kotlin.collections.h0.u(arrayList);
                    }
                } else {
                    arrayList.add(this.f1549e);
                    this.f1549e = w0Var;
                }
                return next;
            default:
                return ((kr.t) this.f1550i).f13662b.invoke(this.f1549e.next());
        }
    }

    @Override // java.util.Iterator
    public final void remove() {
        switch (this.f1548d) {
            case 0:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
            default:
                throw new UnsupportedOperationException("Operation is not supported for read-only collection");
        }
    }

    public a0(kr.t tVar) {
        this.f1548d = 1;
        this.f1550i = tVar;
        this.f1549e = tVar.a.iterator();
    }
}
