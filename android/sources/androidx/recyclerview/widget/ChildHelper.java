package androidx.recyclerview.widget;

import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class ChildHelper {
    public final z0 a;

    /* renamed from: e, reason: collision with root package name */
    public View f2266e;

    /* renamed from: d, reason: collision with root package name */
    public int f2265d = 0;

    /* renamed from: b, reason: collision with root package name */
    public final h f2263b = new h(0);

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f2264c = new ArrayList();

    public ChildHelper(z0 z0Var) {
        this.a = z0Var;
    }

    public final void a(View view, int i5, boolean z5) {
        RecyclerView recyclerView = this.a.a;
        int childCount = i5 < 0 ? recyclerView.getChildCount() : f(i5);
        this.f2263b.J(childCount, z5);
        if (z5) {
            i(view);
        }
        recyclerView.addView(view, childCount);
        recyclerView.dispatchChildAttached(view);
    }

    public final void b(View view, int i5, ViewGroup.LayoutParams layoutParams, boolean z5) {
        RecyclerView recyclerView = this.a.a;
        int childCount = i5 < 0 ? recyclerView.getChildCount() : f(i5);
        this.f2263b.J(childCount, z5);
        if (z5) {
            i(view);
        }
        RecyclerView.ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
        if (childViewHolderInt != null) {
            if (!childViewHolderInt.isTmpDetached() && !childViewHolderInt.shouldIgnore()) {
                StringBuilder sb2 = new StringBuilder("Called attach on a child which is not detached: ");
                sb2.append(childViewHolderInt);
                throw new IllegalArgumentException(a3.e.h(recyclerView, sb2));
            }
            if (RecyclerView.sVerboseLoggingEnabled) {
                Log.d("RecyclerView", "reAttach " + childViewHolderInt);
            }
            childViewHolderInt.clearTmpDetachFlag();
        } else if (RecyclerView.sDebugAssertionsEnabled) {
            StringBuilder sb3 = new StringBuilder("No ViewHolder found for child: ");
            sb3.append(view);
            sb3.append(", index: ");
            sb3.append(childCount);
            throw new IllegalArgumentException(a3.e.h(recyclerView, sb3));
        }
        recyclerView.attachViewToParent(view, childCount, layoutParams);
    }

    public final void c(int i5) {
        int f2 = f(i5);
        this.f2263b.K(f2);
        RecyclerView recyclerView = this.a.a;
        View childAt = recyclerView.getChildAt(f2);
        if (childAt != null) {
            RecyclerView.ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(childAt);
            if (childViewHolderInt != null) {
                if (childViewHolderInt.isTmpDetached() && !childViewHolderInt.shouldIgnore()) {
                    StringBuilder sb2 = new StringBuilder("called detach on an already detached child ");
                    sb2.append(childViewHolderInt);
                    throw new IllegalArgumentException(a3.e.h(recyclerView, sb2));
                }
                if (RecyclerView.sVerboseLoggingEnabled) {
                    Log.d("RecyclerView", "tmpDetach " + childViewHolderInt);
                }
                childViewHolderInt.addFlags(IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
            }
        } else if (RecyclerView.sDebugAssertionsEnabled) {
            StringBuilder sb3 = new StringBuilder("No view at offset ");
            sb3.append(f2);
            throw new IllegalArgumentException(a3.e.h(recyclerView, sb3));
        }
        recyclerView.detachViewFromParent(f2);
    }

    public final View d(int i5) {
        return this.a.a.getChildAt(f(i5));
    }

    public final int e() {
        return this.a.a.getChildCount() - this.f2264c.size();
    }

    public final int f(int i5) {
        if (i5 < 0) {
            return -1;
        }
        int childCount = this.a.a.getChildCount();
        int i6 = i5;
        while (i6 < childCount) {
            h hVar = this.f2263b;
            int F = i5 - (i6 - hVar.F(i6));
            if (F == 0) {
                while (hVar.H(i6)) {
                    i6++;
                }
                return i6;
            }
            i6 += F;
        }
        return -1;
    }

    public final View g(int i5) {
        return this.a.a.getChildAt(i5);
    }

    public final int h() {
        return this.a.a.getChildCount();
    }

    public final void i(View view) {
        this.f2264c.add(view);
        RecyclerView.ViewHolder childViewHolderInt = RecyclerView.getChildViewHolderInt(view);
        if (childViewHolderInt != null) {
            childViewHolderInt.onEnteredHiddenState(this.a.a);
        }
    }

    public final int j(View view) {
        int indexOfChild = this.a.a.indexOfChild(view);
        if (indexOfChild != -1) {
            h hVar = this.f2263b;
            if (!hVar.H(indexOfChild)) {
                return indexOfChild - hVar.F(indexOfChild);
            }
        }
        return -1;
    }

    public final void k(int i5) {
        z0 z0Var = this.a;
        int i6 = this.f2265d;
        if (i6 == 1) {
            throw new IllegalStateException("Cannot call removeView(At) within removeView(At)");
        }
        if (i6 == 2) {
            throw new IllegalStateException("Cannot call removeView(At) within removeViewIfHidden");
        }
        try {
            int f2 = f(i5);
            View childAt = z0Var.a.getChildAt(f2);
            if (childAt != null) {
                this.f2265d = 1;
                this.f2266e = childAt;
                if (this.f2263b.K(f2)) {
                    l(childAt);
                }
                z0Var.a(f2);
            }
            this.f2265d = 0;
            this.f2266e = null;
        } catch (Throwable th2) {
            this.f2265d = 0;
            this.f2266e = null;
            throw th2;
        }
    }

    public final void l(View view) {
        RecyclerView.ViewHolder childViewHolderInt;
        if (!this.f2264c.remove(view) || (childViewHolderInt = RecyclerView.getChildViewHolderInt(view)) == null) {
            return;
        }
        childViewHolderInt.onLeftHiddenState(this.a.a);
    }

    public final String toString() {
        return this.f2263b.toString() + ", hidden list:" + this.f2264c.size();
    }
}
