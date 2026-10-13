package androidx.recyclerview.widget;

import androidx.recyclerview.widget.AsyncListDiffer;
import java.util.List;

/* loaded from: classes.dex */
public final class n0 implements AsyncListDiffer.ListListener {
    public final /* synthetic */ o0 a;

    public n0(o0 o0Var) {
        this.a = o0Var;
    }

    @Override // androidx.recyclerview.widget.AsyncListDiffer.ListListener
    public final void a(List list, List list2) {
        this.a.onCurrentListChanged(list, list2);
    }
}
