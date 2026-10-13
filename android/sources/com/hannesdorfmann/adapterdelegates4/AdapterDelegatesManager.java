package com.hannesdorfmann.adapterdelegates4;

import a3.e;
import androidx.collection.SparseArrayCompat;
import androidx.recyclerview.widget.RecyclerView;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import s.l;

/* loaded from: classes3.dex */
public final class AdapterDelegatesManager {

    /* renamed from: b, reason: collision with root package name */
    public static final List f6296b = Collections.EMPTY_LIST;
    public SparseArrayCompat a;

    public final b a(int i5) {
        Object obj;
        SparseArrayCompat sparseArrayCompat = this.a;
        sparseArrayCompat.getClass();
        Intrinsics.checkNotNullParameter(sparseArrayCompat, "<this>");
        int a = t.a.a(sparseArrayCompat.f1212v, i5, sparseArrayCompat.f1210e);
        if (a < 0 || (obj = sparseArrayCompat.f1211i[a]) == l.f17686b) {
            obj = null;
        }
        return (b) obj;
    }

    public final void b(Object obj, int i5, RecyclerView.ViewHolder viewHolder, List list) {
        b a = a(viewHolder.getItemViewType());
        if (a == null) {
            StringBuilder r5 = e.r(i5, "No delegate found for item at position = ", " for viewType = ");
            r5.append(viewHolder.getItemViewType());
            throw new NullPointerException(r5.toString());
        }
        if (list == null) {
            list = f6296b;
        }
        a.onBindViewHolder(obj, i5, viewHolder, list);
    }
}
