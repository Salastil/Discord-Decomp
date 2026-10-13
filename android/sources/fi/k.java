package fi;

import java.util.List;
import java.util.ListIterator;

/* loaded from: classes3.dex */
public final class k extends c implements ListIterator {

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ l f8673w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(l lVar) {
        super(lVar);
        this.f8673w = lVar;
    }

    @Override // java.util.ListIterator
    public final void add(Object obj) {
        l lVar = this.f8673w;
        boolean isEmpty = lVar.isEmpty();
        b().add(obj);
        lVar.f8681x.f8688w++;
        if (isEmpty) {
            lVar.a();
        }
    }

    public final ListIterator b() {
        a();
        return (ListIterator) this.f8640e;
    }

    @Override // java.util.ListIterator
    public final boolean hasPrevious() {
        return b().hasPrevious();
    }

    @Override // java.util.ListIterator
    public final int nextIndex() {
        return b().nextIndex();
    }

    @Override // java.util.ListIterator
    public final Object previous() {
        return b().previous();
    }

    @Override // java.util.ListIterator
    public final int previousIndex() {
        return b().previousIndex();
    }

    @Override // java.util.ListIterator
    public final void set(Object obj) {
        b().set(obj);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(l lVar, int i5) {
        super(lVar, ((List) lVar.f8677e).listIterator(i5));
        this.f8673w = lVar;
    }
}
