package bg;

import java.util.Collections;
import java.util.Comparator;
import java.util.NavigableSet;
import java.util.SortedSet;

/* loaded from: classes3.dex */
public abstract class w extends r implements NavigableSet, g0 {

    /* renamed from: v, reason: collision with root package name */
    public final transient Comparator f3001v;

    /* renamed from: w, reason: collision with root package name */
    public transient w f3002w;

    public w(Comparator comparator) {
        this.f3001v = comparator;
    }

    public static d0 s(Comparator comparator) {
        if (z.f3008e.equals(comparator)) {
            return d0.f2942y;
        }
        l lVar = p.f2980e;
        return new d0(b0.f2933w, comparator);
    }

    public final void addFirst(Object obj) {
        throw new UnsupportedOperationException();
    }

    public final void addLast(Object obj) {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.SortedSet
    public final Comparator comparator() {
        return this.f3001v;
    }

    public abstract Object first();

    public final Object getFirst() {
        return first();
    }

    public final Object getLast() {
        return last();
    }

    @Override // java.util.NavigableSet, java.util.SortedSet
    public final SortedSet headSet(Object obj) {
        obj.getClass();
        d0 d0Var = (d0) this;
        return d0Var.w(0, d0Var.u(obj, false));
    }

    public abstract Object last();

    @Override // java.util.NavigableSet
    /* renamed from: n, reason: merged with bridge method [inline-methods] */
    public final w descendingSet() {
        w wVar = this.f3002w;
        if (wVar == null) {
            d0 d0Var = (d0) this;
            Comparator reverseOrder = Collections.reverseOrder(d0Var.f3001v);
            wVar = d0Var.isEmpty() ? s(reverseOrder) : new d0(d0Var.f2943x.i(), reverseOrder);
            this.f3002w = wVar;
            wVar.f3002w = this;
        }
        return wVar;
    }

    @Override // java.util.NavigableSet
    /* renamed from: p, reason: merged with bridge method [inline-methods] */
    public final d0 subSet(Object obj, boolean z5, Object obj2, boolean z6) {
        obj.getClass();
        obj2.getClass();
        if (this.f3001v.compare(obj, obj2) > 0) {
            throw new IllegalArgumentException();
        }
        d0 d0Var = (d0) this;
        d0 w5 = d0Var.w(d0Var.v(obj, z5), d0Var.f2943x.size());
        return w5.w(0, w5.u(obj2, z6));
    }

    @Override // java.util.NavigableSet
    public final Object pollFirst() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.NavigableSet
    public final Object pollLast() {
        throw new UnsupportedOperationException();
    }

    public final Object removeFirst() {
        throw new UnsupportedOperationException();
    }

    public final Object removeLast() {
        throw new UnsupportedOperationException();
    }

    @Override // java.util.NavigableSet, java.util.SortedSet
    public final /* bridge */ /* synthetic */ SortedSet subSet(Object obj, Object obj2) {
        return subSet(obj, true, obj2, false);
    }

    @Override // java.util.NavigableSet, java.util.SortedSet
    public final SortedSet tailSet(Object obj) {
        obj.getClass();
        d0 d0Var = (d0) this;
        return d0Var.w(d0Var.v(obj, true), d0Var.f2943x.size());
    }

    @Override // java.util.NavigableSet
    public final NavigableSet headSet(Object obj, boolean z5) {
        obj.getClass();
        d0 d0Var = (d0) this;
        return d0Var.w(0, d0Var.u(obj, z5));
    }

    @Override // java.util.NavigableSet
    public final NavigableSet tailSet(Object obj, boolean z5) {
        obj.getClass();
        d0 d0Var = (d0) this;
        return d0Var.w(d0Var.v(obj, z5), d0Var.f2943x.size());
    }
}
