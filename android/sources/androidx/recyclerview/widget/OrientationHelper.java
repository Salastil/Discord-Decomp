package androidx.recyclerview.widget;

import android.graphics.Rect;
import android.view.View;
import androidx.recyclerview.widget.RecyclerView;

/* loaded from: classes.dex */
public abstract class OrientationHelper {
    public final RecyclerView.LayoutManager a;

    /* renamed from: b, reason: collision with root package name */
    public int f2300b = Integer.MIN_VALUE;

    /* renamed from: c, reason: collision with root package name */
    public final Rect f2301c = new Rect();

    public OrientationHelper(RecyclerView.LayoutManager layoutManager) {
        this.a = layoutManager;
    }

    public static OrientationHelper a(RecyclerView.LayoutManager layoutManager, int i5) {
        if (i5 == 0) {
            return new r0(layoutManager);
        }
        if (i5 == 1) {
            return new s0(layoutManager);
        }
        throw new IllegalArgumentException("invalid orientation");
    }

    public abstract int b(View view);

    public abstract int c(View view);

    public abstract int d(View view);

    public abstract int e(View view);

    public abstract int f();

    public abstract int g();

    public abstract int h();

    public abstract int i();

    public abstract int j();

    public abstract int k();

    public abstract int l();

    public final int m() {
        if (Integer.MIN_VALUE == this.f2300b) {
            return 0;
        }
        return l() - this.f2300b;
    }

    public abstract int n(View view);

    public abstract int o(View view);

    public abstract void p(int i5);
}
