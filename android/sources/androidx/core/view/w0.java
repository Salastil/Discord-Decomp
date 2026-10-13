package androidx.core.view;

import android.view.View;
import android.view.ViewGroup;
import java.util.Iterator;
import kotlin.jvm.internal.markers.KMutableIterator;

/* loaded from: classes.dex */
public final class w0 implements Iterator, KMutableIterator {

    /* renamed from: d, reason: collision with root package name */
    public int f1648d;

    /* renamed from: e, reason: collision with root package name */
    final /* synthetic */ ViewGroup f1649e;

    public w0(ViewGroup viewGroup) {
        this.f1649e = viewGroup;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return this.f1648d < this.f1649e.getChildCount();
    }

    @Override // java.util.Iterator
    public final Object next() {
        ViewGroup viewGroup = this.f1649e;
        int i5 = this.f1648d;
        this.f1648d = i5 + 1;
        View childAt = viewGroup.getChildAt(i5);
        if (childAt != null) {
            return childAt;
        }
        throw new IndexOutOfBoundsException();
    }

    @Override // java.util.Iterator
    public final void remove() {
        ViewGroup viewGroup = this.f1649e;
        int i5 = this.f1648d - 1;
        this.f1648d = i5;
        viewGroup.removeViewAt(i5);
    }
}
