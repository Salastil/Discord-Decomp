package androidx.recyclerview.widget;

import androidx.collection.SimpleArrayMap;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class ViewInfoStore {
    public final SimpleArrayMap a = new SimpleArrayMap(0);

    /* renamed from: b, reason: collision with root package name */
    public final s.k f2354b = new s.k();

    public interface ProcessCallback {
        void a(RecyclerView.ViewHolder viewHolder);

        void b(RecyclerView.ViewHolder viewHolder, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo2);

        void c(RecyclerView.ViewHolder viewHolder, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo2);

        void d(RecyclerView.ViewHolder viewHolder, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo2);
    }

    public final void a(RecyclerView.ViewHolder viewHolder, RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo) {
        SimpleArrayMap simpleArrayMap = this.a;
        u1 u1Var = (u1) simpleArrayMap.get(viewHolder);
        if (u1Var == null) {
            u1Var = u1.a();
            simpleArrayMap.put(viewHolder, u1Var);
        }
        u1Var.f2478c = itemHolderInfo;
        u1Var.a |= 8;
    }

    public final RecyclerView.ItemAnimator.ItemHolderInfo b(RecyclerView.ViewHolder viewHolder, int i5) {
        u1 u1Var;
        RecyclerView.ItemAnimator.ItemHolderInfo itemHolderInfo;
        SimpleArrayMap simpleArrayMap = this.a;
        int d6 = simpleArrayMap.d(viewHolder);
        if (d6 >= 0 && (u1Var = (u1) simpleArrayMap.i(d6)) != null) {
            int i6 = u1Var.a;
            if ((i6 & i5) != 0) {
                int i10 = i6 & (~i5);
                u1Var.a = i10;
                if (i5 == 4) {
                    itemHolderInfo = u1Var.f2477b;
                } else {
                    if (i5 != 8) {
                        throw new IllegalArgumentException("Must provide flag PRE or POST");
                    }
                    itemHolderInfo = u1Var.f2478c;
                }
                if ((i10 & 12) == 0) {
                    simpleArrayMap.g(d6);
                    u1Var.a = 0;
                    u1Var.f2477b = null;
                    u1Var.f2478c = null;
                    u1.f2476d.release(u1Var);
                }
                return itemHolderInfo;
            }
        }
        return null;
    }

    public final void c(RecyclerView.ViewHolder viewHolder) {
        u1 u1Var = (u1) this.a.get(viewHolder);
        if (u1Var == null) {
            return;
        }
        u1Var.a &= -2;
    }

    public final void d(RecyclerView.ViewHolder viewHolder) {
        s.k kVar = this.f2354b;
        int f2 = kVar.f() - 1;
        while (true) {
            if (f2 < 0) {
                break;
            }
            if (viewHolder == kVar.g(f2)) {
                Object[] objArr = kVar.f17684i;
                Object obj = objArr[f2];
                Object obj2 = s.l.a;
                if (obj != obj2) {
                    objArr[f2] = obj2;
                    kVar.f17682d = true;
                }
            } else {
                f2--;
            }
        }
        u1 u1Var = (u1) this.a.remove(viewHolder);
        if (u1Var != null) {
            u1Var.a = 0;
            u1Var.f2477b = null;
            u1Var.f2478c = null;
            u1.f2476d.release(u1Var);
        }
    }
}
