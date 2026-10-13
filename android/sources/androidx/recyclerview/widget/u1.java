package androidx.recyclerview.widget;

import androidx.core.util.Pools$SimplePool;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public final class u1 {

    /* renamed from: d, reason: collision with root package name */
    public static final Pools$SimplePool f2476d = new Pools$SimplePool(20);
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public RecyclerView.ItemAnimator.ItemHolderInfo f2477b;

    /* renamed from: c, reason: collision with root package name */
    public RecyclerView.ItemAnimator.ItemHolderInfo f2478c;

    public static u1 a() {
        u1 u1Var = (u1) f2476d.acquire();
        return u1Var == null ? new u1() : u1Var;
    }
}
