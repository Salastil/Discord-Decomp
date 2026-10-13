package androidx.recyclerview.widget;

/* loaded from: classes.dex */
public final class e extends c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ androidx.fragment.app.t1 f2389d;

    public e(androidx.fragment.app.t1 t1Var) {
        this.f2389d = t1Var;
    }

    @Override // androidx.recyclerview.widget.c
    public final boolean areContentsTheSame(int i5, int i6) {
        androidx.fragment.app.t1 t1Var = this.f2389d;
        Object obj = t1Var.f2102i.get(i5);
        Object obj2 = t1Var.f2103v.get(i6);
        if (obj != null && obj2 != null) {
            return ((v) ((AsyncListDiffer) t1Var.f2105x).f2257b.f2384b).areContentsTheSame(obj, obj2);
        }
        if (obj == null && obj2 == null) {
            return true;
        }
        throw new AssertionError();
    }

    @Override // androidx.recyclerview.widget.c
    public final boolean areItemsTheSame(int i5, int i6) {
        androidx.fragment.app.t1 t1Var = this.f2389d;
        Object obj = t1Var.f2102i.get(i5);
        Object obj2 = t1Var.f2103v.get(i6);
        return (obj == null || obj2 == null) ? obj == null && obj2 == null : ((v) ((AsyncListDiffer) t1Var.f2105x).f2257b.f2384b).areItemsTheSame(obj, obj2);
    }

    @Override // androidx.recyclerview.widget.c
    public final Object getChangePayload(int i5, int i6) {
        androidx.fragment.app.t1 t1Var = this.f2389d;
        Object obj = t1Var.f2102i.get(i5);
        Object obj2 = t1Var.f2103v.get(i6);
        if (obj == null || obj2 == null) {
            throw new AssertionError();
        }
        return ((v) ((AsyncListDiffer) t1Var.f2105x).f2257b.f2384b).getChangePayload(obj, obj2);
    }

    @Override // androidx.recyclerview.widget.c
    public final int getNewListSize() {
        return this.f2389d.f2103v.size();
    }

    @Override // androidx.recyclerview.widget.c
    public final int getOldListSize() {
        return this.f2389d.f2102i.size();
    }
}
